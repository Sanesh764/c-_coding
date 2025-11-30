#include <iostream>
#include <vector>
#include <algorithm> // for sort()
using namespace std;

// Structure to store start and end time of meetings
struct Interval {
    int start;
    int end;
};

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int> start, ending;

        // Separate start and end times
        for (auto& el : intervals) {
            start.push_back(el.start);
            ending.push_back(el.end);
        }

        // Sort both start and end times
        sort(start.begin(), start.end());
        sort(ending.begin(), ending.end());

        int ans = 0;     // stores the maximum number of rooms required
        int rooms = 0;   // current number of rooms in use
        int i = 0, j = 0;

        // Compare start and end times
        while (i < start.size() && j < ending.size()) {
            if (start[i] < ending[j]) {
                // A new meeting starts before the earliest one ends
                rooms++;
                ans = max(ans, rooms);
                i++;
            } else {
                // A meeting ended, free up a room
                rooms--;
                j++;
            }
        }
        return ans;
    }
};

int main() {
    vector<Interval> meetings = {
        {0, 30},
        {5, 10},
        {15, 20}
    };

    Solution s;
    cout << "Minimum meeting rooms required: " << s.minMeetingRooms(meetings) << endl;

    return 0;
}
