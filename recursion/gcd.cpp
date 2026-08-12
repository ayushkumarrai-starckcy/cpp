#include<iostream>
using namespace std;

int gcd3(int a, int b){
    for(int i = min(a, b); i > 0; i--){
        if(a % i == 0 && b % i == 0) return i;
    }
    return 1;
}

int gcd2(int a, int b){ 
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int a = 24;
    int b = 60;
    cout << gcd(a, b);
}