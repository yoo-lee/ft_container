using namespace std;
#include <iostream>
#include <cstddef>

class BST
{
	public:
	class Node
	{
		Node*	left;
		Node*   right;
		int val;
	};
	
	Node (int val)
	{
		left = NULL;
		right = NULL;
		value = val;
	}
};

void insert(int val)
{
	if (Node == NULL)
	inserthelper(root, val);	
}

Node Inserthelp(Node *node, int val)
{
		if ( node == NULL)
	{
		node = new Node(val);
	}
	else if (val < node -> val)
	node -> left = Inserthelper(node->left, val);
	else if(val > node-> val)
	node -> right = Inserthelper(node->right, val);
	return Node;
}

  // 指定された値を持つノードを削除する
  void Delete(int val) {
    root = DeleteHelper(root, val);
  }

  // Deleteメソッドのヘルパー関数
  Node* DeleteHelper(Node* node, int val) {
    if (node == NULL) {
      return NULL;
    } else if (val < node->value) {
      node->left = DeleteHelper(node->left, val);
    } else if (val > node->value) {
      node->right = DeleteHelper(node->right, val);
    } else {
      if (node->left == NULL) {
        
Node* temp = node->right;
        delete node;
        return temp;
      } else if (node->right == NULL) {
        
Node* temp = node->left;
        delete node;
        return temp;
      }
      
Node* temp = FindMin(node->right);
      node->value = temp->value;
      node->right = DeleteHelper(node->right, temp->value);
    }
    return node;
  }

  // 指定されたノードのサブツリーの最小値を持つノードを検索する
  Node* FindMin(Node* node) {
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
  bool ContainsHelper(Node* node, int val) {
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
}


int main() {
  BST *bst;
  BST  *a;
  bst.Insert(5);
  bst.Insert(3);
  bst.Insert(7);
  bst.Insert(1);
  bst.Insert(4);
	
//Node* a = bst.FindMin(bst.root);Node* b 
//   b = FindMin(bst);

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
