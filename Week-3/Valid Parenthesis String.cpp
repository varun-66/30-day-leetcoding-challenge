class Solution {
public:
    bool checkValidString(string s) {
        
        int i,j,n=s.size();
        stack<int> open;
        stack<int> star;
        
        for(i=0;i<n;i++){
            if(s[i]=='(') open.push(i);
            else if(s[i]=='*') star.push(i);
            else {
                if(!open.empty()) 
                    open.pop();
                else if(!star.empty())
                    star.pop();
                else 
                    return false;
            }
        }
    
        while(!open.empty()){
            if(star.empty()) return false;
            if(open.top()>star.top()) return false;
            else {
                open.pop();
                star.pop();
            }
        }
        if(open.empty()) return true;
        return false;
        
    }
};
