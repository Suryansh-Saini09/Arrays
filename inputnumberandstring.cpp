#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;

    char a[1000];

    cin.get();//ignore the '\n' after takig input of number n
    //we read the ip pointer value but did not store it anywhere , thus ignored

    for (int i = 0; i < n; i++)
    {
        cin.getline(a,1000);
        cout<<a<<endl;
    }
    
    return 0;
}