// Problem: Two Sum
// Platform: LeetCode
// Difficulty: Easy
// Approach: Brute force (check every pair)
// Time Complexity: O(n^2)
// Space Complexity: O(n)

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int size;
    int target;

    cout << "Enter number of elements: ";
    cin >> size;

    vector<int> nums(size);

    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Indexes: " << i << " " << j << endl;
                return 0;
            }
        }
    }

    cout << "No pair found." << endl;
    return 0;
}