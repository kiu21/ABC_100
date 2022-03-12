//B 1%

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

  ll sum = 100;
  rep(i, 1000000)
  {
    sum += sum / 100;
    if (sum >= x)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}