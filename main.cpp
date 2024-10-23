#include <iostream>

template <typename arr_type>
double OutputAndFindTheArithmeticMean(const int size, arr_type arr) {
	double arithmetic_mean{};

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
		arithmetic_mean += arr[i];
	}

	arithmetic_mean /= size;

	std::cout << "\n";

	return arithmetic_mean;
}

int main() {
	const int size = 5;

	int arr1[size] = { 1, 2, 3, 4, 5 };
	double arr2[size] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	float arr3[size] = { 1.2, 2.3, 3.4, 4.5, 5.6 };

	std::cout << OutputAndFindTheArithmeticMean(size, arr1) << "\n";
	std::cout << OutputAndFindTheArithmeticMean(size, arr2) << "\n";
	std::cout << OutputAndFindTheArithmeticMean(size, arr3);

}