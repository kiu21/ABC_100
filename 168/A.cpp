//A Therefore

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, s, n) for (int i = (s); i <= (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main()
{
  string n;
  cin >> n;
  int size = n.size() - 1;
  if (n[size] == '2' or n[size] == '4' or n[size] == '5' or n[size] == '7' or n[size] == '9')
  {
    cout << "hon" << endl;
  }
  else if (n[size] == '3')
  {
    cout << "bon" << endl;
  }
  else
  {
    cout << "pon" << endl;
  }
  return 0;
}