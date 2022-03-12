//B Various distances

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  vector<int> x(n);
  rep(i, n) cin >> x[i];
  long m = 0;
  long y = 0;
  long t = 0;
  rep(i, n)
  {
    if (x[i] < 0)
      m += (-x[i]);
    else
      m += x[i];

    y += abs(x[i]) ^ (long)abs(x[i]); //絶対値
    if (t < x[i])
      t = x[i];
  }
  cout << m << endl;
  cout << sqrt(y) << endl;
  cout << t << endl;
  return 0;
}

//1
#include <bits/stdc++.h>
using namespace std;

int main()
{
  cout << fixed << setprecision(15);

  int n;
  cin >> n;
  vector<int> x(n);
  for (int i = 0; i < n; i++)
    cin >> x[i];

  long ans1 = 0;
  for (int i = 0; i < n; i++)
    ans1 += abs(x[i]);
  cout << ans1 << endl;

  long ans2 = 0;
  for (int i = 0; i < n; i++)
    ans2 += abs(x[i]) * (long)abs(x[i]);
  cout << sqrt(ans2) << endl;

  int ans3 = 0;
  for (int i = 0; i < n; i++)
    ans3 = max(ans3, abs(x[i]));
  cout << ans3 << endl;
}
