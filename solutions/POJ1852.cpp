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

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned int uint;

void solve() {
  int l, n;
  scanf("%d %d", &l, &n);
  int t;
  int min_time = -1;
  int max_time = -1; 
  REP(i, n) {
    scanf("%d", &t);
    min_time = max(min_time, min(t, l - t));
    max_time = max(max_time, max(t, l - t));
  }
  printf("%d %d\n", min_time, max_time);
}

int main() {
  int n;
  scanf("%d", &n);
  REP(i, n) {
    solve();
  }
  return 0;
}
