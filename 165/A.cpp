//A We Love Golf

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
  int a, b;
  cin >> a >> b;

  int n = 1000;
  rep(i, n)
  {
    if (a <= k * i and b >= k * i)
    {
      cout << "OK" << endl;
      return 0;
    }
  }
  cout << "NG" << endl;

  return 0;
}