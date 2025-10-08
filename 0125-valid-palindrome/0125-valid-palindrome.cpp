class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> st;
        for(char ch:s){
            if(ch>='a'&&ch<='z'||ch>='0' && ch<='9')
            st.push_back(ch);
            else if(ch>='A'&&ch<='Z'){
                ch=ch-'A'+'a';
                st.push_back(ch);
            }
        }
        int i=0;
        int e=st.size()-1;
        while(i<e){
            if(st[i]!=st[e])
            return false;
            i++;
            e--;
        }
        return true;

    }
};