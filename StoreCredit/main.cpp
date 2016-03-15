#include <iostream>
#include <utility>
#include <vector>
#include "insertion_sort.h"
#include "insert_descending.h"
#include "store_credit.h"
using namespace std; 
//main program will test the store credit function using the items vector and a user entered value for credit
int main() {
	vector<int> items = { 6, 2, 8, 3, 9, 6, 7 };
	int credit{ 0 };
	cout << "Please enter your store credit: "; 
	cin >> credit; 
	pair<int, int> my_pair = StoreCredit(credit, items);
	cout << "According to the items price list, your credit add up to items "; 
	cout << (my_pair.first + 1) << " and " << (my_pair.second + 1) << endl;
	cout << items[my_pair.first] << " + " << items[my_pair.second] << " = " << credit << endl; 

	system("pause");

	return 0; 
}