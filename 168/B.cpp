//B ...(Triple Dots)

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int k;
  cin >> k;
  string s;
  cin >> s;

  if (s.size() <= k)
  {
    cout << s << endl;
    return 0;
  }
  else
  {
    string ans = "";
    rep(i, k)
    {
      ans += s[i];
    }
    cout << ans + "..." << endl;
  }

  return 0;
}