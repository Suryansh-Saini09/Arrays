#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(int i =0; i<n; i++){
        int pr = 0;
        arr[i] = arr[i] * arr[i];
    }
      sort(arr.begin(), arr.end());
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
