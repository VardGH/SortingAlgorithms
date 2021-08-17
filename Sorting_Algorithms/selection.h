#pragma once

void Selection_sort(std::vector<int>& vec, int begin, int end)
{
	int maxID;
	int k = end;

	for (int i = begin; i < end; ++i) {
		maxID = begin;
		for (int j = begin; j <= k; ++j) {
			if (vec[maxID] <= vec[j]) {
				maxID = j;
			}
		}
		std::swap(vec[maxID], vec[k]);
		k--;
	}
}