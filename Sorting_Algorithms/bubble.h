#pragma once

void bubble_sort(std::vector<int>& arr, int begin, int end)
{
	int k = end;
	for (int i = begin; i <= end; ++i) {
		for (int j = begin + 1; j <= k; ++j) {
			if (arr[j] < arr[j - 1]) {
				std::swap(arr[j], arr[j - 1]);
			}
		}
		k--;
	}
}
