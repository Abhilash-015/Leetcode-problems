class LRUCache {
public:
class Node{
    public:
    Node* prev;
    Node* next;
    int key,val;
    Node(int k ,int v){
        key=k;
        val=v;
        prev=NULL;
        next=NULL;
    }
};
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    int lim;
    unordered_map<int,Node*> map;
   void addnode(Node* newnode){
        Node* N=head->next;
        head->next=newnode;
        newnode->next=N;
        N->prev=newnode;
        newnode->prev=head;
    }
    void delnode(Node* nodedel){
        Node* pr=nodedel->prev;
        Node* nxt=nodedel->next;
        pr->next=nxt;
        nxt->prev=pr;
    }
    LRUCache(int capacity) {
        lim=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(map.find(key)==map.end()){
            return -1;
        }
        int ans=map[key]->val;
        delnode(map[key]);
        addnode(map[key]);
        return ans;
    }
    
    void put(int key, int val) {
        Node* newnode=new Node( key ,  val);
        if(map.find(key)!=map.end()){
            //delet that from list
            delnode(map[key]);
            //erase that from map
            map.erase(key);
        }
        if(map.size()==lim){
            Node* lru=tail->prev;
            map.erase(lru->key);
            delnode(tail->prev);   
            delete lru;        
        }
        addnode(newnode);
        map[key]=newnode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */