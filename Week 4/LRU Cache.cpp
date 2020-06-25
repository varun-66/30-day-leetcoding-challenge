
class LRUCache {
public:
    unordered_map<int,int> mp;
    int capacity;
    list<int> list;
    
    LRUCache(int capacity) {
        list.clear();
        mp.clear();
        this->capacity=capacity;
    }
    
    int get(int key) {
        
        if(mp.find(key)==mp.end())
        {
            return -1;
        }
        list.remove(key);
        list.push_front(key);
        return mp[key];
        
    }
    
    void put(int key, int value) {
        // if(mp.find(key) != mp.end() ){
        //     mp.erase(key);
        //     list.remove(key);
        // }
        // if(list.size() == capacity){
        //    int temp = list.front();
        //     list.pop_front();
        //     mp.erase(temp);
        // }
        // mp[key] = value;
        // list.push_back(key);
        
        
            if(mp.find(key)==mp.end())
            {
                if(list.size()==capacity)
                {
                    int bck=list.back();
                    list.pop_back();
                    mp.erase(bck);
                    list.push_front(key);
                }
                else
                {
                    list.push_front(key);
                }

                mp[key]=value;
            }
            else 
            {
                list.remove(key);
                list.push_front(key);
                mp[key]=value;
            }
    
        }
        
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
