#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <climits>
#include <set>

using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
  int digitsSquared(int n) {
    int result = 0;
    while (n > 0) {
      int lst = n % 10;
      result += lst*lst;
      n /= 10;
    }
    return result;
  }
    bool isHappy(int n) {
        set<int> seen;
        while (!seen.count(n) && n != 1) {
          seen.insert(n);
          n = digitsSquared(n);
        }
        return n == 1;
    }
};

void test1() {
  Solution S;
  cout << boolalpha;
  cout << "true? " << S.isHappy(19) << endl;
  cout << "true? " << S.isHappy(20) << endl;
}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}

