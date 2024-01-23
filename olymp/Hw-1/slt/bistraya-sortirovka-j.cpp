#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

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

  vector<pair<double, int>> d(n);
  vector<pair<int, int>> p(n);

  for (int i = 0; i < n; i++)
  {
    cin >> p[i].first >> p[i].second;
    d[i].first = sqrt(p[i].first *  p[i].first + p[i].second * p[i].second);
    d[i].second = i;
  }

  sort(d.begin(), d.end());

  for (int i = 0; i < n; i++)
  {
    cout << p[d[i].second].first << " " << p[d[i].second].second << '\n';
  }

  return 0;
}