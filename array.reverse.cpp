#include<iostream>
using namespace std;
#include<algorithm>
int main (){
    int n;
    cout<<"enter size :";
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int lo = 0 ;
    int hi = n -1;
    while (lo<hi)
    {
        swap(arr[lo], arr[hi]);
        lo++;
        hi--;
    }
    
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
    cout<<endl;

    
    return 0;
}