#include <iostream>
#include <vector>
#include "quick.h"
#include "bubble.h"
#include "insertion.h"
#include "selection.h"

#include "SortManager.h"

void print(std::vector<int>& arr)
{
	for (auto elem : arr) {
		std::cout << elem << " ";
	}
	std::cout << "\n";
}

int main()
{
	SortManager ob;

	std::vector<int> myvector(20);

	srand(time(NULL));

	for (auto& elem : myvector) {
		elem = rand() % 50 - 10;
	}

	std::cout << "Unsorted vector: ";
	print(myvector);

	std::cout << "\nQuick Sort:\t";
	ob.sort(myvector, SortingAlgorithm::QUICK);
	print(myvector);

	std::cout << "Bubble Sort:\t";
	ob.sort(myvector, SortingAlgorithm::BUBBLE);
	print(myvector);

	std::cout << "Insertion Sort: ";
	ob.sort(myvector, SortingAlgorithm::INSERTION);
	print(myvector);

	std::cout << "Selection sort: ";
	ob.sort(myvector, SortingAlgorithm::SELECTION);
	print(myvector);

	return 0;
}

