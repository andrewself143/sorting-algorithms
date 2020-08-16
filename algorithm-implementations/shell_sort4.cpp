#include <iostream>
#include <vector>
#include "sorting.h"
using namespace std;

void shell_sort4(std::vector<int>& nums) {
	vector<int> list({1, 8, 23, 77, 281, 1073, 4193, 16577, 65921, 262913, 1050113, 4197377, 16783361, 67121153, 268460033, 1073790977});
	int size = nums.size();
	int n=0;
	for(int i = 0; list[i] <  size; i++) {
		n=i;
	}

	while (n >= 0) {
		int gap = list[n];
		for(int i = gap; i < size; i++) {
			//cout << "gap: " << gap;
			int temp = nums[i];
			int j = i;
			while (j >= gap & temp < nums[j-gap]) {
				nums[j] = nums[j-gap];
				j -= gap;
			}
			nums[j] = temp;
		}
		n--;
	}
}
