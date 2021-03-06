 public:
    // https://www.youtube.com/watch?v=JW-9nhktGGA watch algorithm 2
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
    if(!root )
    return root;
    
    if(root->data == n1 || root->data == n2)
    return root;
    
    Node * left = lca(root->left,n1,n2);
    Node * right = lca(root->right,n1,n2);
    
    
    if(left == NULL && right == NULL)
    return NULL;
    
    if(left != NULL && right != NULL)
    return root;
    
    if(left == NULL)
    return right;
    return left;
    
  
    }