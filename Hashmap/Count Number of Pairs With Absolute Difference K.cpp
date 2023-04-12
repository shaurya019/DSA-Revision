class Solution {
public:
    int countKDifference(vector<int>& nums, int k){
    unordered_map<int,int>m;
    int c=0;
        for(auto x:nums){
            m[x]++;
        }
        for(auto x:nums){
            if(m.find(k+x)!=m.end()){
                c += m[k+x];
            }
            if( m.find(x-k)!=m.end()){
                 c += m[x-k];
            }
        }
        return c/2;
    }
};