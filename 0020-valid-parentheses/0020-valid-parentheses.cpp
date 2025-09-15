class Solution {
public:
    bool isValid(string s) {
        stack<char> mp;
        int i=0;
       for(char i:s){
            if(i=='('|| i=='{' || i=='['){
                mp.push(i);
            }
            else{
                if(mp.empty())
                return false;
                if((i==')' && mp.top()!='(')||
                (i=='}'&& mp.top()!='{')||
                (i==']'&& mp.top()!='['))
                return false;
            mp.pop();
            }
        }
        return mp.empty();
    }
};