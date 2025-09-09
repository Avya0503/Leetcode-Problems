class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int mf=0;
        int res=0;
        vector<int> st(26,0);
        for(int r=0;r<s.size();r++){
            st[s[r]-'A']++;
            mf=max(mf,st[s[r]-'A']);
            while(r-l+1-mf>k){
                st[s[l]-'A']--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};