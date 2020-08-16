#include <iostream>
#include "sorting.h"
#include <vector>
using namespace std;

void insertion_sort(std::vector<int>& nums) {
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

/*int main() {
	//vector<int> vect(3,10);
	vector<int> vect({1,2,3,4});
	insertion_sort(vect);

	for(int x: vect)
		cout << x << " ";

	cout << "test\n";
}*/
