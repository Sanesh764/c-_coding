//leetcode 1804

#include<iostream>
#include<unordered_map>
using namespace std;

class Node{
public:
    char data;
    bool terminal;
    unordered_map<char,Node*>childeren;
    int countWordEndingHere;
    int countWordStarting;

    Node(char data){
        this->data=data;
        this->terminal=false;
        this->countWordEndingHere=this->countWordStarting=0;
    }
};

class Trie{
public:
    Node* root;
    Trie(){
        root=new Node('\0');
    }

    void insert(string word){
        Node* curr=root;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(curr->childeren.count(ch)){
                curr=curr->childeren[ch];
                curr->countWordStarting++;
            } else{
                Node* child=new Node(ch);
                curr->childeren[ch]=child;
                curr-curr->childeren[ch];
                curr->countWordStarting++;
            }
        }
        curr->terminal-true;
        curr->countWordEndingHere++;
    }

    int countWordsEqualTo(string word){
        Node* curr=root;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            if(curr->childeren.count(ch)){
                curr=curr->childeren[ch];
            } else {
                return 0;
            }
        }
        return curr->countWordEndingHere;
    }
    int countWordStartingWith(string prefix){
        Node* curr=root;
        for(int i=0;i<prefix.size();i++){
            char ch=prefix[i];
            if(curr->childeren.count(ch)){
                curr=curr->childeren[ch];
            } else return 0;
        }
        return curr->countWordStarting;
    }
    void erase(string word){
        Node* curr=root;
        for(int i=0;i<word.size();i++){
            char ch=word[i];
            curr=curr->childeren[ch];
            curr->countWordStarting--;
        }
        curr->countWordEndingHere--;
    }
};
int main(){
    return 0;
}

