//B Mutiple of 9

//整数ｎが9の倍数であることと、ｎを10進法で表したときの各桁の数の和が9の倍数であることは同値です。ｎが9の倍数であることを判定してください。
// n=0~10^200000

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  string n;
  cin >> n;
  int sum;
  rep(i, n.size())
  {
    sum += n[i] - '0';
  }
  sum %= 9;

  if (sum == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}

//1
char s[200010];
int main()
{
  scanf("%s", s);
  int len = strlen(s);
  int sum = 0;
  for (int i = 0; i < len; i++)
    sum += s[i] - '0';
  if (sum % 9 == 0)
  {
    puts("Yes");
  }
  else
  {
    puts("No");
  }
}
