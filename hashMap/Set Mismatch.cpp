class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) 
        {
            mpp[nums[i]]++;
        }   
        int duplicate = -1, missing = -1;
        for (int i = 1; i <= n; i++)
        {
            if (mpp[i] > 1) 
            {
                duplicate = i;
            }
            if (mpp[i] == 0) 
            {
                missing = i;
            }
        }
        
        return {duplicate, missing};
    }
};
