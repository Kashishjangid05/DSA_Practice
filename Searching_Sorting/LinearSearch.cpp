//Program of linear search
#include <iostream>
using namespace std;

int main()
{
    int arr[10], i, n, key;
    cout << "enter the size of array";
    cin >> n;
    cout << "enter the elements of array";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the value of key to be searched";
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << key << " is found at index " << i;
            break;
        }
    }
    if (arr[i] != key)
    {
        cout << "element not found";
    }
    return 0;
}
