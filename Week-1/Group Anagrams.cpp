class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>> res;
        int n=str.size();
        
        int i,j;
        
        unordered_map<string,vector<string>> m;
        
        vector<string> temp=str;
        
        for(i=0;i<n;i++){
            string tt=temp[i];
            sort(tt.begin(),tt.end());
            // if(m.find(tt)!=m.end()) m[tt].push_back(temp[i]);
            // else {
                m[tt].push_back(temp[i]);
            // }
        }
        
        
        for(auto it:m) {
            res.push_back(it.second);
        }
        
        
        
        return res;
        
        
    }
};
