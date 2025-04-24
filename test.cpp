#include<iostream>

template <typename T> T SumTest(T x, T y) {
	T sum = x + y;
	return sum;
}

auto main() -> int {

	std::unique_ptr<int> ptr(new int(54));
	std::unique_ptr<int> ptr2 = std::move(ptr);
}