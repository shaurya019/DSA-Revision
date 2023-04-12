

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int>s,w;
    for(int i=0;i<n;i++){
        s[a1[i]]++;
    }
    for(int i=0;i<m;i++){
     w[a2[i]]++;
    }
    for(auto x:w){
        if(s[x.first]<x.second){
            return "No";
        }
    }
    return "Yes";
}