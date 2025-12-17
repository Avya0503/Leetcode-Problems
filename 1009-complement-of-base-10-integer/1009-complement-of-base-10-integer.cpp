class Solution {
public:
    int bitwiseComplement(int n) {
            int a=n;
            int count=0;
            if(n==0)
            return 1;
            while(a){
                count=count<<1;
                count=count|1;
                
                a=a>>1;
            }
            a=~n;
            int ans=count&a;
            return ans;
    }
};