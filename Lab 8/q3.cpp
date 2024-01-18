//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//struct TreeNode {
//    char data;
//    TreeNode* left;
//    TreeNode* right;
//
//    TreeNode(char val) : data(val), left(nullptr), right(nullptr) {}
//};
//
//class Tree {
//public:
//    TreeNode* root;
//
//    Tree() : root(nullptr) {}
//
//    void insert(char val) {
//        root = insertRecursive(root, val);
//    }
//
//    TreeNode* insertRecursive(TreeNode* node, char val) {
//        if (node == nullptr) {
//            return new TreeNode(val);
//        }
//
//        if (val < node->data) {
//            node->left = insertRecursive(node->left, val);
//        }
//        else if (val > node->data) {
//            node->right = insertRecursive(node->right, val);
//        }
//
//        return node;
//    }
//
//    void printLeaf(TreeNode* node) {
//        if (node == nullptr) return;
//
//        if (node->left == nullptr && node->right == nullptr) {
//            cout << node->data << " ";
//        }
//
//        printLeaf(node->left);
//        printLeaf(node->right);
//    }
//
//    void SecondLargestdepth(TreeNode* node, int& first, int& second, int depth) {
//        if (node == nullptr) return;
//
//        if (depth > first) {
//            second = first;
//            first = depth;
//        }
//        else if (depth > second && depth < first) {
//            second = depth;
//        }
//
//        SecondLargestdepth(node->left, first, second, depth + 1);
//        SecondLargestdepth(node->right, first, second, depth + 1);
//    }
//};
//
//void testFunction(Tree* root) {
//    cout << "Binary tree leaf nodes are:" << endl;
//    root->printLeaf(root->root);
//
//    int first = -1;
//    int second = -1;
//
//    root->SecondLargestdepth(root->root, first, second, 0);
//
//    cout << "\nSecond Largest depth of Tree is " << second << "." << endl;
//}
//
//int main() {
//    Tree tree;
//
//    cout << "Enter the characters to insert into the tree (type 'q' to stop): ";
//    char val;
//    while (cin >> val && val != 'q') {
//        tree.insert(val);
//    }
//
//    testFunction(&tree);
//
//    return 0;
//}
