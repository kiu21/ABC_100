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
  set<string> se;

  rep(i, n)
  {
    string s;
    cin >> s;
    se.insert(s);
  }

  cout << se.size() << endl;

  return 0;
}