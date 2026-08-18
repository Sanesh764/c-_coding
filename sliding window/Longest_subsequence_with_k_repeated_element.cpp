#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
  public:
      int longestKSubstr(string &s, int k) {
          unordered_map<char, int> freq;
          int left = 0;
          int maxLen = -1; // Initialize to -1 for cases where no valid substring exists

          for (int right = 0; right < s.size(); right++) {
              freq[s[right]]++;

              // Shrink the window from the left if unique characters exceed k
              while (freq.size() > k) {
                  freq[s[left]]--;
                  if (freq[s[left]] == 0) {
                      freq.erase(s[left]);
                  }
                  left++;
              }

              // Only update maxLen if the window has EXACTLY k unique characters
              if (freq.size() == k) {
                  maxLen = max(maxLen, right - left + 1);
              }
          }

          return maxLen;
      }
  };

int main() {
    
    return 0;
}