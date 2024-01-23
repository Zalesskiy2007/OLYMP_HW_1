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

int abs( int a )
{
  if (a < 0)
    return -a;

  return a;
}

int min( int a, int b )
{
  if (a < b)
    return a;

  return b;
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

  sort(a.begin(), a.end());

  int minim = -1;
  int ind = -1;

  for (int i = 0; i < n; i++)
  {
    int m;
    if (i == 0)
      m = a[i + 1].first - a[i].first;
    else if (i == n - 1)
      m = a[i].first - a[i - 1].first;
    else
      m = min(a[i + 1].first - a[i].first, a[i].first - a[i - 1].first);

    if (minim == -1 || minim > m)
    {
      minim = m;
      ind = i;
    }
  }

  cout << a[ind].second + 1;
  return 0;
}