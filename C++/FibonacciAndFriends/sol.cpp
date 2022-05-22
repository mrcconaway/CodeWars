#include <iostream>
#include <vector>

using namespace std; 

std::vector<int> xbonacci(std::vector<int> signature, int n);

int main()
{

	vector<int> signature = {0,1};
	vector<int> out = xbonacci(signature, 10);

}



std::vector<int> xbonacci(std::vector<int> signature, int n)	
{
	// vector<int> tmp = signature;
	vector<int> tmp;
	for(int i = 0; i < signature.size(); i++){
		tmp.push_back(signature[i]);
	}
	while(tmp.size() > n){
		tmp.pop_back();
	} 
	for(int i = tmp.size(); i < n; i++){
		int vals = 0;
		for(int j = signature.size(); j > 0; j--){
			vals += tmp[i-j];		
		}	
		tmp.push_back(vals);
	}

	for(int i=0; i < tmp.size(); i++){
		cout << i << " " << tmp[i] << endl;
	}

	return tmp;
}

