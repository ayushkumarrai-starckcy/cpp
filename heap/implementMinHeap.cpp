#include<iostream>
using namespace std;

class MinHeap{
    public:
        int arr[100];
        int idx;

        MinHeap(){
            idx = 1;
        }

        int top(){
            return arr[1];
        }

        void push(int x){
            arr[idx] = x;
            int i = idx;
            idx++;
            while(i > 1 && arr[i] < arr[i/2]){
                swap(arr[i], arr[i/2]);
                i = i/2;
            }
        }

        int size(){
            return idx - 1;
        }

        void pop(){
            idx--;
            arr[1] = arr[idx];
            int i = 1;
            while(true){
                int left = 2 * i;
                int right = 2 * i + 1;
                
                while(true){
                    if(left >= idx) break;

                    if(right >= idx){
                        if(arr[i] > arr[left]){
                            swap(arr[left], arr[i]);
                            i = left;
                        }
                        break;
                    }

                    if(arr[left] < arr[right]){
                        if(arr[i] > arr[left]){
                            swap(arr[left], arr[i]);
                            i = left;
                        }
                        else break;
                    }

                    else{
                        if(arr[i] > arr[right]){
                            swap(arr[right], arr[i]);
                            i = right;
                        }
                        else break;
                    }
                }
            }
        }

        // standard implementation of pop() function
        
        // void pop() {
        //     if (idx == 1) return;   // Heap is empty

        //     idx--;
        //     arr[1] = arr[idx];

        //     int i = 1;

        //     // Heapify Down
        //     while (true) {
        //         int left = 2 * i;
        //         int right = 2 * i + 1;
        //         int smallest = i;

        //         if (left < idx && arr[left] < arr[smallest])
        //             smallest = left;

        //         if (right < idx && arr[right] < arr[smallest])
        //             smallest = right;

        //         if (smallest == i)
        //             break;

        //         swap(arr[i], arr[smallest]);
        //         i = smallest;
        //     }
        // }

        void print(){
            for(int i=1; i<idx; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    MinHeap pq;
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
