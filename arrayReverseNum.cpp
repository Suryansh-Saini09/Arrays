#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 1; i < n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n/2; i++){
        int temp = v[i];
        v[i] = v[n-1-i];
        v[n-1-i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
    
    
}