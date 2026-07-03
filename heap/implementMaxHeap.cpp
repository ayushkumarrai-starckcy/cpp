#include<iostream>
using namespace std;

class MaxHeap{
public:
    int arr[100];
    int idx;

    MaxHeap(){
        idx = 1;
    }

    int top(){
        return arr[1];
    }

    void push(int x){
        arr[idx] = x;
        int i = idx;
        idx++;

        while(i > 1 && arr[i] > arr[i/2]){
            swap(arr[i], arr[i/2]);
            i = i/2;
        }
    }

    int size(){
        return idx - 1;
    }

    void pop() {
    if (idx == 1) return;      // Heap is empty

    idx--;
    arr[1] = arr[idx];

    int i = 1;

    while (true) {
        int left = 2 * i;
        int right = 2 * i + 1;
        int largest = i;

        // Compare with left child
        if (left < idx && arr[left] > arr[largest])
            largest = left;

        // Compare with right child
        if (right < idx && arr[right] > arr[largest])
            largest = right;

        // Heap property is satisfied
        if (largest == i)
            break;

        // Swap with the larger child
        swap(arr[i], arr[largest]);
        i = largest;
    }
}

    void print(){
        for(int i = 1; i < idx; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    MaxHeap pq;

    pq.push(10);
    pq.push(20);
    cout << pq.top() << " " << pq.size() << endl;

    pq.push(11);
    pq.push(2);

    pq.print();

    pq.pop();

    cout << pq.top() << " " << pq.size() << endl;
    pq.print();

    return 0;
}