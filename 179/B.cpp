//B Go to jail
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{

  int n;
  cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  rep(i, n)
  {
    if (i + 2 < n)
    {

      if (a[i] == b[i] && a[i + 1] == b[i + 1] && a[i + 2] == b[i + 2])
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}