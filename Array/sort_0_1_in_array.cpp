#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {0, 1, 1, 0, 1, 0, 0, 1};

    int i = 0, j = v.size() - 1;

    while (i < j) {
        if (v[i] == 0)
            i++;
        if (v[j] == 1)
            j--;
        else {
            // swap(v[i], v[j]);
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }

    for (int x : v)
        cout << x << " ";

    return 0;
}
