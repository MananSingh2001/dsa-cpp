class Solution {
public:
    string predictPartyVictory(string senate) {
        int s = senate.size();
        queue<int> R;
        queue<int> D;
        for (int i = 0; i < s; i++) {
            char ch = senate[i];
            if (ch == 'D')
                D.push(i);
            else
                R.push(i);
        }
        while (!D.empty() && !R.empty()) 
        {
            if (D.front() < R.front()) 
            { 
                int secRound = D.front() + s;
                D.push(secRound);
                D.pop();
                R.pop();
            } else 
            {
                int secRound = R.front() + s;
                R.push(secRound);
                R.pop();
                D.pop();
            }
        }
        return R.empty() ? "Dire" : "Radiant";
    }
};