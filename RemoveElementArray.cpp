#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int j=0;
    for(int i =0; i<n; i++){
        if(arr[i] != target){
            arr[j] = arr[i];
            j++;
        }
    }
    arr.resize(j);
    for(int i =0; i<j; i++){
        cout<<arr[i]<<" ";
    }
}