#include<iostream>
#include<vector>
using namespace std;
int main () {
	vector<int>arr(5);
	for(int i =0; i<5; i++){
		cin>>arr[i];
	}
	int max = arr[0];
	for(int i=0; i<5; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	cout<<max;
	return 0;
}