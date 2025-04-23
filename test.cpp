#include<iostream>

auto main() -> int {

	std::unique_ptr<int> ptr(new int(54));
	std::unique_ptr<int> ptr2 = std::move(ptr);
}