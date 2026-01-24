#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "I like to code";
    cout << str.size()<< endl;
    cout << str.length()<< endl;

    string str1 = "abcd";
    cout << str1 << endl;

    str1.push_back('e');
    cout << str1 << endl;

    str1.pop_back();
    cout << str1 << endl;

    // cout << str1.substr(idx,len);
    cout << str1.substr(1,3)<< endl;

    string str2 = "abc";
    str2 = str2 + "123";
    cout<< str2 <<endl;

    reverse(str2.begin(), str2.end());
    cout << str2 << endl;

    // integer to string
    int x = 12345;
    string s = to_string(x);
    cout<<s<<endl;

    return 0;
}