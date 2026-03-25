class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int sum = 0;
        vector<int> altitudes(n + 1, 0); 
        for(int i = 0; i < n; i++) {
            sum += gain[i];
            altitudes[i + 1] = sum;
        }
        return *max_element(altitudes.begin(), altitudes.end());
    }
};