class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int maxLen = 0;
        for (int num : nums) {
            mpp[num]++;
        }
        for (auto& pair : mpp) {
            int num = pair.first;
            int freq = pair.second;
            if (mpp.find(num + 1) != mpp.end()) {
                int harmoniosLen = freq + mpp[num + 1];
                maxLen = max(maxLen, harmoniosLen);
            }
        }
        
        return maxLen;
    }
};
