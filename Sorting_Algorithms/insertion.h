#pragma once

void insertion_sort(std::vector<int>& arr)
{
	for (int i = 1; i <arr.size(); ++i) {
		for (int j = i; j > 0; --j) {
			if (arr[j - 1] > arr[j]) {
				std::swap(arr[j - 1], arr[j]);
			}
		}
	}
}