#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;

    priority_queue<int, vector<int>, greater<int>> pq; // min heap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);

            // If the size of the heap exceeds k, remove the smallest element
            if (pq.size() > k){
                ans.push_back(pq.top());
                pq.pop();
            }
        }

    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}