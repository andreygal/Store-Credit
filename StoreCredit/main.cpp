#include <iostream>
#include <utility>
#include <vector>
#include "insertion_sort.h"
#include "insert_descending.h"
#include "store_credit.h"
using namespace std; 
//main program will test the store credit function using the items vector and a user entered value for credit
int main() {
	int num_cases, i{ 0 };
	cin >> num_cases; 
	while (i < num_cases) {
		int k, credit; 
		cin >> credit;
		vector<int> items; 
		while (cin >> k) {
			items.emplace_back(k);
		}
		pair<int, int> result = StoreCredit(credit, items);
		cout << "Case #" << i + 1 << ": " << result.first << " " << result.second << endl; 
	}

	system("pause");

	return 0; 
}