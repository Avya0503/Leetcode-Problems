class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int mf=0;
        int res=0;
        unordered_map<char,int> st;
        for(int r=0;r<s.size();r++){
            st[s[r]]++;
            mf=max(mf,st[s[r]]);
            while(r-l+1-mf>k){
                st[s[l]]--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};