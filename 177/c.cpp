//C Sum of product of pairs

#include <bits/stdc++.h>
using namespace std;
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

  ll ans;
  rep(i, n)
  {
    ans += (a[i] * a[j] - a[j] * a[j])
  }

  return 0;
}

//1 差分を用いて区間和を計算する
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  int mod = 1000000007;
  long long sum = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    sum += A[i];
    sum %= mod;
  }

  long ans = 0;

  //i について全探索する
  for (int i = 0; i < N; i++)
  {
    //A[i+1] ... A[N] の値を更新する
    sum -= A[i];
    if (sum < 0)
      sum += mod;

    ans += A[i] * sum;
    ans %= mod;
  }

  cout << ans << endl;
}

//2 累積和
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  vector<long long> B(N + 1, 0); //累積和テーブル
  int mod = 1000000007;

  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    B[i + 1] = B[i] + A[i];
  }

  long ans = 0;

  //i について全探索する
  for (int i = 0; i < N; i++)
  {
    //累積和を使ってA[i+1] + ... + A[N] を求める
    long long sum = (B[N] - B[i + 1]) % mod;

    ans += A[i] * sum;
    ans %= mod;
  }

  cout << ans << endl;
}

//3 真ん中のブロックを取り除いて半分にする

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  long long sum = 0;
  int mod = 1000000007;

  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    sum += A[i];
    sum %= mod;
  }

  //大きい正方形の面積を求める
  long long ans = sum * sum % mod;
  //中央の正方形を取り除く
  for (int i = 0; i < N; i++)
  {
    ans -= (long long)A[i] * A[i] % mod;
    if (ans < 0)
      ans += mod;
  }

  //2で割る (逆元を用いる)
  //ans /= 2 を mod 1000000007で行うとこうなる
  ans *= (mod + 1) / 2;
  ans %= mod;

  cout << ans << endl;
}
