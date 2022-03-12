#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll mod = 1e9 + 7;
ll dp[2000];

int main()
{
  int s;
  cin >> s;

  memset(dp, 0, sizeof(dp));
  dp[0] = 1;
  for (int i = 1; i <= s; i++)
  {
    if (i - 3 >= 0)
    {
      dp[i] += dp[i - 3];
      dp[i] %= mod;
    }
  }
  cout << dp[s] << endl;
  return 0;
}