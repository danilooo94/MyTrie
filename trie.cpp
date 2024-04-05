#include "trie.h"

Trie::Trie()
{
    m_root = std::shared_ptr<TrieNode>(new TrieNode());
}

Trie::~Trie()
{
    clear();
}

void Trie::insertWord(const std::string &word)
{
    std::shared_ptr<TrieNode> it = m_root;
    int wordSize = word.size();
    for (int i=0; i<wordSize; i++){
        auto auxNode = it->getNode(word[i]);
        if (auxNode != nullptr){
            it = auxNode;
            continue;
        }
        std::shared_ptr<TrieNode> newNode = createNode(word[i]);
        it->setChildrenNode(word[i],newNode);
        it = newNode;
    }
    it->setIsEndOfWord(true);
    m_wordsNumber++;
}

bool Trie::checkIfAWordExists(const std::string &word)
{
    std::shared_ptr<TrieNode> it = m_root;
    int wordSize = word.size();
    for (int i=0; i<wordSize; i++){
        if (it->getNode(word[i]) == nullptr){
            return false;
        }
        it = it->getNode(word[i]);
    }
    if (it->isEndOfWord()){
        return true;
    }
}

void Trie::clear()
{
    m_root = nullptr;
}

int Trie::numberOfWords()
{
    return m_wordsNumber;
}

std::shared_ptr<TrieNode> Trie::createNode(const char &character)
{
    std::shared_ptr<TrieNode> node = std::shared_ptr<TrieNode>(new TrieNode());
    return node;
}
