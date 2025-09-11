class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size()<t.size())
        return "";
        vector<int> mp(256,0);
        for(char c:t){
            mp[c]++;
        }
        int i=0;
        int r=0;
        int total=t.size();
        int ans=INT_MAX;
        int start=0;
        int index=-1;
        while(r<s.size()){
            mp[s[r]]--;
            if(mp[s[r]]>=0){
                total--;
            }
            while(!total && i<=r){
                if(ans>r-i+1){
                    ans=min(ans,r-i+1);
                    index=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    total++;
                }
                i++;
            }
            r++;
        }
        if(index==-1){
            return "";
        }
        else{
            return s.substr(index,ans);
        }

    }
};