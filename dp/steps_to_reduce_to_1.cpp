#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<int> dp;

int f(int n){
    if(n==1) return 0;
    if(n == 2 || n == 3) return 1;
    return 1 + min({f(n-1), (n%2==0) ? f(n/2) : INT_MAX, (n%3==0) ? f(n/3) : INT_MAX});
}



int ftd(int n, vector<int>& dp){
    if(n==1) return 0;
    if(dp[n] != -1) return dp[n];
    if(n == 2 || n == 3) return dp[n] = 1;
    return dp[n] = 1 + min({ftd(n-1, dp), (n%2==0) ? ftd(n/2, dp) : INT_MAX, (n%3==0) ? ftd(n/3, dp) : INT_MAX});
}

int fbu(int n){
    dp.clear();
    dp.resize(n+1, -1);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for(int i=4; i<=n; i++){
        dp[i] = 1 + min({dp[i-1], (i%2==0) ? dp[i/2] : INT_MAX, (i%3==0) ? dp[i/3] : INT_MAX});
    }
    return dp[n];
}

int main(){
    int n;
    dp.clear();
    dp.resize(1111, -1);
    cin>>n;
    cout<<fbu(n)<<endl;
    return 0;
}