#include<iostream>
using namespace std;

bool checkSortedArray(int arr[],int n,int i){
    if(i==n-1 ){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return checkSortedArray(arr,n,i+1);
}
int main(){
    int arr1[5]={1,2,6,8,5};
    cout<<checkSortedArray(arr1,5,0);
    return 0;
}