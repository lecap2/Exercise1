#include "sort.h"

std::vector<sortlib::Int> sortlib::insertion_sort(std::vector<int> v1) {
	std::vector<sortlib::Int> v3;
	for (int i = 0; i < v1.size(); i++) {
		sortlib::Int integer;
		integer.value = v1[i];
		integer.index = i;
		v3.push_back(integer);
	}
    for (int i = 1; i < v3.size(); i++) {
		sortlib::Int current = v3[i];
		int j = i - 1;
		
		while ((j >= 0) && (v3[j].value > current.value)) {
			v3[j + 1] = v3[j];
			j--;
		}
		
		v3[j + 1] = current;
	}
	return v3;
}

void heapify(std::vector<sortlib::Int> &arr, int n, int i) {
   	sortlib::Int temp;
	int largest = i;
	int l = 2*i + 1;
	int r = 2*i + 2;

	if (l < n && arr[l].value > arr[largest].value)
	 	largest = l;

	if (r < n && arr[r].value > arr[largest].value)
	 	largest = r;

	if (largest != i) {
	   	temp = arr[i];
	   	arr[i] = arr[largest];
	   	arr[largest] = temp;
	    heapify(arr, n, largest);
	}
}

std::vector<sortlib::Int> sortlib::heap_sort(std::vector<int> v1) {
	sortlib::Int temp;
	std::vector<Int> v3;
	for (int i = 0; i < v1.size(); i++) {
		sortlib::Int integer;
		integer.value = v1[i];
		integer.index = i;
		v3.push_back(integer);
	}
	int n = v3.size();
    for (int i = n / 2 - 1; i >= 0; i--)
     	heapify(v3, n, i);

    for (int i = n - 1; i >= 0; i--) {
		temp = v3[i];
	   	v3[i] = v3[0];
	   	v3[0] = temp;
		heapify(v3, i, 0);
    }
	return v3;
}
