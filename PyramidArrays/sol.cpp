#include <iostream>
#include<vectors>
#include <string>
#include <cstdlib>


std::vector<std::vector<int>> pyramid(std::size_t n);

int main()
{
    std::size_t n = 2;
    pyramid(2);

    return 0;
}


std::vector<std::vector<int>> pyramid(std::size_t n) {
    std::vector<std::vector<int>> ans;
    for(int i = 0; i <= n; i++ ){
        std::vector<int> sub;
        ans.push_back(sub(1,n));
    }
    //assuming you have a "2D" vector vvi (vector of vector of int's)
    vector< vector<int> >::iterator row;
    vector<int>::iterator col;
    for (row = ans.begin(); row != ans.end(); row++) {
        for (col = row->begin(); col != row->end(); col++) {
            // do stuff ...
            std::cout << *col << std::endl;
        }
    }

}