
// O(n*k) solution for finding maximum sum of
// a subarray of size k

//this is brout force appproch
//time complexity O(n*k)

// #include <iostream>
// #include<climits>
// using namespace std;

// // Returns maximum sum in a subarray of size k.
// int maxSum(int arr[], int n, int k){
//     // Initialize result
//     int max_sum = INT_MIN;
//     // Consider all blocks starting with i.
//     for (int i = 0; i < n - k + 1; i++) {
//         int current_sum = 0;
//         for (int j = 0; j < k; j++)
//             current_sum = current_sum + arr[i + j];
//         // Update result if required.
//         max_sum = max(current_sum, max_sum);
//     }
//     return max_sum;
// }
// int main(){
//     int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 2 };
//     int k = 4;
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << maxSum(arr, n, k);
//     return 0;
// }


// //sliding window
//time complexityO(n)

#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Input array
    int arr[] = {7, 1, 2, 5, 4, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Size of the window
    int windowSize = 4;

    // Initialize variables
    int maxSum = INT_MIN;   // To store the maximum sum
    int currentSum = 0;     // To store the current window sum
    int startIndex = 0;     // Starting index of the max sum window

    // Calculate the sum of the first window
    for (int i = 0; i < windowSize; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    // Start of current window
    int windowStart = 0;

    // Slide the window through the array
    for (int windowEnd = windowSize; windowEnd < n; windowEnd++) {
        // Subtract element going out and add the new element coming in
        currentSum += arr[windowEnd] - arr[windowStart];

        // Move window start forward
        windowStart++;

        // Update max sum and starting index if needed
        if (currentSum > maxSum) {
            maxSum = currentSum;
            startIndex = windowStart;
        }
    }

    // Output the results
    cout << "Maximum sum of subarray of size " << windowSize << " is: " << maxSum << endl;
    cout << "Starting index of subarray: " << startIndex << endl;

    return 0;
}
