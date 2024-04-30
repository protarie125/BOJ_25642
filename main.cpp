#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;

ll a, b;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> a >> b;
  auto turn = 0;
  while (a < 5 && b < 5) {
    if (0 == turn) {
      b += a;
    } else {
      a += b;
    }

    if (5 <= a) {
      cout << "yj";
      return 0;
    }

    if (5 <= b) {
      cout << "yt";
      return 0;
    }

    if (1 == turn) {
      turn = 0;
    } else {
      turn = 1;
    }
  }

  return 0;
}