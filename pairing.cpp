#include<iostream>
using namespace std;

int pairingFreinds(int n){
    if(n==1 || n==2){
        return n;
    }
    return pairingFreinds(n-1) + (n-1)*pairingFreinds(n-2);
}

int main(){
    cout<<pairingFreinds(3);
    return 0;
}