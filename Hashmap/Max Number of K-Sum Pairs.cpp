class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
      int c = 0;
        unordered_map<int,int>m;
        for(auto x:nums){
            if(m.size() > 0 && m.find(k-x)!=m.end()){
                c += 1;
                m[k-x]--;
                if(m[k-x]==0){
                    m.erase(k-x);
                }
            }else{
               m[x]++;   
            }
        }
        return c;
    }
};