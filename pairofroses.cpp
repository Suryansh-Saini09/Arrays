#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int t;
	 cin >> t;
	  while(t>0){
		  t--;
		  int n;
		   cin >> n;
		    int arr[n];
			for(int i =0; i<n; i++){
				cin >> arr[i];
			}
			// for(int i =0; i<n; i++){
			// 	cout << arr[i] << " ";
			// }cout << endl;
			sort(arr, arr+n);
			int m;
			 cin>>m;
			 int l =0, r= n-1, p1, p2 , diff=INT_MAX;

			 while(l<r){
				 int sum = arr[l]+arr[r];
				 if(sum == m){
				   int ok = arr[r]-arr[l];
				   if(ok<diff){
					   p1 = arr[l];
					   p2 = arr[r];
					   ok = diff;
					   l++;
					   r--;
				 }
				 }else if( sum < m){
					 l++;
				 }else{
					 r--;
				 }
			 }
			 cout << "Deepak should buy roses whose prices are " <<p1 <<  " and " << p2 << "." << endl; 
	  }
	return 0;
}