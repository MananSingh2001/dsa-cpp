class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq, first, last;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            
            freq[num]++;
            
            if (first.find(num) == first.end()) {
                first[num] = i;
            }
            last[num] = i;
        }
        int degree = 0;
        for (auto& p : freq) {
            degree = max(degree, p.second);
        }
        int minLen = n;
        for (auto& p : freq) {
            int num = p.first;
            
            if (p.second == degree) {
                int len = last[num] - first[num] + 1;
                minLen = min(minLen, len);
            }
        }
        
        return minLen;
    }
};
