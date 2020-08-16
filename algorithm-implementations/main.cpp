#include "sorting.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {

	cout << "Testing insertion sort: \n";

	vector<int> vec1({1, 8, 4, 2, 7, 67, 9, 1004, 10, 0, 4, 3, 1});

	for(int x: vec1)
		cout << x << " ";

	insertion_sort(vec1);
	cout << "\noutput: \n";
	for(int x: vec1)
		cout << x << " ";


	cout << "\nTesting merge sort: \n";

	vector<int> vec2({14, 10, 9, 11, 8, 12, 7, 4, 100});
	for(int x: vec2)
		cout << x << " ";

	merge_sort(vec2);

	cout << "\noutput: \n";

	for(int x: vec2)
		cout << x << " ";


	cout << "\nTesting shell sort1: \n";

	vector<int> vec3({0, 14, 145, 2, 8, 1267, 7, 4, 100});
	for(int x: vec3)
		cout << x << " ";

	shell_sort1(vec3);

	cout << "\noutput: \n";

	for(int x: vec3)
		cout << x << " ";


	cout << "\nTesting shell sort2: \n";

	vector<int> vec4({1, 143, 15, 42, 8, 1267, 7, 4, 100});
	for(int x: vec4)
		cout << x << " ";

	shell_sort2(vec4);

	cout << "\noutput: \n";

	for(int x: vec4)
		cout << x << " ";



	cout << "\nTesting shell sort3: \n";

	vector<int> vec5({11, 43, 315, 24, 74, 17, 7, 4, 10});
	for(int x: vec5)
		cout << x << " ";

	shell_sort3(vec5);

	cout << "\noutput: \n";

	for(int x: vec5)
		cout << x << " ";



	cout << "\nTesting shell sort4: \n";

	vector<int> vec6({12, 53, 375, 4, 72, 13, 700, 4, 8});
	for(int x: vec6)
		cout << x << " ";

	shell_sort4(vec6);

	cout << "\noutput: \n";

	for(int x: vec6)
		cout << x << " ";

	cout << "\nTesting hybrid sort1: \n";

	vector<int> vec7({2, 5, 75, 44, 7, 133, 706, 4, 8});
	for(int x: vec7)
		cout << x << " ";

	hybrid_sort1(vec7);

	cout << "\noutput: \n";

	for(int x: vec7)
		cout << x << " ";

	cout << "\nTesting hybrid sort2: \n";

	vector<int> vec8({2, 7, 75, 448, 7, 13, 706, 47, 8});
	for(int x: vec8)
		cout << x << " ";

	hybrid_sort1(vec8);

	cout << "\noutput: \n";

	for(int x: vec8)
		cout << x << " ";

	cout << "\nTesting hybrid sort3: \n";

	vector<int> vec9({2, 51, 75, 44, 7, 1353, 76, 40, 8});
	for(int x: vec9)
		cout << x << " ";

	hybrid_sort1(vec9);

	cout << "\noutput: \n";

	for(int x: vec9)
		cout << x << " ";

	cout << "END \n";
	return 0;
}
