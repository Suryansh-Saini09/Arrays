#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr(5);
    cout << "enter a sorted array";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "element to find" << endl;
    cin >> key;
    int low = 0;
    int high = arr.size() - 1;
    bool f = false;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            cout << "element found at index " << mid << endl;
            f = true;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

        if (!f)
        {
            cout << "Element not found in array" << endl;
        }
    }
}