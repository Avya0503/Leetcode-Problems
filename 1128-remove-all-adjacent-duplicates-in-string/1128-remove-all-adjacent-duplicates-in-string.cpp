class Solution {
public:
    string removeDuplicates(string s) {
        string st="";
        for(char ch:s){
            if(st.size()&&ch==st.back()){
                st.pop_back();
            }
            else
            st.push_back(ch);
        }
        return st;
    }
};