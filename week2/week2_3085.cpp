#include<iostream>

using namespace std;

int N, ans = 1;
char  board[51][51];

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void count(){
    int cnt = 0;
    for(int i = 1; i<=N ; i++){
        cnt = 1;
        for(int j = 1; j<N ; j++){
            if(board[i][j]==board[i][j+1]){
                cnt += 1;
            }else{
                cnt = 1;
            }
            if(cnt>ans) ans = cnt;
        }
    }

    for(int j = 1; j<=N ; j++){
        cnt = 1;
        for(int i = 1; i<N ; i++){
            if(board[i][j]==board[i+1][j]){
                cnt += 1;
            }else{
                cnt = 1;
            }
            if(cnt>ans) ans = cnt;
        }
    }
}


int main(){
    cin>>N;
    for(int i = 1 ; i<=N ; i++){
        for(int j = 1; j<=N ; j++){
            cin>>board[i][j];
        }
    }

    // 1. horizontal
    for(int i = 1; i<=N; i++){
        for(int j = 1; j<N; j++){
            if(board[i][j] != board[i][j+1]){
                swap(board[i][j], board[i][j+1]);
                count();
                swap(board[i][j], board[i][j+1]);
            }else{
                continue;
            }
        }
    }

    //2. vertcial
    for(int j = 1; j<=N; j++){
        for(int i = 1; i<N; i++){
            if(board[i][j] != board[i+1][j]){
                swap(board[i][j], board[i+1][j]);
                count();
                swap(board[i][j], board[i+1][j]);
            }else{
                continue;
            }
        }
    }

    cout<<ans<<endl;


    return 0;
}