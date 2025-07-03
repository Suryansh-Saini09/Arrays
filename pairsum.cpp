#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;

    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int t;

    int i =0;
    int j = n-1;

    int cnt = 0;
    while (i<j)
    {
       int pairSum = v[i] + v[j];
       if (pairSum == t)
       {
        cnt++;
        i++;
        j--;

       }else if (pairSum>t)
       {
       j--;
       }else{
        i++;
       }
       
       
    }
    
}