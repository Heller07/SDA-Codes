/*************************************************************

    Following is the Binary Tree node structure
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    // Write your code here.
    //find key

    TreeNode* temp = root;
    int pred = -1;
    int succ = -1;


    while(temp!=NULL && temp->data != key){
        if(temp->data>key){
            succ = temp->data;
            temp = temp->left;
        }
        else{
            pred = temp->data;
            temp = temp->right;
        }
    }
if(temp){
    TreeNode* lefttree = temp->left;

    while(lefttree!=NULL){
        pred = lefttree->data;
        lefttree = lefttree->right;

    }
    TreeNode* righttree = temp->right;
    while(righttree!=NULL){
        succ = righttree->data;
        righttree = righttree->left;
    }
    
}
    return {pred,succ};

}
