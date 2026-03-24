class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int n = s.size();
        int z = 0;
        for (int i = 0; i < t.size(); i++)
        {
            if (s[z] == t[i])
            {
                z++;
            }
        }
        if (z == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
