#include <iostream>
#include <sstream>
#include <utility>
#include <vector>
#include "insertion_sort.h"
#include "insert_descending.h"
#include "store_credit.h"
using namespace std; 

int main(int argv, char* argc) {
	int num_cases, i{ 0 };
	cin >> num_cases; 
	while (i < num_cases) {
		int k, credit; 
		cin >> credit;
		string line;
		getline(cin, line);
		istringstream iss; 
		vector<int> items; 
		while (iss >> k) {
			items.emplace_back(k);
		}
		pair<int, int> result = StoreCredit(credit, items);
		cout << "Case #" << i + 1 << ": " << result.first << " " << result.second << endl; 
	}

	system("pause");

	return 0; 
}