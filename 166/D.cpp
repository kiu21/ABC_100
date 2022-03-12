//D I hate Factorization

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{

  ll x;
  cin >> x;

  int a = 0;
  int b = 0;
  bool yes = false;

  rep(i, 1000)
  {
    rep(j, 1000)
    {
      if (pow(j, 5) == x - pow(i, 5))
      {
        a = j;
        b = -i;
        yes = true;
        break;
      };

      if (pow(j, 5) == x + pow(i, 5))
      {
        a = j;
        b = i;
        yes = true;
        break;
      }
    }
    if (yes)
    {
      break;
    }
  }

  cout << a << " " << b << endl;
  return 0;
}