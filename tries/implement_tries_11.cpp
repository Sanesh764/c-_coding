


// LeetCode 1804: Implement Trie II (Prefix Tree)
// Problem Statement

// A Trie (Prefix Tree) is a tree-like data structure used to efficiently store and retrieve strings.

// Implement the Trie class with the following functions:

// Functions
// Trie()

// Initializes the Trie object.

// void insert(String word)

// Inserts the string word into the Trie.

// int countWordsEqualTo(String word)

// Returns the number of times the exact word has been inserted into the Trie.

// int countWordsStartingWith(String prefix)

// Returns the number of words in the Trie that have the given prefix.

// void erase(String word)

// Erases one occurrence of the word from the Trie.

// It is guaranteed that the word exists in the Trie before erase() is called.

// Example
// Input
// ["Trie","insert","insert","countWordsEqualTo","countWordsStartingWith","erase","countWordsEqualTo","countWordsStartingWith"]

// [[],
// ["apple"],
// ["apple"],
// ["apple"],
// ["app"],
// ["apple"],
// ["apple"],
// ["app"]]
// Output
// [null,null,null,2,2,null,1,1]

// Constraints
// 1 <= word.length, prefix.length <= 2000

// word and prefix consist only of lowercase English letters.

// At most 3 × 10^4 calls will be made to insert,
// countWordsEqualTo,
// countWordsStartingWith,
// and erase.

// It is guaranteed that erase(word) will be called only if the word exists in the Trie.

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