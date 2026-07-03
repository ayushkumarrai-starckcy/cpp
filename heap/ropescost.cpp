#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int i=0; i<n; i++){
        minHeap.push(arr[i]);
    }

    int cost = 0;
    while(minHeap.size() > 1){
        int x = minHeap.top();
        minHeap.pop();
        int y = minHeap.top();
        minHeap.pop();
        cost += (x + y);
        minHeap.push(x + y);
    }
    cout << "Minimum cost to concatenate all ropes: " << cost << endl;
    return 0;
}