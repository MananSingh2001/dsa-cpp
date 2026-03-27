class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int max_v = 0;
        int current_v = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) current_v++;
        }
        max_v = current_v;
        for (int i = k; i < s.length(); i++) {
            if (isVowel(s[i])) current_v++;
            if (isVowel(s[i - k])) current_v--;
            max_v = max(max_v, current_v);
            if (max_v == k) return k;
        }
        return max_v;
    }
};