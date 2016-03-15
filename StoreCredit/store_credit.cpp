#include <utility>
#include <vector>
#include "store_credit.h"
#include "insertion_sort.h"
#include "insert_descending.h"
using namespace std; 
//use a greedy algorithm to solve the subset sum problem
//sort first, using insertion sort (item price input is likely to be sorted)
//keep subtracting from credit starting with the most expensive item

pair<int, int> StoreCredit(const int credit, const vector<int> item_prices) {
	vector<int> temp = item_prices; 
	InsertionSort(temp, InsertDescending<int>());
	int sum = 0, size = item_prices.size(); 
	for (int i = 0; i < size; i++) {
		for (int j = size - 1; j > i; j--) {
			int first_item = item_prices[i], second_item = item_prices[j];
			if ((first_item + second_item) == credit)
				return pair<int, int>(i, j);
		}
	}
	return pair<int, int>(-1, -1);
}