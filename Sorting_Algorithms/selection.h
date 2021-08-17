#pragma once

void Selection_sort(std::vector<int>& vec)
{
	int maxID;

	for (int i = 0; i < vec.size() - 1; ++i) {
		maxID = 0;
		for (int j = 0; j < vec.size() - i; ++j) {
			if (vec[maxID] <= vec[j]) {
				maxID = j;
			}
		}
		std::swap(vec[maxID], vec[vec.size() - i - 1]);
	}
}