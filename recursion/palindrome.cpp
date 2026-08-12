#include<iostream>
using namespace std;

bool ispalindrome2(string s){
    int i = 0, j = s.length() - 1;
    while(i < j){
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

bool ispalindrome(string s, int i, int j){
    if(i >= j) return true;
    if(s[i] != s[j]) return false;
    return ispalindrome(s, i + 1, j - 1);
}

int main(){
    string s = "racecar";
    cout<< ispalindrome(s, 0, s.length() - 1);
}