class Solution{
    public:
    int maxDistance(int arr[], int n)
    {
    unordered_map<int,int>m;
    int dist = 0;
    for(int i=0;i<n;i++){
        if(m.size()>0 && m.find(arr[i])!=m.end()){
            dist = max(dist,i-m[arr[i]]);
        }else{
            m[arr[i]] = i;
        }
    }
    return dist;
    }
};