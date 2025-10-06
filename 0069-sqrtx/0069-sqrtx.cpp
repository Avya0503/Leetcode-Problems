class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        int ans=0;
        long long mid=s+(e-s)/2;
        while(s<=e){
            if(x==mid*mid)
             return mid;
            else if(x>mid*mid){
                ans=mid;
            s=mid+1;
            }
            else
            e=mid-1;
            mid=s+(e-s)/2;
        }
        return ans;
    }
};