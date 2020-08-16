#include <iostream>
#include <vector>
#include "sorting.h"
#include <math.h>
using namespace std;

void shell_sort2(std::vector<int>& nums) {
	int size = nums.size();
	for (int n = size; n > 1; n--) {
		int gap = pow(2, log2(n)) - 1;
		//cout << "\nouter" << "\nn: " << n << "\ngap: " << gap;
		for (int i = gap; i < size; i++) {
			//cout << "\n	middle i: " << i;
			int temp = nums[i];
			int j = i;
			while (j >= gap & temp <= nums[j-gap]) {
				//cout << "\n		inner j: " << j;
				//cout << "\n		gap: " << gap;
				nums[j] = nums[j-gap];
				j -= gap;
			}
			nums[j] = temp;
		}
	}
}
