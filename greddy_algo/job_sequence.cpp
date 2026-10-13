#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Job{
    int id;
    int deadline;
    int profit; 
};
class Solution{
public:
    static bool comparison(Job a,Job b){
        return (a.profit>b.profit);
    }
    pair<int,int>JobScheduling(vector<Job>& arr){
        int n=arr.size();
        sort(arr.begin(),arr.end(),comparison);
        int maxDeadline=0;
        for (int i=0;i<n;i++) {
            maxDeadline=max(maxDeadline,arr[i].deadline);
        }
        vector<int>slot(maxDeadline+1,-1);
        int countJobs=0;
        int maxProfit=0;
        for (int i=0;i<n;i++) {
            for (int j=arr[i].deadline;j>0;j--) {
                if (slot[j]==-1) {
                    slot[j]=arr[i].id;
                    countJobs++;
                    maxProfit += arr[i].profit;
                    break;
                }
            }
        }
        return {countJobs,maxProfit};
    }
};
int main() {
    vector<Job> arr={{1,4,20},{2,1,10},{3,1,40},{4,1,30}}; 
    Solution ob;
    pair<int, int>ans=ob.JobScheduling(arr); 
    cout<<"Number of jobs done: "<<ans.first<<endl;
    cout<<"Maximum Profit earned: "<<ans.second<<endl;  
    return 0;
}
