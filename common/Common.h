#ifndef PROJECT_EULER_COMMON_INC_COMMON_H_
#define PROJECT_EULER_COMMON_INC_COMMON_H_

#include <vector>
#include <iostream>

namespace PROJECT_EULER {
	namespace COMMON {
		template <typename T>
		class Common {
		public:
			Common();
			~Common();

			void PrintVector(const std::vector<T>& V);
		};
	};
};

namespace PC = PROJECT_EULER::COMMON;

template <typename T>
PC::Common<T>::Common() {}

template <typename T>
PC::Common<T>::~Common() {}

template <typename T>
void PC::Common<T>::PrintVector(const std::vector<T>& V) {
	for (std::size_t i = 0; i < V.size(); ++i)
		std::cout << V[i] << " ";
	std::cout << std::endl;
}

#endif // PROJECT_EULER_COMMON_INC_COMMON_H_