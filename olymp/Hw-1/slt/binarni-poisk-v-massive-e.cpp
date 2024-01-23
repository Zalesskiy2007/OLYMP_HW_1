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
int main( void )
{
  int n, k;
  cin >> n >> k;

  vector<int> a(n), b(k);

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < k; i++)
    cin >> b[i];

  for (int i = 0; i < k; i++)
  {
    int ind = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
    if (ind >= n)
      cout << a[ind - 1] << '\n';
    else if (ind == 0)
      cout << a[ind] << '\n';
    else
    {
      if (a[ind] == b[i])
        cout << a[ind] << '\n';
      else
      {
        int tmp = a[ind - 1];
        if (abs(tmp - b[i]) > abs(a[ind] - b[i]))
          cout << a[ind] << '\n';
        else
          cout << tmp << '\n';
      }
    }
  }
  return 0;
}