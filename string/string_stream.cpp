#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string str = "Ayush is a good boy";
    stringstream ss(str);
    string temp;

    while (ss >> temp)
    {
        cout<<temp<<endl;
    }
    
    return 0;
}