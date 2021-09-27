class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr(10001,0);
        for(int i = 0;i< nums.size();i++){
            arr[abs(nums[i])]++;
        }
        int count = 0;
        for(int i = 0;i < arr.size();i++){
            while(arr[i] > 0){
                nums[count ] = i*i;
                count++;
                arr[i]--;
            }
        }
        return nums;
    }
};