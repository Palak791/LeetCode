class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() < 2){if(target == nums[0]) return 0;}
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int mid = left +(right- left)/2 ;
            cout << mid;
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) right = mid -1;
            else left = mid + 1;
        }
        return -1;
    }
};