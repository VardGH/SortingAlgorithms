#pragma once

void Selection_sort(std::vector<int>& vec, int begin, int end)
{
	int maxID;

	for (int i = begin; i <= end; ++i) {
		maxID = begin;
		for (int j = begin; j <= end; ++j) {
			if (vec[maxID] <= vec[j]) {
				maxID = j;
			}
		}
		std::swap(vec[maxID], vec[end]);
		end--;
	}
}