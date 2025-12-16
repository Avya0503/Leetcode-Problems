class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int pro=1;
        int ans=0;
        while(n){
            int digit=n%10;
            sum+=digit;
            pro*=digit;
            n=n/10;
        }
        ans=pro-sum;
        return ans;
    }
};