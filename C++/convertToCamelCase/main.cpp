#include <string>
#include <iostream>
std::string to_camel_case(std::string text) {
  // TODO: Your code goes here!
  
  for(int i = 0; i < text.size();++i){
  	if( text[i] == '_' || text[i] == '-' ){
		for(int j = i; j < text.size()-1;++j){
			text[j] = text[j+1];
		}
		text[i] = std::toupper(text[i]);
		text.resize(text.size()-1);
	}	

	}
  
  return text;
}


int main()
{
	std::string t = to_camel_case("test_test");
	std::cout << t << std::endl;
	return 0;
}
