class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int sumi = 0;
        
        int leftSum = 0;
        
        for(int i =0;i<nums.size();i++){
            sumi+=nums[i];
        }
        
        for(int i = 0;i<nums.size();i++){
            int totalsum = sumi-leftSum-nums[i];
            
            if(leftSum == totalsum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }

};