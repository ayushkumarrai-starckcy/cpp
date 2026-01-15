#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector
    vector<int> v;

    // Add elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Access elements
    cout << "First element: " << v[0] << endl;

    // Loop through vector
    cout << "All elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Size before pop: " << v.size() << endl;

    // Remove last element
    v.pop_back();

    // Size of vector
    cout << "Size after pop: " << v.size() << endl;

    // capacity of vector
    cout << "capacity of vector: " << v.capacity() << endl;

    return 0;
}
