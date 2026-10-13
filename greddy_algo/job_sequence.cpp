#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent a Job
struct Job {
    int id;       // Job Id
    int deadline; // Deadline of job
    int profit;   // Profit if job is over before or on deadline
};

class Solution {
public:
    // Helper comparison function to sort jobs in decreasing order of profit
    static bool comparison(Job a, Job b) {
        return (a.profit > b.profit);
    }

    pair<int, int> JobScheduling(vector<Job>& arr) {
        int n = arr.size();
        
        // Step 1: Sort all jobs according to decreasing order of profit
        sort(arr.begin(), arr.end(), comparison);

        // Step 2: Find the maximum deadline to decide the size of our time slots
        int maxDeadline = 0;
        for (int i = 0; i < n; i++) {
            maxDeadline = max(maxDeadline, arr[i].deadline);
        }

        // Step 3: Create a timeline array initialized to -1 (indicating empty slots)
        // Slots are 1-indexed up to maxDeadline, so size is maxDeadline + 1
        vector<int> slot(maxDeadline + 1, -1);

        int countJobs = 0;
        int maxProfit = 0;

        // Step 4: Iterate through all sorted jobs
        for (int i = 0; i < n; i++) {
            // Try to share this job from its last possible slot (deadline) backwards
            for (int j = arr[i].deadline; j > 0; j--) {
                // If the slot is free, assign this job to it
                if (slot[j] == -1) {
                    slot[j] = arr[i].id; // Occupy the slot
                    countJobs++;
                    maxProfit += arr[i].profit;
                    break; // Move to the next job
                }
            }
        }

        // Return a pair containing total jobs done and maximum profit earned
        return {countJobs, maxProfit};
    }
};

int main() {
    // Example test case
    vector<Job> arr = {{1, 4, 20}, {2, 1, 10}, {3, 1, 40}, {4, 1, 30}};
    
    Solution ob;
    pair<int, int> ans = ob.JobScheduling(arr);
    
    cout << "Number of jobs done: " << ans.first << endl;
    cout << "Maximum Profit earned: " << ans.second << endl;
    
    return 0;
}
