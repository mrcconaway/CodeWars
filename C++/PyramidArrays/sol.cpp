#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>


std::vector<std::vector<int>> pyramid(std::size_t n);

int main()
{
    std::size_t n = 2;
    std::vector<std::vector<int>> fin = pyramid(2);

    return 0;
}


std::vector<std::vector<int>> pyramid(std::size_t n) {
    std::vector<std::vector<int>> ans;
    for(int i = 1; i <= n; i++ ){
        std::vector<int> sub(i,1);
        ans.push_back(sub);
    }
  return ans;
}