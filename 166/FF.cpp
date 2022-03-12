#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  int n;
  cin >> n;
  ll a, b, c;
  vector<int> d(3);
  rep(i, 3) cin >> d[i];
  vector<P> q;
  rep(i, n)
  {
    string s;
    cin >> s;
    int a = 0, b = 1;
    if (s == "AB")
      a = 0, b = 1;
    if (s == "AC")
      a = 0, b = 2;
    if (s == "BC")
      a = 1, b = 2;
    q.emplace_back(a, b);
  }

  string ans;
  auto add = [&](int a, int b) {
    d[a]++;
    d[b]--;
    ans += 'A' + a;
  };

  q.emplace_back(0, 1);
  rep(i, n)
  {
    int a = q[i].first;
    int b = q[i].second;
    if (!d[a] && !d[b])
    {
      cout << "No" << endl;
      return 0;
    }
    if (!d[a])
    {
      add(a, b);
    }
    else if (!d[b])
    {
      add(b, a);
    }
    else
    {
      int na = q[i + 1].first;
      int nb = q[i + 1].second;
      if (a == na or a == nb)
      {
        add(a, b);
      }
      else
      {
        add(b, a);
      }
    }
  }
  cout << "Yes" << endl;
  rep(i, n)
  {
    cout << ans[i] << endl;
  }
  return 0;
}