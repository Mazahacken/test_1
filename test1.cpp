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
	Int x(5);
	std::cout<<x.getDate()<<std::endl;
	std::cout << "Test/n"<<std::endl;
}