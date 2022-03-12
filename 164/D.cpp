#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int num(int i, int l)
{
  int kakeru = 1;
  int num = 0;
  rep2(j, i, l)
  {
    j *= kakeru;
    num += j;
    kakeru *= 10;
  }
  return num;
}

int main()
{

  string s;
  cin >> s;

  rep(i, s.size() - 3)
  {
    while (i + 4 > s.size())
    {
      int l =
          int num = num(i, l)
    }
  }
  return 0;
}