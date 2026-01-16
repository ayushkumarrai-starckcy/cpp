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

void reverse(vector<int> &v){
    int i = 0;
    int j = v.size() - 1;
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int n, i, j;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    read(v);

    cout << "Enter the start and end you want to reverse: ";
    cin >> i >> j;

    reverse_part(i, j, v);
    display(v);

    reverse(v);
    display(v);

    return 0;
}