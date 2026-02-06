#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>arr ,int i, int target){
    if(i==arr.size()){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return firstOccurence(arr,i+1,target);
}
int lastOccurence(vector<int>arr ,int i, int target){
    if(i==arr.size()){
        return -1;
    }
    int idxfound = lastOccurence(arr,i+1,target);
    if(idxfound==-1 && arr[i]==target){
        return i;
    }
    return idxfound;
}    
int main(){
    vector<int> arr={1,2,3,3,3,4};
    cout<<lastOccurence(arr,0,4);
    return 0;
}