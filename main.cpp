#include <iostream>
#include "sort.h"

int main(int argc, char* argv[]) {

	std::vector<int> v1;
	for (unsigned int i = 1; i < argc; i++) {
		int number = atof(argv[i]);
		v1.push_back(number);
	}
	std::vector<sortlib::Int> v2 = sortlib::insertion_sort(v1);
	std::vector<sortlib::Int> v3 = sortlib::heap_sort(v1);

	std::cout << "Insertion sort" << std::endl << std::endl;

	std::cout << "Initial vector: ";
	for (unsigned int i = 0; i < v1.size(); i++) {
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl << "Sorted vector: ";
	for (unsigned int i = 0; i < v2.size(); i++) {
		std::cout << v2[i].value << " ";
	}
	std::cout << std::endl << "With indexes: ";
	for (unsigned int i = 0; i < v2.size(); i++) {
		std::cout << v2[i].index << " ";
	}
	std::cout << std::endl << std::endl << std::endl;


	std::cout << "Heap sort" << std::endl << std::endl;

	std::cout << "Initial vector: ";
	for (unsigned int i = 0; i < v1.size(); i++) {
		std::cout << v1[i] << " ";
	}
	std::cout << std::endl << "Sorted vector: ";
	for (unsigned int i = 0; i < v3.size(); i++) {
		std::cout << v3[i].value << " ";
	}
	std::cout << std::endl << "With indexes: ";
	for (unsigned int i = 0; i < v3.size(); i++) {
		std::cout << v3[i].index << " ";
	}
	std::cout << std::endl;
}