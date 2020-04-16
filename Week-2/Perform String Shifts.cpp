class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        
        int i,j,n=s.size();
        
        int r=shift.size();
        
        int left=0,right=0;
        
        for(i=0;i<r;i++) {
            
            // for(j=0;j<shift[i].size();j++) {
                   if(shift[i][0]==1) right+=shift[i][1];
                    else left+=shift[i][1];
            // }
        }
        
        left=left;
        right=right;
        // cout<<"right "<<right<<"  ";
        // cout<<"left "<<left<<"  ";
        
        if(right>left){
            
            int rsh=(right-left)%n;
            
            string t="";
            for(i=n-rsh;i<n;i++){
                t.push_back(s[i]);
            }
            
            for(i=0;i<n-rsh;i++){
                t.push_back(s[i]);
            }
            return t;
        }
        else if(left>right) {
            
            int lsh=(left-right)%n;
            
            // cout<<lsh<<" ";
            
            string t="";
            for(i=0;i<lsh;i++){
                t.push_back(s[i]);
            }
            // cout<<t<<"  ";
            
            string res="";
            for(i=lsh;i<n;i++){
                res.push_back(s[i]);
            }
            // cout<<res<<" ";
            
            for(i=0;i<t.size();i++){
                res.push_back(t[i]);
            }
            // cout<<"left wala\n";
            return res;
            
        }
        return s;
        
    }
};
