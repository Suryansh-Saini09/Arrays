#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]); // size of array
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        int j = i-1;

        while (j>=0 && arr[j] > x)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;

        cout<<"sorted array :"<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
        }
        
        
    }
    
    
}