#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include "insertion_sort.h"
#include "insert_descending.h"
#include "store_credit.h"
using namespace std; 

int main(int argc, char** argv) {

	ifstream infile(argv[1]);
	if (!infile) {
		cout << "could not open " << argv[1] << endl;
		exit(EXIT_FAILURE);
	}
	ofstream outfile(argv[2]);
	if (!outfile) {
		cout << "could not open " << argv[2] << endl;
		exit(EXIT_FAILURE);
	}

	int num_cases, i{ 0 }, price, credit, num_items;
	infile >> num_cases; 
	while (i < num_cases) {
		infile >> credit;
		infile >> num_items;
		vector<int> items; 
		for (int j = 0; j < num_items; j++) {
			infile >> price; 
			items.emplace_back(price);
		}
		pair<int, int> result = StoreCredit(credit, items);
		outfile << "Case #" << i + 1 << ": " << result.first << " " << result.second << endl; 
		i++; 
	}

	system("pause");

	return 0; 
}