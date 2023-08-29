class Solution {
public:
    
    long long int bs(int n){
        
        int s = 0;
        int e = n;
        
        long long int mid = s+(e-s)/2;

        
        while(s<=e){
            
            if(mid*mid == n)
                return mid;
            
            else if(mid*mid>n){
                e = mid -1;
            }
            
            else {
              
                s = mid+1;
            }
            
            mid = s+(e-s)/2;
        }
            
        return e;
    }
        
    int mySqrt(int x) {

        return bs(x);
    }
};