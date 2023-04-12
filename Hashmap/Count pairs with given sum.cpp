

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
       int count =0;
        unordered_map<int,int>hm;
       for(int i=0;i<n;i++){
          if(hm.find(k-arr[i])!=hm.end()){
              count+=hm[k-arr[i]];
          }
          hm[arr[i]]++;
       }
       return count;
    }
};