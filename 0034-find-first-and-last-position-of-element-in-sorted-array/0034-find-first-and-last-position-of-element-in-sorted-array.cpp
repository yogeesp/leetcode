class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        vector<int> ans = {-1, -1};
        
        while(end>=start){
            int mid = start+(end-start)/2;
            
            if(nums[mid] == target){
                ans[0]=mid;
                end = mid -1;
            }
            
            else if(nums[mid]<target)
                start= mid+1;
            
            else if(nums[mid]>target)
                
                end = mid-1;
        }
        
        int s = 0,e = nums.size()-1;
        
        while(e>=s){
            int mid = s+(e-s)/2;
            
            if(nums[mid] == target){
                ans[1] = mid;
                s = mid + 1;
            }
            
            else if(nums[mid]<target)
                s= mid+1;
            
            else if(nums[mid]>target)
                e = mid-1;
        }
        
        return ans;
        
    }
};