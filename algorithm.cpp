#include "header.h"

void majorityElement(){
	int size;
	std::cout << "Enter array size: ";
	std::cin >> size;

	int* arr = new int[size];
	std::cout << "Enter " << size << " elements of array" << std::endl;

	for (int i = 0; i < size; ++i) {
		std::cout << "Element " << i + 1 << ": ";
		std::cin >> arr[i];
	}

	std::sort(arr, arr + size);


	int curlen = 1;
	int maxcurlen = 1;
	int maxarr = 0;

	for (int i = 0; i < size; ++i) {
		if (i < size - 1 && arr[i] == arr[i + 1]) {
			curlen++;
			if (curlen > maxcurlen) {
				maxcurlen = curlen;
				maxarr = arr[i];

			}
		}
		else {
			curlen = 1;
		}
	}
	delete[] arr;
	std::cout << maxcurlen<< " times the most common element occurs at all" << std::endl;
	std::cout << maxarr<<" is the most common element";

}





int minimumDifference(int* nums, int n, int k) {
	std::sort(nums, nums + n);
	int ans = nums[k - 1] - nums[0];
	for (int i = 1; i <= n - k; ++i) {
		ans = std::min(ans, nums[i + k - 1] - nums[i]);
	}
	return ans;
}

void minimumDifference() {
	
	int n, k;
	std::cout << "Enter array size: ";
	std::cin >> n;
	std::cout << "Enter " << n << " elements of array" << std::endl;

	int* nums = new int[n];
	for (int i = 0; i < n; ++i) {
		std::cout << "Element " << i + 1 << ": ";
		std::cin >> nums[i];
	}
	std::cout << "Enter value of k: ";
	std::cin >> k;

	std::cout << "Minimum difference: " << minimumDifference(nums, n, k) << std::endl;


	delete[] nums;


}