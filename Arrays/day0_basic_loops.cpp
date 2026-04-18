#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Print array using loop
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/*
Problem: Print elements of an array using a loop

Approach:
- Store elements in an array
- Use a for loop to iterate from index 0 to n-1
- Print each element

Time Complexity: O(n)
Space Complexity: O(1)
*/
