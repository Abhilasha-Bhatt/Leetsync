class Compare {
public:
    bool operator()(pair<string, int>a, pair<string, int>b) {
        if(a.second == b.second)
            return a.first > b.first;
        
        return a.second < b.second;
    }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for(string s : words)
            mp[s]++;
        
        priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> pq;

        for(auto f : mp) {
            int freq = f.second;
            string wrd = f.first;

            pq.push({wrd, freq});
        }
        vector<string> ans;
        while(k--) {
            ans.push_back(pq.top().first);
            pq.pop();
        }
        return ans;
    }
};