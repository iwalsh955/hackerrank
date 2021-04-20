#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node {
    Node* next;
    Node* prev;
    int value;
    int key;
    Node(Node* p, Node* n, int k, int val) :prev(p), next(n), key(k), value(val) {};
    Node(int k, int val) :prev(NULL), next(NULL), key(k), value(val) {};
};

class Cache {

protected:
    map<int, Node*> mp; //map the key to the node in the linked list
    int cp;  //capacity
    Node* tail; // double linked list tail pointer
    Node* head; // double linked list head pointer
    virtual void set(int, int) = 0; //set function
    virtual int get(int) = 0; //get function

};

class LRUCache : public Cache {
public:

    LRUCache(int capactiy)
    {
        cp = capactiy;
        tail = nullptr;
        head = nullptr;

    }

    void set(int key, int value)
    {
        if (head == nullptr)
        {
            Node* newNode = new Node(nullptr, nullptr, key, value);
            head = tail = newNode;
            mp[key] = newNode;
            return;
        }
        auto it = mp.find(key);
        if (it != mp.end())
        {
            it->second->value = value;
            if (it->second == head) { return; }
            else if (it->second == tail)
            {
                it->second->prev->next = nullptr;
                tail = it->second->prev;
                it->second->prev = nullptr;
                it->second->next = head;
                head->prev = it->second;
                head = it->second;
            }
            else
            {
                it->second->next->prev = it->second->prev;
                it->second->prev->next = it->second->next;
                it->second->prev = nullptr;
                it->second->next = head;
                head->prev = it->second;
                head = it->second;
            }
        }
        else
        {
            Node* newNode = new Node(nullptr, head, key, value);
            head->prev = newNode;
            head = newNode;
            mp[key] = newNode;
            if (mp.size() > cp)
            {
                mp.erase(tail->key);
                tail = tail->prev;
                delete tail->next;
                tail->next = nullptr;
            }
        }
    }

    int get(int key)
    {
        auto it = mp.find(key);
        if (it != mp.end())
        {
            return it->second->value;
        }
        return -1;
    }

    ~LRUCache()
    {
        auto it = mp.begin();
        auto end = mp.end();
        while (it != end)
        {
            delete it->second;
            it->second = nullptr;
            it++;
        }
    }

};

int main() {
    int n, capacity, i;
    cin >> n >> capacity;
    LRUCache l(capacity);
    for (i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (command == "get") {
            int key;
            cin >> key;
            cout << l.get(key) << endl;
        }
        else if (command == "set") {
            int key, value;
            cin >> key >> value;
            l.set(key, value);
        }
    }
    return 0;
}
