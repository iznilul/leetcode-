//
// Created by Administrator on 2021/3/7.
//
#include <iostream>
#include <unordered_map>
using namespace std;
struct dLinkNode{
    int key;
    int value;
    dLinkNode* next;
    dLinkNode* prev;
    dLinkNode():key(0),value(0),next(nullptr),prev(nullptr){};
    dLinkNode(int key,int value):key(key),value(value),next(nullptr),prev(nullptr){};
};
class LRUCache {
private:
    unordered_map<int,dLinkNode*> map;
    dLinkNode* head=nullptr;
    dLinkNode* tail=nullptr;
    int capacity=0;
    int size=0;
public:
    void addtoHead(dLinkNode* node){
        node->next=head->next;
        head->next->prev=node;
        head->next=node;
        node->prev=head;
    }
    void removetoHead(dLinkNode* node){
        removeNode(node);
        addtoHead(node);
    }
    void removeNode(dLinkNode* node){
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }
    dLinkNode* removeTail(){
        dLinkNode* node=tail->prev;
        removeNode(node);
        return node;
    }
    LRUCache(int capacity):capacity(capacity), size(0){
        head=new dLinkNode();
        tail=new dLinkNode();
        head->next=tail;
        tail->prev=head;
    }

    int get(int key) {
        if(!map.count(key)){
            return -1;
        }
        dLinkNode* node=map[key];
        removetoHead(node);
        return node->value;
    }

    void put(int key, int value) {
        if(!map.count(key)){
            dLinkNode* node=new dLinkNode(key,value);
            map[key]=node;
            addtoHead(node);
            ++size;
            if(size>capacity){
                dLinkNode* removed=removeTail();
                map.erase(removed->key);
                --size;
                delete removed;
            }
        }else{
            dLinkNode* node=map[key];
            node->value=value;
            removetoHead(node);
        }
    }
};
int main(){
    LRUCache *lruCache=new LRUCache(2);
    lruCache->put(1,1);
    lruCache->get(1);
    lruCache->put(2, 2);
    lruCache->put(3,3);
    return 0;
}