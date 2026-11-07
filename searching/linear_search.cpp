// Problem: Linear Search
// Topic: Searching
// Approach: Check each element from left to right
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
using namespace std;

int linsearch(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << " Enter size of array : ";
    cin >> size;

    int arr[size];
    cout << " Enter elements of array : ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << " Enter key : ";
    cin >> key;

    int found = linsearch(arr, size, key);

    if(found != -1)
    {
        cout << " Found at index " << found;
    }
    else
    {
        cout << " Not Found ";
    }

    return 0;

}