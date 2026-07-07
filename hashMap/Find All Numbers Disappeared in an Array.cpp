class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        vector<int> result;

        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }

        for(int i = 1; i <= n; i++)
        {
            if(mpp[i] == 0)
            {
                result.push_back(i);
            }
        }
        return result;
        
    }
};
