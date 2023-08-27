class Solution {
public:
    
    int bs(vector<int>& v, int target,bool f)
    {
        int l=0,r=v.size()-1;
        int i=-1;
        while(l<=r)
        {
            int m =(l+r)/2;
            if(target > v[m]) l = m+1;
            else if (target < v[m] )r = m-1;
            else{
                i=m;
                if(f) r=m-1;
                else l=m+1;
            }
        }
        return i;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
       int left = bs(nums,target,true);    /// true->leftbias
        int right = bs(nums,target,false);
        return {left,right};
        
    }
};