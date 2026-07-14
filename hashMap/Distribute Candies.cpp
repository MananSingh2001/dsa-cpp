class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mpp;
        int n=candyType.size();
        int a=n/2;

        for( int i=0;i<n;i++)
        {
            mpp[candyType[i]];
        }

        int m=mpp.size();

        if( m<=a)
            return m;
        else
            return a;
        
    }
};
