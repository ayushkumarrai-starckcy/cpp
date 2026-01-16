#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1, 3};


    sort(v.begin(), v.end());

    cout << "Sorted vector: ";
    for (int x : v) {
        cout << x << " ";
    }
    
    cout << endl;

    sort(v.begin(), v.end(), greater<int>());

    cout << "Sorted (descending): ";
    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
