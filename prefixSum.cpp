#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    // Input array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Calculate prefix sum using a variable
    int sum = 0;
    cout << "Prefix sums: ";
    for(int i = 0; i < n; i++){
        sum += arr[i];  // add current element to sum
        cout << sum << " ";  // print current prefix sum
    }
    cout << endl;

    return 0;
}
