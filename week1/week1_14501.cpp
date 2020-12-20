#include<iostream>
using namespace std;


int max(int n, int m){return n>m?n:m;}
int main(){
    int T[16], P[16], dp[16];
    int i, j, n, ans;
    
    cin>>n;

    for(i = 1; i<=n; i++){
        cin>>T[i]>>P[i];
        dp[i] = P[i];
    }

    for(i = 2; i<=n; i++){
        for(j=1 ; j<i; j++){
            if(i-j>=T[j]){
                dp[i] = max(P[i]+dp[j],dp[i]);
            }
        }
    }

    ans = 0;
    for(i = 1; i<=n; i++){
        if(i+T[i]<=n+1){
            if(ans<dp[i]){
                ans = dp[i];
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}

