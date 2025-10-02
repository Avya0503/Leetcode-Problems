class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int> st;
        vector<int> ans;
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(st.find(grid[i][j])!=st.end()){
                    int a=grid[i][j];
                    ans.push_back(a);
                }
                st.insert(grid[i][j]);
            }
        }
        int sum=0;
        for(auto num: st){
            sum+=num;
        }
        int b=n*n*(n*n+1)/2-sum;
        ans.push_back(b);
        return ans;
    }
};