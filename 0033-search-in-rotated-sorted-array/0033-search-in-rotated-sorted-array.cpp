class Solution {
public:
    int search(vector<int>& nums, int target) {
        
            int pivot = getPivot(nums,nums.size());

            if(target>=nums[pivot] && target<=nums[nums.size()-1]){
                return bs(nums,pivot,nums.size()-1,target);
            }
            return bs(nums,0,pivot-1,target);
        
        }
        int bs(vector<int>& arr,int s,int e,int target){

            while(s<=e){

                int mid = s+(e-s)/2;

                if(target > arr[mid]){
                    s = mid+1; 
                }

                else if(arr[mid] == target) {
                    return mid;
                }

                else e = mid-1;
            }
            return -1;
        } 
    int getPivot(vector<int> arr,int n){

        int s = 0;
        int e = n-1;
        int mid = s+(e-s)/2;

        while(s<e){

            if(arr[mid]>=arr[0]){
                s = mid+1;
            }

            else{
                e = mid;
            }

                mid = s +(e-s)/2;
            }
            return mid;
    }


};
