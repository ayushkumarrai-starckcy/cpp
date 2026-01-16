#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void read(vector<int> &a){
    cout << "Enter elements:\n";
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
}

void display(vector<int> &a){
    for(int i =0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void reverse_part(int i, int j, vector<int> &v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    read(v);

    cout << "Enter no. of elements you want to rotate(k): ";
    cin >> k;

    if(k > n){
        k = k % n;
    }

    reverse_part(0, n - 1 - k, v);
    reverse_part(n - k, n - 1, v);
    reverse_part(0, n - 1, v);

    display(v);

    return 0;
}