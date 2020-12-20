#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int N, L, st_point, tape = 0;
    int leakingPipe[1000] = {0, };

    
    // 0 . input
    cin>>N>>L;
    for(int i = 0; i<N; i++){
        cin>>leakingPipe[i];
    }
    // 1. sort
    sort(leakingPipe,leakingPipe + N);

    // 2 . taping the adjacent leaking-points.
    st_point = leakingPipe[0];
    for(int i = 0; i<N; i++){
        if(leakingPipe[i]-st_point>L-1){
            tape++;
            cout<<"adding pnt"<<i<<endl;
            st_point = leakingPipe[i];
        }else{
            if(leakingPipe[i+1] == 0){
                tape++;
            }
        }
    }
    cout<<tape<<'\n';
    return 0;
}
