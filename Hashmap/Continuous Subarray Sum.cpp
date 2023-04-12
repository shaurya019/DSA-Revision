class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
     unordered_map<int,int> m;
		int n=nums.size();
		if(n==1){
			return false;
        }
        
		if(k==1){
			return true;
        }
        int curr = 0;
		for(int i=0;i<n;i++){
            curr += nums[i];
            if(curr%k==0 && i>0){
                return true;
            }
            if(m.count(curr%k)>0 && i-m[curr%k]>1){
                return true;
            }
           if(m.count(curr%k)==0){ 
               m[curr%k] = i;
           }
        }
        return false;
    }
};


//  