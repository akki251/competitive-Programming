class Solution{
  public:
    int longestKSubstr(string s, int k) {
  
  unordered_map<char,int> m;
  
  int i = 0 ; 
  int j = 0;
  
  int ans = -1;
  while( j < s.length())
  {
      
      m[s[j]]++;
      if(m.size() < k)
      j++;
      
      else if(m.size() == k)
      {
          ans = max(ans,j-i+1);
          j++;
      }
      else if(m.size() > k)
      {
          
          while(m.size() > k)
          {
              m[s[i]]--;
              if(m[s[i]] == 0)
              m.erase(s[i]);
              i++;
          }
          j++;
      }
  }
  
  return ans ;
  
  
  
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver Code Ends