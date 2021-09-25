// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int lo = 1;
        int h = n;
        while(lo < h){
            int mid = lo+(h-lo)/2;
            if(!isBadVersion(mid) ) lo = mid+1; 
            else h = mid;
        }
        return lo;
    }
};