class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        while(x){
            int digi=x%10;
            if(ans<INT_MIN /10||ans>INT_MAX /10)
            return 0;
            ans=ans*10+digi;
            x=x/10;
        }
        
        
        return ans;
    }
};