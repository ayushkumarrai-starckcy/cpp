// Method 1:

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    // Input elements
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Output elements
    cout << "Vector elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}

// Method 2:

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     vector<int> v;
//     v.reserve(n); // avoids reallocations
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }

//     cout << "Vector elements are: ";
//     for (int x : v)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }
