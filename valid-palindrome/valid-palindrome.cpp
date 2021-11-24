class Solution {
public:
    bool isPalindrome(string s) {
      vector<char> v;
        for(int i =0;i < s.length();i++){
            if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9'){
                v.push_back(tolower(s[i]));
            }
        }
        int a =0;
        int b = v.size()-1;
        while(a <= b){
            if(v[a] != v[b]) return false;
            a++;
            b--;
        }
        return true;
    }
};