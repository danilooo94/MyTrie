#ifndef TRIE_H
#define TRIE_H

#include <string>
#include "trienode.h"
class Trie
{
public:
    Trie();
    ~Trie();
    void insertWord(const std::string &word);

    bool checkIfAWordExists(const std::string &word);
    void clear();
    int numberOfWords();
private:
    std::shared_ptr<TrieNode> createNode(const char &character);


private:
   std::shared_ptr<TrieNode> m_root;

   int m_wordsNumber;

};

#endif // TRIE_H
