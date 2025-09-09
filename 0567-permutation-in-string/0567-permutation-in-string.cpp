class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        return false;
        vector<int> c1(26,0), c2(26,0);
        for( char c:s1){
            c1[c-'a']++;
        }
        for(int i=0;i<s1.size();i++){
            c2[s2[i]-'a']++;
        }
        if(c1==c2)
        return true;
        for(int i=s1.size();i<s2.size();i++){
            c2[s2[i]-'a']++;
            c2[s2[i-s1.size()]-'a']--;
            if(c2==c1)
            return true;
        }
        return false;
    }
};