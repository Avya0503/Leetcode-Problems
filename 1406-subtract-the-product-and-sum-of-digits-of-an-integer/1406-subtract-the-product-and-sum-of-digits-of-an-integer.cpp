class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul=1;
        int sum=0;
        int ans;
        while(n>0){
            int d=n%10;
            n=n/10;
            mul*=d;
            sum+=d;
        }
        ans=mul-sum;
        return ans;
    }
};