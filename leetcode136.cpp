#include <iostream>
using namespace std;

class TrieNode {
public:
    TrieNode* child[26];
    bool isEnd;

    TrieNode() {
        isEnd = false;

        for (int i = 0; i < 26; i++)
            child[i] = nullptr;
    }
};

class Trie {
    TrieNode* root;

public:

    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {

        TrieNode* current = root;

        for (char c : word) {

            int index = c - 'a';

            if (current->child[index] == nullptr)
                current->child[index] = new TrieNode();

            current = current->child[index];
        }

        current->isEnd = true;
    }

    bool search(string word) {

        TrieNode* current = root;

        for (char c : word) {

            int index = c - 'a';

            if (current->child[index] == nullptr)
                return false;

            current = current->child[index];
        }

        return current->isEnd;
    }
};

int main() {

    Trie trie;

    trie.insert("apple");
    trie.insert("app");
    trie.insert("banana");

    cout << boolalpha;

    cout << "apple: "
         << trie.search("apple") << endl;

    cout << "app: "
         << trie.search("app") << endl;

    cout << "cat: "
         << trie.search("cat") << endl;

    return 0;
}
