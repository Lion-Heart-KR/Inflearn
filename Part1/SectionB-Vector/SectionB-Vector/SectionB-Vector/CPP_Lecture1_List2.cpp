#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
	Node() : _next(nullptr), _prev(nullptr), _data(T()){ }

	Node(const T& value) : _next(nullptr), _prev(nullptr), _data(value) { }

public:
	T		_data;
	Node*	_next;
	Node*	_prev;
};

template <typename T>
class Iterator
{
public:
	Iterator() : _node(nullptr) { }
	Iterator(Node<T>* node) : _node(node) { }
	
	//����
	Iterator& operator++() { _node = _node->_next; return *this; }
	Iterator& operator--() { _node = _node->_prev; return *this; }

	//����
	Iterator operator++(int)
	{
		Iterator<T> temp = *this;
		_node = _node->_next;
		return temp;
	}
	Iterator operator--(int)
	{
		Iterator<T> temp = *this;
		_node = _node->_prev;
		return temp;
	}

	//���� ������ ��ȯ���ָ� *it=x;�� �� ���� ���ϰ� �ȴ�.
	//���� ������ ��ȯ���ָ� *it=x;�� �� ���� ������ �ʴ´�.
	T& operator*()
	{
		return _node->_data;
	}

	bool operator==(const Iterator& right) { return _node == right._node; }
	bool operator!=(const Iterator& right) { return _node != right._node; }

public:
	Node<T>* _node;
};

template <typename T>
class List
{
public:
	List() : _size(0) 
	{
		_header = new Node<T>;
		_header->_next = _header;
		_header->_prev = _header;
	}
	~List()
	{
		while (_size > 0)
			pop_back();

		delete _header;
	}

	//�� �ڿ� ���� ����
	//[1] �� [2] �� [3] �� [4] �� _header �� [1] �� ...
	//push_back�� �� �ڿ�(_header �տ�) ���� �����ϴ� ���̴�.

	void push_back(const T& value)
	{
		AddNode(_header, value);
	}

	//[1] �� [2] �� [3] �� [before] �� _header �� [1] �� ...
	//[1] �� [2] �� [3] �� _header �� [1] �� ...
	//��� �տ��ִ� ���� �����ش�.
	void pop_back()
	{
		removeNode(_header->_prev);
	}

	//[1] �� [2] �� [3] �� [before] �� _header �� [1] �� ...
	//[1] �� [2] �� [3] �� [newNode] �� [before] �� _header �� [1] �� ...
	//before �տ� ���ο� ��带 �߰��Ѵ�.
	Node<T>* AddNode(Node<T>* before, const T& value)
	{
		Node<T>* newNode = new Node<T>(value);

		newNode->_next = before;
		newNode->_prev = before->_prev;
		(before->_prev)->_next = newNode;

		//�̰� ���������� �����ؾ��ϴ� ��.
		before->_prev = newNode;

		_size++;

		return newNode;
	}

	Node<T>* removeNode(Node<T>* target)
	{
		Node<T>* prev = target->_prev;
		Node<T>* next = target->_next;

		prev->_next = next;
		next->_prev = prev;

		delete target;
		_size--;

		return next;
	}

	int size() { return _size; }

public:
	typedef Iterator<T> iterator;

	iterator begin() {return iterator(_header->_next);}
	iterator end() {return iterator(_header);}

	iterator insert(iterator it, const T& val)
	{
		/*Node<T>* node = AddNode(it._node, val);
		return iterator(node);*/
		return iterator(AddNode(it._node, val));
	}
	iterator erase(iterator it)
	{
		//Node<T>* node = removeNode(it._node);
		return iterator(removeNode(it._node));
	}


public:
	Node<T>* _header;
	int _size;

};

int main()
{
	List<int> li;
	List<int>::iterator eraseIt;

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			eraseIt = li.insert(li.end(), i);
		}
		else
		{
			li.push_back(i);
		}
	}

	li.pop_back();
	li.erase(eraseIt);


	for (List<int>::iterator it = li.begin(); it != li.end(); ++it)
		cout << *it << endl;

	return 0;
}