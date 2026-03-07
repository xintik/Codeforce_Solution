#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <string>
#include <deque>

// 50 - 10 , 10 , 15, 15 profit

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    int n, q;
    std::cin >> n >> q;
    std::vector<std::pair<int,int>> a (n, {0, 0});
    
    long long sum = 0;
    int set_all_val = 0;
    int set_all_id = -1;
    for (int i = 0; i < n; ++i)
    {
      int x; std::cin >>x;
      a[i].first = x;
      sum += x;
    }

    for (int i = 1; i <= q; ++i)
    {
      int v; std::cin >> v;
      if (v == 1)
      {
        int idx; int val; std::cin >> idx >> val;
        --idx;
        sum += val;
        if (a[idx].second > set_all_id)
        {
          sum -= a[idx].first;
        }
        else
        {
          sum -= set_all_val;
        }

        a[idx] = {val, i};
      }
      else
      {
        std::cin >> set_all_val;
        sum = (long long) n * (long long) set_all_val;
        set_all_id = i;
      }

      std::cout << sum << std::endl;
    }

}