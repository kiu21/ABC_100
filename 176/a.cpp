#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n, x, t;
  cin >> n >> x >> t;
  int group;
  group = (n + x - 1) / x;
  cout << t * group << endl;

  return 0;
}