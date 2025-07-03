#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v = {5,3,2,1,0,4};
    sort(v.begin(), v.end());
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}