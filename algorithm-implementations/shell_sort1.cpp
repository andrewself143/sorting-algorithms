#include <iostream>
#include <vector>
#include "sorting.h"
using namespace std;

void shell_sort1(std::vector<int>& nums) {
	int size = nums.size();
	for (int gap = size / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < size; i++) {
			int temp = nums[i];
			int j = i;
			while (j >= gap & temp <= nums[j-gap]) {
				nums[j] = nums[j-gap];
				j -= gap;
			}
			nums[j] = temp;
		}
	}
}
