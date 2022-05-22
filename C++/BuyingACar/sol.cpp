#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


class BuyCar
{
public:
	BuyCar(){
	
		vector<int> ans1 = nbMonths(2000, 8000, 1000, 1.5);
	}
	vector<int> ans1;



public:
	static std::vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth);

};

std::vector<int> BuyCar::nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth)
{

	cout << "startPriceNew " << startPriceNew << endl;
	cout << "startPriceOld " << startPriceOld << endl;
	cout << "percentLossByMonth " << percentLossByMonth << endl;
	cout << "savingsPerMonth " << savingperMonth << "\n\n" << endl;

	// startPriceOld - start at this value
	// startPriceNew - need to reach this value
	// savingPerMonth - How much we save per month
	// percenyLossByMonth - how much we lose per month
	std::vector<int> tmp;
	int month = 1; // how many months passed
	float moneySaved = 0.0; 
	float old = startPriceOld;
	float ncar = startPriceNew;
	float percentDecrease = percentLossByMonth;

	while( ( moneySaved + old ) < ncar){
		if(month % 2 == 0){
			percentDecrease += 0.5;
		}
		moneySaved += savingperMonth;
		old -= old * percentDecrease / 100;
		ncar -= ncar * percentDecrease / 100;
		


		cout << "end of month " << month << ": percent_loss " << percentDecrease << " available " << (moneySaved + old) - ncar << endl;


		month++;
	}
	moneySaved += old;
	moneySaved -= ncar;
	int saved = round(moneySaved);
	month -=1;
	tmp.push_back(month);
	tmp.push_back(saved);
	cout << "month " << month << "\tsaved " << saved << endl;

	return tmp; // return in the form [months, leftover savings]
}

int main()
{
	BuyCar t;
	return 0;
}
