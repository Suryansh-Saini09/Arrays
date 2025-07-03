#include<iostream>
#include<vector>

using namespace std;
int main (){

int n;
cin>>n;

vector<int>v(n);
for (int i = 0; i < n; i++)
{
    cin>>v[i];
}

int s1 = 0; //track score of player 1
int s2 =0; // track score of player 2

bool serejaTurn = true;

int lo = 0;
int hi = n -1 ;

if (serejaTurn)
{
    if (v[lo] > v[hi])
    {
        s1 += v[hi];
        lo++;
    }
    else{

        s1 += v[hi];
        hi--;

    }
    serejaTurn = false;
    
} else{
    if (v[lo] > v[hi])
    {
        s2 += v[lo];
        lo++;
    }
    else
    {
        s2 += v[hi];
        hi++;
    }
    
    serejaTurn = true;
    
}
    cout<<s1<<" "<<s2<<endl;




    

    return 0;
}