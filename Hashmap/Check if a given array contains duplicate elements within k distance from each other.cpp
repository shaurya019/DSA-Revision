

class Solution{
    public:
    
    string PartyType(long long int a[], int n)
    {
        set<int>s;
        for(int i=0;i<n;i++){
        if(s.size()>0 && s.find(a[i])!=s.end()){
            return "BOYS";
        }
        s.insert(a[i]);
        }
        return "GIRLS";
    }
};