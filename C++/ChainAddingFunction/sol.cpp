#include <iostream>

using namespace std;



// #include <iostream>
#include <string>

// struct MyClass {
//   std::string value = "MyClass";

//   MyClass operator+(int x) {
//     return {value + " + " + std::to_string(x)};
//   }

//   operator std::string() {
//     return value;
//   }
// };

// int main() {
//   MyClass myObject;

//   std::cout << std::string(myObject + 1 + 2 + 3) << '\n';
// }


struct sol{
	int value = 0;
	sol operator+(int x){
		return {value + x};
	}



};
	auto add(int n){
		return (value+n); 
	}
int main()
{
	sol test;
	sol::add(5);
	return 0;
}
