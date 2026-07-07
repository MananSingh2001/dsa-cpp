class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        int m=t.size();

          if (m < n) {
            return false;
        }

        unordered_map<char,int> mpp;
        unordered_map<char,int> npp;

        for( int i=0;i<n;i++)
        {
            mpp[s[i]]++;
        }

          for( int i=0;i<m;i++)
        {
            npp[t[i]]++;
        }

        for(int i = 0; i < m; i++)
        {
            char currentChar = t[i];
            if(npp[currentChar] != mpp[currentChar])
            {
                return currentChar;
            }
        }
        
        return ' ';
    }
};
