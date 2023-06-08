#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.  
  vector<vector<long long int>> ans(n);
  for(int i = 1; i<=n; i++){
    long long int c = 1;
    for(int j = 1 ; j<=i;j++){
      ans[i-1].push_back(c);
      c = c*(i -j )/j;
   }

  }
  return ans;
}
