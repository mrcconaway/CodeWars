#include <iostream>
#include <vector>


using namespace std;
vector<vector<int>> multiplication_table(int n){
	vector<vector<int>> tmp; 
	for(int i = 1; i < n+1 ; i++){
		vector<int> inside;
		for(int j = 1; j < n+1; j++){
			inside.push_back(i*j);
		}
		tmp.push_back(inside);
	}	
	return tmp;
}

int main()
{
	vector<vector<int>> vec = multiplication_table(3);

    // Displaying the 2D vector
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }

	return 0;
}
