#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}



	// lmax fill karne ke liye 
	vector<int>lmax(n);
	
	lmax[0] = 0;
	int x = arr[0];
	for(int i =1; i<n; i++){
		lmax[i] = x;
		x = max(x,arr[i]);
	}
	

	// rmax fill karne ke liye 
	vector<int>rmax(n);
	
	rmax[n-1] = 0;
	int y = arr[n-1];
	for(int i = n-2; i>=0; i--){
		rmax[i] = y;
		y = max(arr[i],y);
	}


	// print 
	// for(int i =0; i<n; i++){
	// 	cout << lmax[i] <<" ";
	// }
	// cout << endl;
	// for(int i =0; i<n; i++){
	// 	cout << rmax[i] <<" ";
	// }

	int sum = 0;		
	for(int i =0 ; i<n; i++){
		int x = min(lmax[i], rmax[i]) -arr[i];
		if(x>0)sum+=x;
		
		
	}
	cout<<sum<<" ";
	
	return 0;
}