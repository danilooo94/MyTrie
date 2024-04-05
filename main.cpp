#include <iostream>
#include "trie.h"

using namespace std;

int main()
{
    Trie myTrie;

    myTrie.insertWord("Banana");
    myTrie.insertWord("Goiaba");
    myTrie.insertWord("Bananada");
    std::cout << myTrie.checkIfAWordExists("Banana") << std::endl;
    std::cout << myTrie.checkIfAWordExists("Goiabada") << std::endl;
    myTrie.clear();
    return 0;
}
