class Solution {
public:
    int trap(vector<int>& height) {
        int left=0,right=0;
        int maxi=height[0];
        int index=0;
        int water=0;
        int n=height.size();
        for(int i=0;i<n;i++){
            if(maxi<height[i])
            {
                index=i;
                maxi=height[i];
            }
        }
        for(int i=0;i<index;i++){
            if(left>height[i]){
                water+=left-height[i];
            }
            else
            left=height[i];
        }
        for(int j=n-1;j>index;j--){
            if(right>height[j]){
                water+=right-height[j];
            }
            else
            right=height[j];
        }
        return water;
    }
};