class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mpp;
        int n = ransomNote.size();
        int m = magazine.size();
        
        if (m < n) {
            return false;
        }
        
        for (int i = 0; i < m; i++) {
            mpp[magazine[i]]++;
        }
        
        for (int i = 0; i < n; i++) {
            if (mpp[ransomNote[i]] > 0) {
                mpp[ransomNote[i]]--;
            } else {
                return false;
            }
        }
        
        return true;
    }
};
