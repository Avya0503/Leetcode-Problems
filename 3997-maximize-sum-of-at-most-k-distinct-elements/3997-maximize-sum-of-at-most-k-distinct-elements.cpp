class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
       unordered_set<int> s;
        s.reserve(nums.size()*2);
        for(auto x: nums)
            s.insert(x);
        vector<int> un;
        un.reserve(s.size());
        for(int x :s)
            un.push_back(x);
        sort(un.begin(), un.end(), greater<int>());
        int ans= min(k,(int)un.size());
        un.resize(ans);
        return un;
    }
};