class Solution {
public:
bool condition(char ch){
    if(ch>='A'&& ch<='Z'||ch>='a'&& ch<='z'||ch>='0'&& ch<='9')
    return true;
    else 
    return false;
}
char lower(char ch){
    if(ch>='A'&& ch<='Z'){
        ch=ch-'A'+'a';
        return ch;
    }
    else
    return ch;
}
    bool isPalindrome(string s) {
        int i=0;
        int e=s.size()-1;
        while(i<e){
            if(condition(s[i]) && condition(s[e])){
                if(lower(s[i])!=lower(s[e]))
                return false;
            e--;
            i++;
            }
            else{
                if(condition(s[i]))
                e--;
                else
                i++;
            }
           
        }
        return true;
    }
};