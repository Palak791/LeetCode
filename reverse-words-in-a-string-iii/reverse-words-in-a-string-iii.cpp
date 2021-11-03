class Solution {
public:
    string reverseWords(string s) {
        int j = 0;
        for(int i = 0;i <= s.length();i++){
            if(s[i] == ' ' || i == s.length()) {
            reverse(&s[j],&s[i]);//REV FUNC IN STL
            j = i+1;
            }
        }
        return s;
    }
};