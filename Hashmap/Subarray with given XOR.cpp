int Solution::solve(vector<int> &A, int x) {
    int n = A.size();
    int c = 0;
    unordered_map<int,int>m;
    int sum = 0; 
    for(auto a:A){
        sum ^= a;
        if(sum==x){
            c++;
        }
        if(m[sum^x]>0){
            c += m[sum^x];
        }
        m[sum]++;
    }
    return c;
}



// 