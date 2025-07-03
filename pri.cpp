#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;  // Read the number of elements

    int count_0 = 0, count_1 = 0;
    
    // Read the sequence and count 0s and 1s
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        if (num == 0) count_0++;
        else count_1++;
    }
    
    // Print all 0s first
    for (int i = 0; i < count_0; i++) cout << "0 ";
    
    // Print all 1s after that
    for (int i = 0; i < count_1; i++) cout << "1 ";

    cout << endl; // Ensure the output ends with a newline

    return 0;
}
