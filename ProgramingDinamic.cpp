#include <bits/stdc++.h>
using namespace std;
#define INF 1e9;

int a,b,c;
vector<int> dp;

int pedacos(int nAtual){
  
  if(nAtual == 0){
    return 0;
  }else if(nAtual <= 0){
    return -INF;
  }else{
    if(dp[nAtual] != -1){
      return dp[nAtual];
    }else{
      dp[nAtual] = max(max(pedacos(nAtual-a)+1,pedacos(nAtual-b)+1),pedacos(nAtual-c)+1); 
    }
  }
  
  return dp[nAtual];
  
}

int main() 
{
  ios::sync_with_stdio(0);
  
  int n,p;
  
  cin >> n >> a >> b >> c;
  dp.assign(n+1,-1);
  
  
  
  p = pedacos(n);
  
  cout << p;
  
    
  return 0;
}