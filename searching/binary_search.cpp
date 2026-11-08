// Problem: Binary Search
// Topic: Searching
// Approach: Repeatedly divide the sorted array into two halves
// Time Complexity: O(Log n)
// Space Complexity: O(1)

#include<iostream>
using namespace std;

int binsearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            return mid;
        }
        else if(key < arr[mid]) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[size];
    cout << "Enter elements in sorted order : ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter keys : ";
    cin >> key;

    int ans = binsearch(arr, size, key);
    if(ans != -1) {
        cout << "Element found at index " << ans << endl; 
    }
    else {
        cout << "Not found." << endl;
    }
    return 0;
}