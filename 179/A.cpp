//A Plural Form
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  string S;
  cin >> S;
  int n;
  n = S.size();
  if (S[n - 1] == 's') //n-1に注意
    S += "es";
  else
    S += "s";
  cout << S << endl;
  return 0;
}