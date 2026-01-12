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

class Node {
public:
	Node(int date);
	int m_date;
	Node* m_next;
};

class List
{
public:
	List() : m_head(nullptr) {}
	void push_back(int date);
	void push_front(int date);
private:
	Node* m_head;
};

void List::push_back(int date)
{
	Node* node = new Node(date);
	if (m_head == nullptr)
	{
		m_head = node;
		return;
	}
	Node* last = m_head;
	while (last->m_next != nullptr)
	{
		last = last->m_next;
	}
	last->m_next = node;
	return;
}

void List::push_front(int date)
{
	Node* node = new Node(date);
	node->m_next = m_head;
	m_head = node;
}
class Queue
{
private:
	Node* m_front;
	Node* m_rear;
public:
	Queue() : m_front(nullptr), m_rear(nullptr) {}
	void enQueue(int x);
	void deQueue();
	int peek();
};

void Queue::enQueue(int x)
{
	Node* temp = new Node(x);
	if (m_rear == nullptr)
	{
		m_front = m_rear = temp;
		return;
	}
	m_rear->m_next = temp;
	m_rear = temp;
}

void Queue::deQueue()
{
	if (m_front == nullptr)
		return;
	Node* temp = m_front;
	m_front = m_front->m_next;
	if (m_front == nullptr)
		m_rear = nullptr;
	delete temp;
}

int Queue::peek()
{
	if (m_front == nullptr)
		return 0;
	return m_front->m_date;
}
int search(int arr[], int size, int x)
{
	int i;
	for (i = 0; i < size; i++)
		if (arr[i] == x)
			return i;
	return -1;
}
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}


auto main() -> int {
	Int x(5);
	std::cout << x.getDate() << std::endl;
	x.setDate(9);
	std::cout << x.getDate() << std::endl;
	std::cout << "Test/n"<<std::endl;
}