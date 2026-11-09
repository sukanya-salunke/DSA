// Problem: Insertion Sort
// Topic: Sorting
// Approach: Insert each element into its correct position
// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) 
{
    for(int i = 1; i < n; i ++) 
    {
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main () 
{
    int n;
    cout << "Enter size : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements : ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array : ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}