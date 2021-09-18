    
// Code Lib
  vector<int> solve(Node * root)
  {
  
      if(!root)
      return  {0,0};
      
      
      vector<int> a = solve(root->left);
      vector<int> b = solve(root->right);
      
      
      
        if(a[0] > b[0])  
        return {a[0] + 1 , a[1] + root->data};
      else if(b[0] > a[0])  
      return {b[0] + 1 , b[1] + root->data};
      
      else {
         return {a[0] + 1 , max(a[1],b[1]) + root->data} ; 
      }
      
      
      
      
  }
    int sumOfLongRootToLeafPath(Node *root)
    {
      
     vector<int> v;
  v= solve(root);
       return v[1];
    }