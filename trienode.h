#ifndef TRIENODE_H
#define TRIENODE_H

#include "unordered_map"
#include "memory"
#include <iostream>

class TrieNode
{
public:
    TrieNode();
    ~TrieNode();
    std::shared_ptr<TrieNode> getNode(const char &character);
    void setChildrenNode(const char &pos,std::shared_ptr<TrieNode> newNode);


    bool isEndOfWord() const;
    void setIsEndOfWord(bool newIsEndOfWord);

private:
    std::unordered_map<char,std::shared_ptr<TrieNode>> m_childrenNodes;
    bool m_isEndOfWord;
};

#endif // TRIENODE_H
