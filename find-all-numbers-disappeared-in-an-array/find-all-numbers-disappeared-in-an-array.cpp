class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //using map
        vector<int> result;
        unordered_map<int,int> freq;
        for(int i = 0;i < nums.size();i++){
            freq[nums[i]]++;
        }
        for(int i = 1 ;i <=nums.size();i++){
            if(freq.find(i)== freq.end()) result.push_back(i);
        }
        return result;
    }
};