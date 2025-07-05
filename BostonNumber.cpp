#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum = 0;
    int n =num;
    while (n>0)
    {
        sum += n%10;
        n /= 10;
    }
    int factor = 0;
    int temp = num;

    // Factorization and sum of digits of factors
    for(int i=2; i<=temp; i++) {
        while(temp % i == 0) {
            int x = i;
            // Add sum of digits of i
            while(x > 0) {
                factor += x % 10;
                x /= 10;
            }
            temp /= i;
        }
    }

    if(factor == sum)
        cout << "1" << endl;
    else
        cout << "0" << endl;

    return 0;
}
 
    