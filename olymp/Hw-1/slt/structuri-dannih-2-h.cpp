#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

/*
 100 points 
*/

void Swap( int &a, int &b )
{
  int tmp = a;

  a = b;
  b = tmp;
}
int main( void )
{
  int n, m;
  cin >> n >> m;
  map<string, int> r;

  vector<int> cnt(n);
  for (int i = 0; i < n; i++)
    cnt[i] = 0;

  set<string> s;

  for (int i = 0; i < m; i++)
  {
    int q;
    string txt;

    cin >> q >> txt;
    
    s.insert(txt);
    r[txt] = q;

  }

  for (auto i = s.begin(); i != s.end(); i++)
    cnt[r[*i] - 1]++;

  for (auto &c : cnt)
    cout << c << ' ';
  return 0;
}