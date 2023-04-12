
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int c=0,n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               if(i!=j){
                    string s = nums[i]+nums[j];
                if(s==target) {
                    c++;
                }
               }
            }
        }
        return c;
    }
};