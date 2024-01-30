#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> ans;
    if(root == NULL) return ans;
    queue<BinaryTreeNode<int>*> treeQueue;
    treeQueue.push(root);

    while(!treeQueue.empty()) {

        BinaryTreeNode<int>* curr = treeQueue.front();
        treeQueue.pop();

        ans.push_back(curr->val);
        if(curr->left)
            treeQueue.push(curr->left);
        if(curr->right)
            treeQueue.push(curr->right);
    }
    return ans;
}