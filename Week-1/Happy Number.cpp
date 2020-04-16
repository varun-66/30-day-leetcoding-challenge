class Solution {
public:
    bool isHappy(int n) {
        // cout<<n<<" ";
        unordered_set<int> st;
        //st.insert(n);
        while(true) {
            //cout<<n<<" ";
            if(n==1) return true;
            if(st.find(n)!=st.end()) return false;
            else st.insert(n);
            
            string s=to_string(n);
            int sum=0;
            for(int i=0;i<s.size();i++){
                sum+=pow((s[i]-'0'),2);
            }
            n=sum;
        }
        
    }
};
