#include <iostream>
#include <vector>
#include "sorting.h"
using namespace std;

void merge(std::vector<int>& nums, int left, int middle, int right) {
	vector<int> temp_left;
	vector<int> temp_right;
	//cout << "Inside merge\n";
	int left_size = middle - left + 1;
	int right_size = right - middle;

	for(int i = 0; i < left_size; i++) {
		temp_left.push_back(nums[left+i]);
	}

	for(int j = 0; j < right_size; j++) {
		temp_right.push_back(nums[middle+1+j]);
	}

	int i = 0;
	int j = 0;
	int k = left;

	while (i < left_size && j < right_size) {
		if (temp_left[i] <= temp_right[j]) {
			nums[k] = temp_left[i];
			i++;
		} else {
			nums[k] = temp_right[j];
			j++;
		}
		k++;
	}


	while(i < left_size) {
		nums[k] = temp_left[i];
		k++;
		i++;
	}
	while(j < right_size) {
		nums[k] = temp_right[j];
		k++;
		j++;
	}
}

void run_merge(std::vector<int>& nums, int left, int right) {
	//cout << "Inside run merge \n" << "left: " << left << "\nright: " << right << "\n";

	/*if (right == 3 && left == 3) {
		return;
	}*/

	if (right > left) {
		int middle = (left + right) / 2;
		run_merge(nums, left, middle);
		run_merge(nums, middle+1, right);
		merge(nums, left, middle, right);
	}
}

void merge_sort(std::vector<int>& nums) {
	//cout << "Inside merge sort \n";
	int n = nums.size() - 1;
	run_merge(nums, 0 , n);
}
