class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;
        int n = asteroids.size();
        
        for(int i = 0; i < n; i++){
            bool asteroidKilled = false;

            if(!st.empty() && asteroids[i] < 0 && asteroids[st.top()] > 0){
                while(!st.empty() && asteroids[st.top()] > 0 && abs(asteroids[i]) > asteroids[st.top()]){
                    st.pop();
                }
                if(!st.empty() && abs(asteroids[i]) == asteroids[st.top()]){
                    st.pop();
                    asteroidKilled = true;
                } 
                else if(!st.empty() && abs(asteroids[i]) < asteroids[st.top()]){
                    asteroidKilled = true;
                }
            }

            if(!asteroidKilled)
                st.push(i);

        }
        
        while(!st.empty()){
            ans.push_back(asteroids[st.top()]);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};