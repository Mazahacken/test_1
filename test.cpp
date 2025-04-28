#include<iostream>
#include<memoory>

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
	std::shared_ptr<char> sharptr = std::make_shared<char>('H');
	std::shared_ptr<int> sharptr2(new int(30));
}