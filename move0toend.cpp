#include<iostream>
#include<vector>
using namespace std;
int main () {
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	int j = 0;
	for(int i =0; i<n; i++)
	{
		if(arr[i] != 0){
			arr[j] = arr[i];
			j++;
		}
	}
	for(int i=j; i<n; i++){
		arr[i] = 0;
	}
	for(int i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}