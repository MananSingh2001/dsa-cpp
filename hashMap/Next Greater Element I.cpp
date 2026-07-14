class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        
        for (int i = 0; i < nums2.size(); i++) {
            int greaterElement = -1;
            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums2[i]) {
                    greaterElement = nums2[j];
                    break;
                }
            }
            nextGreater[nums2[i]] = greaterElement;
        }
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }
        
        return result;
    }
};
