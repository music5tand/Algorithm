#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool cmp(const pair<int,int> &a, const pair<int,int> &b){
    if (a.second != b.second){
        return a.second < b.second;
    }else{
        a.first < b.first;
    }

}


int main(){
    int cnt, pos, N;

    cin>>N;
    vector<pair<int,int>> meeting(N);

    // 0. input
    for(int i = 0; i<N; i++){
        cin>>meeting[i].first>>meeting[i].second;  
    }
    
    //1 . sort by ending time.
    sort(&meeting[0], &meeting[N],cmp);


    //2. count
    for (int i = 0; i < N ; i++){
        if( pos<= meeting[i].first){
            pos = meeting[i].second;
            cnt++;
        }
    }

    cout<<cnt<<'\n';
    return 0;
}