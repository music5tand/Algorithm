#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


bool cmp(const pair<int,int>&a, const pair<int,int>&b){
    if (a.second == b.second){
        return a.first < b.first;
    }else{
        return a.second < b.second;
    }

}


int main(){
    int cnt = 0, pos = 0, N;
    pair<int,int> meeting[100000];

    // 0. input
    cin>>N;
    for(int i = 0; i<N; i++){
        cin>>meeting[i].first>>meeting[i].second;  
    }
    
    //1 . sort by ending time.
    sort(meeting, meeting+N, cmp);


/*
    //2. count
    for (int i = 0; i < N ; i++){
        if( pos<= meeting[i].first){
            pos = meeting[i].second;
            cnt++;
        }
    }
*/    
    for (int i = 0; i < N ; i++){
        cout<<meeting[i].first<<" "<<meeting[i].second<<'\n';
    }

    // cout<<cnt<<'\n';
    return 0;
}