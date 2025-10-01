class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low=1;
        int high=nums.size()-1;
        int ans=0;
        while(low<=high){
            int count=0;
            int mid=low+(high-low)/2;
            for (int num : nums) {
            if (num <= mid) count++;
        }

        if (count > mid) {
            ans = mid;      // duplicate lies here
            high = mid - 1; // search left half
        } else {
            low = mid + 1;  // search right half
        }
    }
    return ans;
    }
};