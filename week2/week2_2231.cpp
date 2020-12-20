#include<iostream>

using namespace std;

int main(){
    int N, sum, pos, add;

    cin>>N;

    for(int i = 1; i<N; i++){
        sum = i;
        pos = i;
        while(pos!=0){
            add = pos;
            add %= 10;
            sum +=add;
            pos /= 10;
        }        

        if(sum==N){
            cout<<i<<endl;
            return 0;
        }
    }
    
    cout<<"0"<<endl;

    return 0;
}
