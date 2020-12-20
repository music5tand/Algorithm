#include<iostream>
#include<vector>
using namespace std;

int max(int a, int b, int c){
    if(a<b){
        if(b<c){
            return c;
        }else{
            return b;
        }
    }else{
        if(a<c){
            return c;
        }else{
            return a;
        }
    }
}


int main(){
    vector<int> amount(10000);
    vector<int> dp(10000);
    int i, N, ans;

    cin>>N;
        for(i = 1; i<=N; i++){
        cin>>amount[i];
    }

    dp[0] = 0;
    dp[1] = amount[1];
    dp[2] = amount[1]+amount[2];


    for(i = 3; i<=N; i++){
        dp[i] = max(dp[i-1], dp[i-2]+amount[i],dp[i-3]+amount[i-1]+amount[i]);
    }
    cout<<dp[N];

    return 0;
}