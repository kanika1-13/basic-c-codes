#include<bits/stdc++.h>
using namespace std;
int fun(int n,int m)
{
    if(n==m) return 1;

    if(n<m||n%3) return 0;

    return fun(n/3,m)||fun(n*2/3,m);
}
int main(){

  int t,n,m;
  cin>>t;

  while(t--)
  {
    cin>>n>>m;
    if (fun(n, m)) {
    cout << "YES" << endl;
} else {
    cout << "NO" << endl;
}
  
  }}

