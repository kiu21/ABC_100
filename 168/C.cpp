//C :(Coron)

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;
const double pi = acos(-1);

int main()
{
  double a, b, h, m;
  cin >> a >> b >> h >> m;

  double h_radian, m_radian;
  h_radian = h * 30 + m * 0.5;
  m_radian = 6 * m;

  double ans = 0;
  ans = a * a + b * b - 2 * a * b * cos(abs((h_radian - m_radian) / 360) * 2 * pi);

  cout << fixed << setprecision(20);
  cout << sqrt(ans) << endl;
  return 0;
}