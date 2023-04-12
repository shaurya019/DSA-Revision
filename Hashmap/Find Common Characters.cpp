class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int map[26] = {0};
        vector<string> v;
        for(char s : words[0])
            ++map[s - 'a'];
        for(int i = 1; i < words.size(); ++i){
            int arr[26] = {0};
            for(char c : words[i]){
                ++arr[c - 'a'];
            }
            for(int i = 0; i < 26; ++i){
                if(arr[i] == 0) map[i] = 0;
                else{
                    map[i] = min(arr[i], map[i]);
                }
            }
        }
        for(int i = 0; i < 26; ++i){
                while(map[i] > 0){
                    string c = "";
                    c += (i + 'a');
                    v.push_back(c);
                    --map[i];
                }
        }
        return v;
    }
};