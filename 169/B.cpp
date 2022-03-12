//B Multiplication2

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll MX = 1e18;

int main()
{

  int n; //llの限界9^18
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll ans = 1;
  rep(i, n)
  {
    if (a[i] == 0)
    {
      cout << 0 << endl;
      return 0;
    }
  }

  rep(i, n)
  {
    if (MX / ans < a[i]) //かけてから判定するとオーバーフロー
    {
      cout << -1 << endl;
      return 0;
    }
    ans *= a[i];
  }

  cout << ans << endl;
  return 0;
}

//1-------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;
const ll MX = 1e18;

int main()
{

  int n; //llの限界9^18
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll ans = 1;
  rep(i, n)
  {
    if (a[i] == 0)
    {
      cout << 0 << endl;
      return 0;
    }
  }

  rep(i, n)
  {
    if (__int128(ans) * a[i] > MX) //かけてから判定するとオーバーフロー
    {
      cout << -1 << endl;
      return 0;
    }
    ans *= a[i];
  }

  cout << ans << endl;
  return 0;
}
