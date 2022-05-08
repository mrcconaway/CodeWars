#include <iostream>
using namespace std;


bool isTriangle(int a , int b, int c)
{

	double da = a, db = b, dc = c;

	bool flag = false;
	if(da+db > dc)
		if(da+dc > db)
			if(db+dc > da)
				flag = true;

	if( a == b && b == c && a != 0)
		flag = true;
	return flag;
}

int main()
{
	int a = 2147483647;
	int b = 2147483647;
	int c = 2147483647;

	bool test = isTriangle(a,a,a);
	cout << std::boolalpha << test << endl;

}
