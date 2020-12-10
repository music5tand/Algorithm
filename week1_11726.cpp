#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(1000);
    int i, N, ans;
    v[0] = 1;
    v[1] = 2;

    cin>>N;
    
    for(i = 2; i<N; i++){
        v[i] = (v[i-1]+v[i-2])%10007;
    }

    ans = v[N-1];

    cout<<v[N-1]<<endl;

    return 0;
}