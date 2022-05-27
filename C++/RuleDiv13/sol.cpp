#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Thirteen
{
public:
	Thirteen(){
		ans = thirt(1234567);
	}
	long long ans;

public:
    static long long thirt(long long n);
};

long long Thirteen::thirt(long long n)
{
	long long stat = 0;
	std::string parser = std::to_string(n);
	vector<int> vint;

	int coversionFactor = 48;
	vector<int> modulo = {1 , 10, 9, 12, 3, 4}; // powers of 10 mod 13

	for(auto i = 0; i < parser.size(); ++i){
		vint.push_back(parser[i] - coversionFactor);
	}

	long long tmp = 0; 
	do{
		// need to loop until get a repeated value


	}while(stat != tmp )

	return stat;
}


int main()
{
	Thirteen t;
	return 0;
}
