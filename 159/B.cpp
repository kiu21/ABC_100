#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  bool ok = true;
  rep(i, (n - 1) / 2)
  {
    if (s[i] != s[n - i - 1])
      ok = false;
    if (s[i] != s[((n - 1) / 2) - i - 1])
      ok = false;
  }

  if (ok)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}