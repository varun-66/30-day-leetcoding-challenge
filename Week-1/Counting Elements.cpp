class Solution {
public:
    int countElements(vector<int>& arr) {
        int n=arr.size();
        int i,j;
        map<int,int> m;
        
        for(i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto it:m) 
            cout<<it.first<<" "<<it.second<<"\n";
        
        int c=0;
        int cur=-1;
        for(auto it:m) {
            if(cur!=-1) 
             {
                if(it.first-1==cur){
                    c+=(m[cur]);
                }
            }
            cur=it.first;
        }
        return c;
    }
};
