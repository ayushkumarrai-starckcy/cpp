#include<iostream>
#include<queue>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void heapify(int i, int arr[], int n){
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }
    if(right<n && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(largest, arr, n);
    }
}

int main(){
    int arr[] = {-1, 10, 2, 14, 11, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=n/2; i>0; i--){
        heapify(i, arr, n);
    }
    print(arr, n);
    
    return 0;
}