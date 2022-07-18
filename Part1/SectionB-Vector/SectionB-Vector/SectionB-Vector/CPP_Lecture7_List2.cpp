//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Node
//{
//public:
//	Node() : _next(nullptr), _prev(nullptr), _data(T()) { }
//	Node(const T& value) : _next(nullptr), _prev(nullptr), _data(value) { }
//
//public:
//	Node* _next;
//	Node* _prev;
//	T _data;
//};
//
//template<typename T>
//class Iterator
//{
//public:
//	Iterator() : _node(nullptr) { }
//	Iterator(Node<T>* node) : _node(node) { }
//
//	//전위 연산
//	Iterator& operator++()
//	{
//		_node = _node->_next;
//		return *this;
//	}
//	Iterator& operator--()
//	{
//		_node = _node->_prev;
//		return *this;
//	}
//
//	//후위 연산
//	Iterator operator++(int)
//	{
//		Iterator<T> temp = *this;
//		_node = _node->_next;
//		return temp;
//	}
//	Iterator operator--(int)
//	{
//		Iterator<T> temp = *this;
//		_node = _node->_prev;
//		return temp;
//	}
//
//	T& operator*()
//	{
//		return _node->_data;
//	}
//
//	bool operator==(const Iterator& right) { return _node == right._node; }
//	bool operator!=(const Iterator& right) { return _node != right._node; }
//
//public:
//	Node<T>* _node;
//};
//template <typename T>
//class List 
//{
//public:
//	List() {
//		_header = new Node<T>;
//		_header->_next = _header;
//		_header->_prev = _header;
//		_size = 0;
//	}
//
//	~List() {
//		while (_size > 0)
//			pop_back();
//
//		delete _header;
//	}
//
//	void push_back(const T& val)
//	{
//		AddNode(_header, val);
//	}
//
//	void push_front(const T& val)
//	{
//		AddNode(_header->_next, val);
//	}
//
//	void pop_back()
//	{
//		removeNode(_header->_prev);
//	}
//
//	void pop_front()
//	{
//		removeNode(_header->_next);
//	}
//
//	//[1] ↔ [2] ↔ [3] ↔ [before] ↔ _header ↔ [1] ↔ ...
//	//[1] ↔ [2] ↔ [3] ↔ [newNode] ↔ [before] ↔ _header ↔ [1] ↔ ...
//	//before 앞에 새로운 노드를 추가한다.
//	Node<T>* AddNode(Node<T>* before, const T& val)
//	{
//		Node<T>* newNode = new Node<T>;
//		newNode->_data = val;
//
//		newNode->_next = before;
//		newNode->_prev = before->_prev;
//		(before->_prev)->_next = newNode;
//		before->_prev = newNode;
//		_size++;
//
//		return newNode;
//	}
//
//	//삭제한 노드의 다음 노드 주소를 리턴해준다.
//	Node<T>* removeNode(Node<T>* target)
//	{
//		Node<T>* prev = target->_prev;
//		Node<T>* next = target->_next;
//
//		prev->_next = next;
//		next->_prev = prev;
//
//		delete target;
//		_size--;
//
//		return next;
//	}
//
//public:
//	typedef Iterator<T> iterator;
//	iterator begin() { return _header->_next; }
//	iterator end() { return _header; }
//
//	iterator insert(iterator _where, const T& val)
//	{
//		Node<T>* res = AddNode(_where._node, val);
//		return iterator(res);
//	}
//
//	iterator erase(iterator _where)
//	{
//		Node<T>* res = removeNode(_where._node);
//		return iterator(res);
//	}
//
//
//	int size() { return _size; }
//public:
//	Node<T>* _header;
//	int _size;
//};
//
//int main()
//{
//	List<int> li;
//	List<int>::iterator eraseIt;
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			eraseIt = li.insert(li.end(), i);
//		}
//		else
//		{
//			li.push_back(i);
//		}
//	}
//
//	li.pop_back();
//	li.erase(eraseIt);
//
//
//	for (List<int>::iterator it = li.begin(); it != li.end(); ++it)
//		cout << *it << endl;
//
//	li.pop_back();
//
//	cout << "****************************************" << endl;
//	for (List<int>::iterator it = li.begin(); it != li.end(); ++it)
//		cout << *it << endl;
//
//	cout << "****************************************" << endl;
//	li.pop_front();
//
//	for (List<int>::iterator it = li.begin(); it != li.end(); ++it)
//		cout << *it << endl;
//
//	cout << "****************************************" << endl;
//	li.push_back(33);
//	for (List<int>::iterator it = li.begin(); it != li.end(); ++it)
//		cout << *it << endl;
//
//	cout << "****************************************" << endl;
//	li.push_front(93);
//	for (List<int>::iterator it = li.begin(); it != li.end(); ++it)
//		cout << *it << endl;
//
//	return 0;
//}
