#pragma once

#include <vector>
#include <algorithm>

#include "common.h"
#include "bubble.h"
#include "selection.h"
#include "insertion.h"
#include "quick.h"

struct SortManager
{
public:
	void sort(std::vector<int>& arr, SortingAlgorithm algo)
	{

		switch (algo)
		{
		case SortingAlgorithm::BUBBLE:
			bubble_sort(arr,0,5);
			break;
		case SortingAlgorithm::INSERTION:
			insertion_sort(arr,0,5);
			break;
		case SortingAlgorithm::QUICK:
				quick_Sort(arr, 0, arr.size() - 1);
				break;
		case SortingAlgorithm::SELECTION:
			Selection_sort(arr, 0, arr.size() - 1);
			break;
		case SortingAlgorithm::UNKNOWN:
			std::sort(arr.begin(), arr.end());
		}
	}

};