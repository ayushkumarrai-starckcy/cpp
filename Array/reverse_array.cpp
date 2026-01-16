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
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    // Input elements
    read(v);

    // reverse 
    for(int i = 0, j = v.size() - 1; i <=j; i++, j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    display(v);

    // reverse(v.begin(), v.end());

    return 0;
}