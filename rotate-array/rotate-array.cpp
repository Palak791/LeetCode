class Solution {
public:
    void reverse(vector<int> &nums ,int lo,int hi){
        while(lo < hi){
            swap(nums[lo++],nums[hi--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
    // reversing array  till n-k and then from n-k till n.
    // reversing complete array after  that;
    int n = nums.size();
    if(k > n)k= k%n;
    reverse(nums , 0 , n-k-1);
    reverse(nums, n-k,n-1);
    reverse(nums,0,n-1);
    }
};