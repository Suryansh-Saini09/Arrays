#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int newmax[n];
    int x =0;
    for (int i = n-1; i >= 0; i--)
    {
         x = max(x,arr[i]);
        newmax[i] =x; 
    }
    for(int i =0; i<n; i++)
    {
        cout << newmax[i] << " ";
    }
    return 0;
    
}