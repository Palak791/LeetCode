class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int> index(256,-1);
        int start = -1;
        int len = 0;
        for(int i = 0;i < s.length();i++){
            if(start < index[s[i]]) start = index[s[i]];
            index[s[i]] = i;
            len = max(len,i - start);
        }
        return len;
    }
}; 