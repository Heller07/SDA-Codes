/*************************************************************

    Following is the Binary Tree node structure:

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

void inorder(TreeNode*root,vector <int> &ans){
    if(root==NULL){
        return ;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}

vector<int> MergeArrays(vector<int> a,vector<int> b)
{
    vector <int> ans(a.size()+b.size());
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            ans[k++] = a[i++];
        }
        else{
            ans[k++] = b[j++];
        }
    }
    while(i<a.size()){
                 ans[k++] = a[i++];   
    }

    while(j<b.size()){
        ans[k++] = b[j++];
    }
    return ans;
}




vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // Write your code here.

vector <int> bst1,bst2;
inorder(root1,bst1);
inorder(root2,bst2);

vector<int> mergeArray = MergeArrays(bst1,bst2);

return mergeArray;

}
