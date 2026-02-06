#include<iostream>
using namespace std;
void funct(){
    cout<<"I love you....\n";
    funct();
}
int main(){
    funct();
    return 0;
}