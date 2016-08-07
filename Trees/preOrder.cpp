/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

//Preorder: Root, left, right

void preOrder(node *root) {
    if(root == NULL){
        return;
    }
    //print root
    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root ->right);
    
}
