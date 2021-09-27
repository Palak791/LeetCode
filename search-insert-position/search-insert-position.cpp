class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0 ,n = nums.size(), j = n;
        if(nums[n-1] < target) return nums.size();
        if(nums[0] >= target) return 0;
        while(i < j){
            int mid = i + (j-i)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                if(nums[mid+1] >= target)return mid+1;
                i = mid+1;
            }
            else{
                if(nums[mid -1 ] < target) return mid ;
                j = mid-1;
            }
        }
        return 0;
    }
};