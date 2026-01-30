#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "12345";
    string s2 = "9876543210";

    // Convert string to int
    int num1 = stoi(s1);

    // Convert string to long long
    long long num2 = stoll(s2);

    cout << "String: " << s1 << " -> int: " << num1 << endl;
    cout << "String: " << s2 << " -> long long: " << num2 << endl;

    return 0;
}
