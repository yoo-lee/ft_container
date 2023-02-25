#include <iostream>
#include "20.hpp"

int main() {
    // 二分探索木を構築する
    std::cout << "Constructing binary search tree..." << std::endl;
    Node<int>* root = new Node<int>(5);
    root->left = new Node<int>(3);
    root->right = new Node<int>(8);
    root->left->left = new Node<int>(1);
    root->left->right = new Node<int>(4);
    root->right->left = new Node<int>(7);
    root->right->right = new Node<int>(9);

    // BST_iteratorを使用して二分探索木のノードを反復処理する
    std::cout << "Iterating through binary search tree..." << std::endl;
    BST_iterator<int> it(root);
    while (it.has_next()) {
        std::cout << it.get_next() << " ";
    }
    std::cout << std::endl;

    return 0;
}
