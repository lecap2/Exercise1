#ifndef SORT_H  
#define SORT_H

#include <vector>

namespace sortlib {
	struct Int {
		int value;
		int index;
	};

	std::vector<Int> heap_sort(std::vector<int> v);
	std::vector<Int> insertion_sort(std::vector<int> v);
}

#endif