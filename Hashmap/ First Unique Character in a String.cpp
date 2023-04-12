class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>v(26,0),c(26,0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a'] = i;
            c[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
          if(c[s[i]-'a']==1){
              return v[s[i]-'a'];
          }  
        }
        return -1;
    }
};



// Used a 26 size arr instead of map , for chars or strings we should go for vector.size of 26