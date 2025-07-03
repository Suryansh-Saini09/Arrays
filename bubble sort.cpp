#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n;
    cin>>n;
    bool flag = false;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                flag = true;
            }
            else if (flag == false)
            {
                break;
            }
            
            
        }
        cout<<arr[i];
    }

    return 0;
}