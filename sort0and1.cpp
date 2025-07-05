#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	int count= 0;
	for(int i =0; i<n; i++){
		cin>>arr[i];
		if(arr[i]==0){
			count++;
		}
	}
	for(int i =0; i<count; i++){
		cout<<0<<" ";
	}
	for(int i =count; i<n; i++){
		cout<<1<<" ";
	}
	return 0;
}