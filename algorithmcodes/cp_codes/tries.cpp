#include <bits/stdc++.h>
using namespace std;

struct TrieNode{
    TrieNode *child[26];
    bool isLeaf;
};

TrieNode *getNode(){
    TrieNode *node = new TrieNode;
    node->isLeaf = false;
    for(int i=0;i<26;i++){
        node->child[i]=0;
    }
    return node;
}

void insert(TrieNode *root, char *key){
    int length = strlen(key);
    TrieNode *temp = root;
    int index;

    for(int i=0;i<length;i++){
        index = (int)key[i] - (int)'a';//to get to character location in child array. for eg: if key[i]=c, index=3
        if(!temp->child[index]){
            temp->child[index] = getNode();
        }
        temp = temp->child[index];
    }
    temp->isLeaf = true;//marking last node as leaf
}

bool search(TrieNode *root, char *key){
    int length = strlen(key);
    TrieNode *temp = root;
    int index;

    for(int i=0;i<length;i++){
        index = (int)key[i] - (int)'a';
        if(!temp->child[index]){
            return false;
        }
        temp = temp->child[index];
    }

    if(temp->isLeaf){
        return true;
    }
}

int main(){
    char keys[][5] = {"wtf", "is", "this"};

    TrieNode *root = getNode();

    int size = sizeof(keys)/sizeof(keys[0]);

    for(int i=0;i<size;i++){
        insert(root,keys[i]);
    }

    cout<<search(root,"wtf")<<endl;//Output: 1
    cout<<search(root,"shit");//output: 0

    return 0;
}
