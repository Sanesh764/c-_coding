#include<iostream>
#include<vector>
#include<queue>
#include<functional>
using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq(nums.begin(), nums.end());

        int sum=0;
        for(int i=0;i<nums.size();i++) sum += nums[i];

        while(k--){
            int el=pq.top();
            if(el==0) break;
            pq.pop();
            sum -= el;
            pq.push(-1* el);
            sum += (-el);

        } 
        return sum;
    }
};
int main() {
    vector<int>nums{1,4,3,2};
    int k=1;
    Solution obj;
    cout << obj.largestSumAfterKNegations(nums, k);
    
    return 0;
}