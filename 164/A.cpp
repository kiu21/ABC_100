#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i <(n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P =pair<int,int>;

int main(){
  int s,w;
  cin>>s>>w;
  if(s<=w) cout<<"unsafe"<<endl;
  else cout<<"safe"<<endl;
return 0;
}