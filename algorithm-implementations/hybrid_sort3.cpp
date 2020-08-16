#include <iostream>
#include <vector>
#include "sorting.h"
#include <math.h>

using namespace std;

void merge3(std::vector<int>& nums, int left, int middle, int right) {
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

void insertion_sort3(std::vector<int>& nums) {
	//cout << "insertion sort \n";
	/*for(int x: nums)
		cout << x << " ";*/
	int size = nums.size();
	for(int i = 1; i < size; i++) {
		int temp = nums[i];

		int j = i;
		while (j > 0 & nums[j-1] > temp) {
			nums[j] = nums[j-1];
			j--;
		}
		nums[j] = temp;
	}

}

void insertion_sort_bounds3(std::vector<int>& nums, int left, int right) {
	vector<int> temp;

	for (int i = left; i < right; i++) {
		temp.push_back(nums[i]);
	}

	insertion_sort3(temp);

	for (int i = left; i < right; i++) {
		nums[i] = temp[i-left];
	}
}

void hybrid_merge3(std::vector<int>& nums, int left, int right, int length) {
	int size = right - left;
	if (size > pow(length, 1.0 / 4.0)) {
		int middle = (left + right) / 2;
		hybrid_merge3(nums, left, middle, length);
		hybrid_merge3(nums, middle+1, right, length);
		merge3(nums, left, middle, right);
	} else {
		insertion_sort_bounds3(nums, left, right+1);
	}
}

void hybrid_sort3(std::vector<int>& nums) {
	int n = nums.size() - 1;
	hybrid_merge3(nums, 0 , n, n);
}
