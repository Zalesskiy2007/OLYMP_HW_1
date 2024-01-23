#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void Swap( int &a, int &b )
{
  int tmp = a;

  a = b;
  b = tmp;
}
int main( void )
{
  int n, m;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; i++)
    cin >> b[i];

  sort(a.begin(), a.end());

  for (int i = 0; i < m; i++)
  {
    int res = 0;
    int indl = lower_bound(a.begin(), a.end(), b[i]) - a.begin();

    if (indl >= n || a[indl] != b[i])
      cout << 0 << " ";
    else
    {
      int indr = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
      res = indr - indl;
      cout << res << ' ';
    }
  }
  return 0;
}