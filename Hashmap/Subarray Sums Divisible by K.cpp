class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0] = 1;
        int pre = 0,c=0;
        for(auto x:nums){
            pre += x;
            int rem = pre%k;
            if(rem<0){
                rem+=k;
            }
          c += m[rem];
            m[rem]++;
        }
        return c;
    }
};


// use a modulo function  for this and prefixsum