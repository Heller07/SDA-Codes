#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
int countnodes(TreeNode<int>* root){
    if(root==NULL){
        return 0;
    }
    int ans = 1+countnodes(root->left)+countnodes(root->right);
    return ans;
}

int solve(TreeNode<int>* root,int &i, int k){
    if(root==NULL){
        return -1;

    }
    int left = solve(root->left,i,k);

    if(left != -1){
        return left;
    }
    i++;

    if(i==k){
        return root->data;
    }

    int right = solve(root->right,i,k);
    return right;

    
    


}

int KthLargestNumber(TreeNode<int>* root, int k) 
{
    int i = 0;
    int result = solve(root,i,countnodes(root)-k+1);
    return result;

}
