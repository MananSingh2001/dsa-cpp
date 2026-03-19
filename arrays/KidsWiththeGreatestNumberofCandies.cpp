class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> final;
        int maxVal = *max_element(candies.begin(), candies.end()); 
        for ( int i=0;i<candies.size();i++)   
        {
            if((candies[i] + extraCandies) >= maxVal) {
                final.push_back(true);
            } else 
            {
                final.push_back(false);
            }
        }
        return final;
    }
};