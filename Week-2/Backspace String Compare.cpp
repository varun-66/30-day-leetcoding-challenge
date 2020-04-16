class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string f="",s="";
        stack<char> st;
        for(int i=0;i<S.size();i++){
            if(S[i]=='#') {
                if(!st.empty()) st.pop();
            }
            else {
                st.push(S[i]);
            }
        }
        
        while(!st.empty()){
            f.push_back(st.top()); 
            st.pop();
        }
        for(int i=0;i<T.size();i++){
            if(T[i]=='#') {
                if(!st.empty()) st.pop();
            }
            else {
                st.push(T[i]);
            }
        }
        
        while(!st.empty()){
            s.push_back(st.top()); 
            st.pop();
        }
        return (f==s);
    }
};
