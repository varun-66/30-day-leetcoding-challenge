struct Node
{
    int data;
    Node *next,*prev;
    Node(int d){
        data=d;
        next=prev=NULL;
    }
};

class FirstUnique {
public:
    list<int> q;
    unordered_map<int, list<int>::iterator> mp;

    FirstUnique(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            add(nums[i]);
        }
    }
    
    int showFirstUnique() {
        if(q.size() > 0){
            return *(q.begin());
        }else{
            return - 1;
        }
    }
    
    void add(int value) {
        if(mp.find(value) == mp.end()){
            q.push_back(value);
            auto it = q.end();
            --it;
            mp.insert({value, it});
        }else{
            // remove element from list
            auto it = mp[value];
            if(it != q.end()){
                q.erase(it);
                mp[value] = q.end();
            }
        }
    }
    
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */
