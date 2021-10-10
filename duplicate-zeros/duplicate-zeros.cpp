class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
         int i = 0;
        while(i < arr.size()-1){
            if(arr[i] == 0){
                int j = arr.size()-1;
                while(j > i){
                    arr[j] = arr[j-1];
                    j--;
                }
                i++;
            }
            i++;
        }
    }
};