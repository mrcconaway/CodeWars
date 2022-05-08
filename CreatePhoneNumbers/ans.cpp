#include <iostream>
#include <string>

using namespace std;

std::string createPhoneNumber(const int arr [10]){
	
	string s = "(";
	int i =0;
	while(i < 10){
		if(i == 3)
			s = s + ")";
		if(i == 6)
			s = s + "-";
		s = s + to_string(arr[i]);
		i++;
	}


	return s;
}


int main()
{
	int in[10];
	for(int i = 0; i < 10; ++i){
		in[i] = i;
	}
	string test = createPhoneNumber(in);
	cout << test << endl;	

	return 0;
}
