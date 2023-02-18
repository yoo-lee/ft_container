using namespace std;
#include <cstddef>
class BST {
public:
  // BSTのノード
  class BSTNode {
  public:
    int value;
    BSTNode* left;
    BSTNode* right;

    BSTNode(int val) {
      value = val;
      left = NULL;
      right = NULL;
    }
  };

  // BSTのルートノード
  BSTNode* root;

  // コンストラクタ
  BST() {
    root = NULL;
  }

	void Insert(int val)
	{
		root = InsertHelper(root, val);
	}

	BSTNode* InsertHelper(BSTNode *node, int val)
	{
		if (node == NULL)
		node = new BSTNode(val);
	}
  // Insertメソッドのヘルパー関数
	// Node* Insert(Node *node, int val)
	// {
	// 	if (node == NULL)
	// 	node = new Node(val);
	// }

	// Node* InsertHelper(Node *node, int val)
	// {
	// 	if (node == NULL)
	// 	{
	// 		node = new Node(val);
	// 	}
	// 	else if (val < node->val)
	// }

  BSTNode* InsertHelper(BSTNode* node, int val) {
    if (node == NULL) {
      node = new BSTNode(val);
    } else if (val < node->value) {
      node->left = InsertHelper(node->left, val);
    } else if (val > node->value) {
      node->right = InsertHelper(node->right, val);
    }
    return node;
  }

  // 指定された値を持つノードを削除する
  void Delete(int val) {
    root = DeleteHelper(root, val);
  }

  // Deleteメソッドのヘルパー関数
  BSTNode* DeleteHelper(BSTNode* node, int val) {
    if (node == NULL) {
      return NULL;
    } else if (val < node->value) {
      node->left = DeleteHelper(node->left, val);
    } else if (val > node->value) {
      node->right = DeleteHelper(node->right, val);
    } else {
      if (node->left == NULL) {
        BSTNode* temp = node->right;
        delete node;
        return temp;
      } else if (node->right == NULL) {
        BSTNode* temp = node->left;
        delete node;
        return temp;
      }
      BSTNode* temp = FindMin(node->right);
      node->value = temp->value;
      node->right = DeleteHelper(node->right, temp->value);
    }
    return node;
  }

  // 指定されたノードのサブツリーの最小値を持つノードを検索する
  BSTNode* FindMin(BSTNode* node) {
    while (node->left != NULL) {
      node = node->left;
    }
    return node;
  }

  // 指定された値がBST内に存在するかどうかを判断する
  bool Contains(int val) {
    return ContainsHelper(root, val);
  }

  // Containsメソッドのヘルパー関数
  bool ContainsHelper(BSTNode* node, int val) {
    if (node == NULL) {
      return false;
    } else if (node->value == val) {
      return true;
    } else if (val < node->value) {
      return ContainsHelper(node->left, val);
    } else {
      return ContainsHelper(node->right, val);
    }
  }
};
#include <iostream>


int main() {
  BST bst;
  BST a;

  bst.Insert(5);
  bst.Insert(3);
  bst.Insert(7);
  bst.Insert(1);
  bst.Insert(4);
	
  if (bst.Contains(3)) {
    cout << "BST contains 3" << endl;
  }

  bst.Delete(5);
  
  if (!bst.Contains(5)) {
    cout << "BST does not contain 5" << endl;
  }

  a.Insert(100);


  return 0;
}
