#include<iostream>
class Int {
protected:
	int _date;
public:
	Int(int date) : _date(date) { std::cout << "Construct" << std::endl; }
};
auto main() -> int {

	std::cout << "Test/n"<<std::endl;
}