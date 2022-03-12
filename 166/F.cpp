#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int con(string s)
{
  if (s == "A")
    return 0;
  if (s == "B")
    return 1;
  if (s == "C")
    return 2;
}

int main()
{

  int n;
  ll a, b, c;
  cin >> n >> a >> b >> c;
  vector<string> s(n);

  vector<ll> now = {a, b, c};
  rep(i, n)
  {
    int w1 = con(s[0]);
    int w2 = con(s[1]);
    if (now[w1] == 0 and now[w2] == 0)
    {
      cout << "No" << endl;
      return 0;
    }

    if (now[w1] > now[w2])
    {
      ll ookiihou = w1;
      now[w1]--;
      now[w2]++;
    }
    else
    {
      ll ookiihou = w2;
        }
  }
}