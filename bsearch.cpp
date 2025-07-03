#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;
    int low = 0;
    int high = n - 1;
    bool found = false;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            cout << "element found at index " << mid;
            found = true;
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (!found)
    {
        cout << "not found" << endl;
    }
    return 0;
}