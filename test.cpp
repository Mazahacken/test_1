#include<iostream>

template <typename T> T SumTest(T x, T y) {
	T sum = x + y;
	return sum;
}

auto main() -> int {
	int x = 10;
	int y = 5;
	std::cout<<SumTest(x, y);
	std::unique_ptr<int> ptr(new int(54));
	std::unique_ptr<int> ptr2 = std::move(ptr);
}