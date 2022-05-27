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

	static vector<int> parserFunc(long long ln){
		vector<int> tmp;
		std::string parser = std::to_string(ln);
		int coversionFactor = 48;
		for(auto i = 0; i < parser.size(); ++i){
			tmp.push_back(parser[i] - coversionFactor);
		}
		return tmp;
	}

public:
    static long long thirt(long long n);
};

long long Thirteen::thirt(long long n)
{
	long long stat = 0;
	vector<int> vint;
	vector<int> modulo = {1 , 10, 9, 12, 3, 4}; // powers of 10 mod 13
	long long tmp; 
	vint = parserFunc(n);
	do{
		// need to loop until get a repeated value
		stat = tmp;
		tmp = 0;
		// cout << vint.size() << " " << parser.size() << " " << modulo.size() << endl;
		for(int i=0; i < vint.size(); i++){
			tmp += vint[vint.size()-i-1] * modulo[ i % modulo.size()];
			cout << i << " " << tmp << " " << vint[i] << " " << modulo[ i % modulo.size()] << endl;
			std::string trsh;
			std::getline(cin, trsh);
		}
		vint = parserFunc(tmp);
		cout << tmp << endl;

	}while(stat != tmp );

	return stat;
}


int main()
{
	Thirteen t;
	return 0;
}
