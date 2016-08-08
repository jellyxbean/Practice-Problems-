//Height of binary tree
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/

int height(node * root)
{
  if(root == NULL){
      return -1;
  }
    int leftDepth = height(root->left);
    int rightDepth = height(root->right);
    
    if(leftDepth > rightDepth){
        return (leftDepth+1);
    }
    else 
        return (rightDepth+1);
}
