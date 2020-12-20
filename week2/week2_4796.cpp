#include<iostream>

using namespace std;

int main(){
    int L, P, V, occupied, remainder, i = 1;
    while(1){
        cin >> L >> P >> V;
        if(!L) break;
        occupied = (V/P)*L;
        remainder = V%P;
        if(remainder > L) occupied += L;
        else occupied += V%P;
        cout<<"Case "<<i++<<": "<<occupied<<'\n';

    }
    return 0;
}
