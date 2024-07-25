typedef std::pair<int, int> p;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        
        for (int n : nums) {
            mp[n]++;
        }
        
        priority_queue<p, vector<p>, greater<p>> minh;
        
        
        for (auto& [num, freq] : mp) {
            minh.push({freq, num});
            
            if (minh.size() > k) {
                minh.pop();
            }
        }
        
        vector<int> vec;
        while (!minh.empty()) {
            vec.push_back(minh.top().second);
            minh.pop();
        }
        
        return vec;
    }
};