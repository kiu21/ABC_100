//C Step

//n人が1列に並んでおり、前からi番目の人の身長はAiです。それぞれの人の足元に高さが0以上の踏み台を設置し、すべての人が「踏み台を込めて身長を比較したときに自分より前に、自分より背の高い人が存在しない」という条件を満たすときの、踏み台の高さの合計の最小値を求めよ。

//n=1~2*10-5
//Ai=1~10^9

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{

  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll ans = 0;

  rep(i, n - 1)
  {
    if (a[i + 1] < a[i])
    {
      ans += a[i] - a[i + 1];
      a[i + 1] += a[i] - a[i + 1];
    }
  }

  cout << ans << endl;

  return 0;
}