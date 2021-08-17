#pragma once

void insertion_sort(std::vector<int>& arr, int begin, int end)
{
	for (int i = begin + 1; i <= end; ++i) {
		for (int j = i; j > begin; --j) {
			if (arr[j - 1] > arr[j]) {
				std::swap(arr[j - 1], arr[j]);
			}
		}
	}
}