#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <climits>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <complex>
#include <functional>
#include <utility>
#include <iterator>

#define REP(i, n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i, m, n) for(int i = (m); i < (int)(n); ++i)
#define ALL(x) (x).begin(), (x).end()
#define INF 2000000000

typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned int uint;

using namespace std;

vector<string> vv;

void show() {
  REP(i, vv.size()) {
    cout << vv[i] << '\n';
  }
  cout << '\n';
}

void dfs(int x, int y) {
  vv[y][x] = '.';

  for(int dy = -1; dy <= 1; ++dy) {
    for(int dx = -1; dx <= 1; ++dx) {
      int nx = x + dx;
      int ny = y + dy;
      if(vv[ny][nx] == 'W') {
        dfs(nx, ny);
      }
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  vv.push_back(string(m + 2, '.'));

  REP(i, n) {
    string tmp;
    cin >> tmp;
    tmp = "." + tmp + ".";
    vv.push_back(tmp);
  }
  vv.push_back(string(m + 2, '.'));

  int ans = 0;
  for(int y = 1; y <= n; ++y) {
    for(int x = 1; x <= m; ++x) {
      if(vv[y][x] == 'W') {
        dfs(x, y);
        ans += 1;
      }
    }
  }

  cout << ans << '\n';
  return 0;
}
