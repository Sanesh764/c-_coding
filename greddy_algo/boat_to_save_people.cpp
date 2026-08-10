#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int i=0;
        int j=n-1;
        int boat=0;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                boat++;
                i++;
                j--;
            } else{
                boat++;
                j--;
            }
        }
        return boat;
    }
};
int main() {
    vector<int> people{3,5,3,4};
    int limit=5;
    Solution obj;
    cout<<obj.numRescueBoats(people,limit);
    return 0;
}