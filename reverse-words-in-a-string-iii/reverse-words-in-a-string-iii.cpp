class Solution {
public:
    string reverseWords(string s) {
        int j = 0;
      for(int i = 0;i <= s.length();i++){
          if(i == s.length() || s[i] == ' '){
              reverse(&s[j], &s[i]);// reverse function stl
              j = i+1;
          }
      }
        return s;
    }
};