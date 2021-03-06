// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int n, vector<int> adj[]) {
    
    
    bool * visited= new bool[n];
    
    vector<int> ans ;
    
      for(int i = 0 ; i < n ;  i++)
      {
          visited[i] = false; 
      }
      
      queue<int> q;
      q.push(0);
   
    visited[0] = true;
     
     while(!q.empty())
     {
         
         auto  front = q.front();
         q.pop();
       
         
         ans.push_back(front);
        
         
         for(auto it : adj[front])
         {
             if(visited[it] == false)
                 { 
                     visited[it] = true;
                     q.push(it);
                     
                 }
         }
         
         
     }
      
      
      return ans ;
      
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends



///////////////// ALTERNATE WAY  

///// 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int n, vector<int> adj[]) {
    
    
    bool * visited= new bool[n];
    
    vector<int> ans ;
    
      for(int i = 0 ; i < n ;  i++)
      {
          visited[i] = false; 
      }
      
      queue<int> q;
      q.push(0);
  
    // visited[0] = true;
     
     while(!q.empty())
     {
         
         auto  front = q.front();
         q.pop();
       if(visited[front] == true)
       continue;
         visited[front] = true;
         ans.push_back(front);
        
         
         for(auto it : adj[front])
         {
             if(visited[it] == false)
                 { 
                 
                     q.push(it);
                     
                 }
         }
         
         
     }
      
      
      return ans ;
      
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends