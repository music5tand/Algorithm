#include<iostream>
#include<vector>
using namespace std;

int min(int n, int m){return n<m?n:m;}

int main()
{
    int i, N, ans;
    vector<vector<int>> rgb;
    vector<vector<int>> cost;

    // #0. RGB input
    cin>>N;
    rgb.resize(N,vector<int>(3, 0));
    cost.resize(N,vector<int>(3, 0));
    
    for(i = 0; i<N; i++){
        cin>>rgb[i][0]>>rgb[i][1]>>rgb[i][2];
    }

    // #1. Dp
    cost[0][0] = rgb[0][0];
    cost[0][1] = rgb[0][1];
    cost[0][2] = rgb[0][2];


    for(i = 1; i<N; i++){
        cost[i][0] = min(cost[i-1][1], cost[i-1][2]) + rgb[i][0];
        cost[i][1] = min(cost[i-1][0], cost[i-1][2]) + rgb[i][1];
        cost[i][2] = min(cost[i-1][0], cost[i-1][1]) + rgb[i][2];
    }

    ans = __INT_MAX__;
    for(i = 0; i<3; i++){
        if(cost[N-1][i]<ans){ans = cost[N-1][i];}
    }
    
    cout<<ans<<endl;

    return 0;
}