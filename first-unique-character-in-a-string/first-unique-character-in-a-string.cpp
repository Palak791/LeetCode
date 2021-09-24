class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<int,int> mp;
        int pos;
        for(int i = 0 ; i< s.length();i++){
            mp[s[i]]++;
        }
       for(int i = 0;i < s.length();i++){//going second time through string
           if(mp[s[i]] == 1) return i;
       }
        return -1;
    }
};