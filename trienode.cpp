#include "trienode.h"

TrieNode::TrieNode()
{
    m_isEndOfWord = false;
}

TrieNode::~TrieNode()
{
    m_childrenNodes.clear();
    std::cout << "Node Deleted" << std::endl;
}

std::shared_ptr<TrieNode> TrieNode::getNode(const char &character)
{
    if (m_childrenNodes.contains(character)){
        return m_childrenNodes[character];
    }
    return nullptr;
}

void TrieNode::setChildrenNode(const char &pos, std::shared_ptr<TrieNode> newNode)
{
    m_childrenNodes.insert({pos,newNode});
}

bool TrieNode::isEndOfWord() const
{
    return m_isEndOfWord;
}

void TrieNode::setIsEndOfWord(bool newIsEndOfWord)
{
    m_isEndOfWord = newIsEndOfWord;
}
