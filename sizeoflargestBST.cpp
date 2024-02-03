/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
class info{
   public:

   int maxi;
   int mini;
   bool isBST;
   int size;
};

info solve(TreeNode* root,int &ans){
    
    //base case
    if(root == NULL){
      return {INT_MIN, INT_MAX, true, 0};
    }

    info left = solve(root->left,ans);
    info right = solve(root->right,ans);

    info currentNode;

    currentNode.size = left.size+right.size+1;
    currentNode.maxi = max(root->data,right.maxi);
    currentNode.mini = min(root->data,left.mini);

    if(left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)){
        currentNode.isBST = true;
    }
    else{
        currentNode.isBST = false;
    }

    if(currentNode.isBST){
        ans = max(ans,currentNode.size);
    }
    return currentNode;
    
}

int largestBST(TreeNode * root){
    // Write your code here.
    int maxsize = 0;

    info temp = solve(root,maxsize);
    return maxsize;
}
