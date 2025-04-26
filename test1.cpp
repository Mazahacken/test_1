#include<iostream>
class Int {
protected:
	int _date;
public:
	Int(int date) : _date(date) { std::cout << "Construct" << std::endl; }
	~Int() { std::cout << "Destruct" << std::endl; }
	int getDate() const { return _date; };
	void setDate(int x) { this->_date = x; };

};
auto main() -> int {

	std::cout << "Test/n"<<std::endl;
}