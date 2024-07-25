//451. Sort Characters By Frequencyclass 
Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for (char a : s) {
            mp[a]++;
        }

        priority_queue<pair<int, char>> maxh;
        
        for (auto& [c, freq] : mp) {
            maxh.push({freq, c});
        }

        string s1;
        while (!maxh.empty()) {
            int freq = maxh.top().first;
            char c = maxh.top().second;
            maxh.pop();
            s1.append(freq, c);  
        }
        
        return s1;
    }
};

