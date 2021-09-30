class Solution {
public:
    string reverseWords(string s) {
       int i = 0;
       int j = 1;
       while(i < s.length()){
           while(s[j] != 32){
               j++;
               if(j == s.length()) break;
           }
           reverse(s.begin () + i ,s.begin()+ j);
           i = j;
           if(j != s.length()-1)j++;
           i++;
          // if(i == s.length()-1 )i++;
       }
        return s;
    }
};