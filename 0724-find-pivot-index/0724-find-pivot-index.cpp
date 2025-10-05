class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l=0,s=0;
        for(auto num:nums){
            s+=num;
        }
        for(int i=0;i<nums.size();i++){
            s-=nums[i];
            if(s==l)
            return i;
            l=l+nums[i];
        }
        return -1;
    }
};