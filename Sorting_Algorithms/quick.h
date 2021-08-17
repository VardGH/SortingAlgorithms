#pragma once

int partition(std::vector<int>& arr, int left, int right)
{
	int pivot = arr[left];
	int i = left;
	int j = right + 1;

	while (true) {
		while (arr[++i] < pivot) {
			if (i == right) break;
		}

		while (arr[--j] > pivot) {
			//if (j == left) break;
		}

		if (i >= j) break;

		std::swap(arr[i], arr[j]);
	}

	std::swap(arr[left], arr[j]);

	return j;
}

void quick_Sort(std::vector<int>& arr, int l, int r)
{
	if (l < r) {
		int _pivot = partition(arr, l, r);

		quick_Sort(arr, l, _pivot - 1);
		quick_Sort(arr, _pivot + 1, r);
	}
}

