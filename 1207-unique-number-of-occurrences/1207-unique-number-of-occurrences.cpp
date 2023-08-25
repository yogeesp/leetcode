class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        
        vector<int> h;
        int i =0;
        
        while(i<arr.size()){
            
            int count = 1;
            
            for(int j = i+1;j<arr.size();j++){
                
                if(arr[i] == arr[j])
                    
                    count++;
                
            }
            h.push_back(count);
            i+=count;
        }
        sort(h.begin(),h.end());
        for(int k = 0;k<h.size()-1;k++){
            
            if(h[k]==h[k+1])
                
                return false;
            
        }
        
        return true;        
    }

};