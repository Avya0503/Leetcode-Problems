class Solution {
public:
    void reverse(vector<int>& nums,int i,int k){
        while(i<k){
    swap(nums[i++],nums[k--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        int a=nums.size();
        k=k%a;
        reverse(nums,0,a-1);
        reverse(nums,0,k-1);
        reverse(nums,k,a-1);
    }
};