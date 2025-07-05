#include<iostream>
#include<vector>
using namespace std;
int main() {
	//int n;
	//cin>>n;
	vector<int>arr(3);
	for(int i =0; i<3; i++){
		cin>>arr[i];
	}
	int max = arr[0];
	for(int i =0; i<3; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	cout<<max;
	return 0;
}