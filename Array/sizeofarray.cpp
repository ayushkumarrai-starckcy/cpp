#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 5, 2, 5, 35, 63 ,2, 66, 354};
    cout << sizeof(arr)<<endl;

    int n = sizeof(arr)/ sizeof(arr[0]);
    cout << n;
    return 0;
}