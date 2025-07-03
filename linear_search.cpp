#include<iostream>
using namespace std;
int main (){
    int a[4] = {12,2,4,20};
    int n = 4, i;
    int key = 200;
    for ( i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout<<"Key found at index "<<i;
            break;
        }
    }
    
    cout<<"key not found"<<endl;
        return 0;
    }