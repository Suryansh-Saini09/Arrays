#include<iostream>
using namespace std;
int main (){
    int n;
    cin>> n;

    vector<int> v(n);
    for(int i = 0; i< n; i++){
        cin>>v[i];
    }
    for (int i = n-1; i>= 1; i--)
    {
        swap(v[i], v[i-1]);
    }
    for (int  i = 0; i < n; i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
    

    return 0;

}