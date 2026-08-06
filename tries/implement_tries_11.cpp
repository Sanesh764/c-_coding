#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    char data;
    bool terminal;
    unordered_map<char, Node*> children;
    int countWordEndingHere;
    int countWordStarting;
    Node(char data) {
        this->data = data;
        terminal = false;
        countWordEndingHere = 0;
        countWordStarting = 0;
    }
};
class Trie {
public:
    Node* root;
    Trie() {
        root = new Node('\0');
    }
    void insert(string word) {
        Node* curr = root;

        for (char ch : word) {
            if (curr->children.count(ch)) {
                curr = curr->children[ch];
            } else {
                Node* child = new Node(ch);
                curr->children[ch] = child;
                curr = child;
            }
            curr->countWordStarting++;
        }
        curr->terminal = true;
        curr->countWordEndingHere++;
    }

    int countWordsEqualTo(string word) {
        Node* curr = root;

        for (char ch : word) {
            if (!curr->children.count(ch))
                return 0;
            curr = curr->children[ch];
        }
        return curr->countWordEndingHere;
    }

    int countWordsStartingWith(string prefix) {
        Node* curr = root;
        for (char ch : prefix) {
            if (!curr->children.count(ch))
                return 0;
            curr = curr->children[ch];
        }
        return curr->countWordStarting;
    }

    void erase(string word) {
        Node* curr = root;
        for (char ch : word) {
            curr = curr->children[ch];
            curr->countWordStarting--;
        }
        curr->countWordEndingHere--;
        if (curr->countWordEndingHere == 0) curr->terminal = false;     
    }
};

int main() {
    Trie trie;

    trie.insert("apple");
    trie.insert("apple");
    trie.insert("app");
    trie.insert("bat");

    cout << "Count EqualTo apple : "
         << trie.countWordsEqualTo("apple") << endl;

    cout << "Count EqualTo app : "
         << trie.countWordsEqualTo("app") << endl;

    cout << "Count StartingWith app : "
         << trie.countWordsStartingWith("app") << endl;

    trie.erase("apple");

    cout << "\nAfter erase(apple)\n";

    cout << "Count EqualTo apple : "
         << trie.countWordsEqualTo("apple") << endl;

    cout << "Count StartingWith app : "
         << trie.countWordsStartingWith("app") << endl;

    return 0;
}