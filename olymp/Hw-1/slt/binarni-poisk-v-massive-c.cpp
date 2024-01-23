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
  int n;
  cin >> n;

  vector<pair<int, int>> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i].first;
    a[i].second = i;
  }

  int m;
  cin >> m;

  vector<int> b(m);

  for (int i = 0; i < m; i++)
    cin >> b[i];

  sort(a.begin(), a.end());
  /*
    4
    1 2 2 3
    4
    4 3 2 1

    0 0
    4 4
    2 3
    1 1
  */

  for (int i = 0; i < m; i++)
  {
    pair<int, int> k = {b[i], -1};
    int indl = lower_bound(a.begin(), a.end(), k) - a.begin();

    if (indl >= n || a[indl].first > k.first)
      cout << "0 0 \n";
    else
    {
      k = {b[i], n + 10};
      int indr = upper_bound(a.begin(), a.end(), k) - a.begin() - 1;
      
      cout << a[indl].second + 1 << " " << a[indr].second + 1 << '\n';
    }
  }
  return 0;
}