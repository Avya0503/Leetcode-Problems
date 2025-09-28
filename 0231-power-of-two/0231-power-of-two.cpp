class Solution {
public:
    bool isPowerOfTwo(int n) {
        int a=1, i=0;
        while(i<=30){
            if(a==n)
            return true;
            i++;
            a=a<<1;
        }
        return false;
    }
};