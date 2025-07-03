#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n , k;
    cin>>n>>k;

    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
       cin>>v[i];
    }

    k = k % n ;
    // reverse the whole arr
    reverse(v.begin(), v.end());

    //reverse the first element
    reverse(v.begin(), v.begin() + k); // [0 , k]

    // reverse the last indicies
    reverse(v.begin() + k, v.end());

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
    




}