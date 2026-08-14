#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include<queue>
#include <algorithm>

using namespace std;

int main() {
    int k;
    cout<<"enter the value of K :";
    cin>>k;
    vector<string>words({"the","day","is","sunny","the","the","the","sunny","is","is"});
    unordered_map<string,int>mp;
    priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>> >pq;
    
     for (const string& word : words) {
        mp[word]++;
    }
    for (const auto& entry : mp) {
    string key = entry.first;
    int value = entry.second;
    pq.push({value, key});

    if (pq.size() > k) {
        pq.pop();
    }
}

    vector<string>result;
    while(!pq.empty()){
        result.push_back(pq.top().second);
        pq.pop();
    }
    reverse(result.begin(),result.end());
    for(int i=0;i<words.size();i++){
        mp[words[i]]++;
    }

    cout<<"Top"<<k<<"most frq key :\n";
    for(string& key :result){
        cout<<key<<"\n";
    }

    
    return 0;
}