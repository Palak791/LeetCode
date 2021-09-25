class Solution {
public:
    void sortColors(vector<int>& nums) {
       vector<int> freq(3,0);
        for(int i = 0;i < nums.size();i++){
            freq[nums[i]]++;
        }
        int i = 0;
        int count = 0;
        while(i < nums.size()){
            while(freq[count] > 0) {
                nums[i] = count;
                i++;
                freq[count]--;
            }
            count++;
        }
    }
};