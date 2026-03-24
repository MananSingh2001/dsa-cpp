class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> finals;
        int maxVal = *max_element(candies.begin(), candies.end()); 
        for ( int i=0;i<candies.size();i++)   
        {
            if((candies[i] + extraCandies) >= maxVal) {
                finals.push_back(true);
            } else 
            {
                finals.push_back(false);
            }
        }
        return finals;
    }
};