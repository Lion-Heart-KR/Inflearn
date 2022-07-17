//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Iterator
//{
//public:
//	Iterator() : _ptr(nullptr) { }
//	Iterator(T* ptr) : _ptr(ptr) { _ptr = ptr; }
//
//	//전위연산
//	Iterator& operator++()
//	{
//		_ptr++;
//		return *this;
//	}
//	Iterator& operator--()
//	{
//		_ptr--;
//		return *this;
//	}
//	//후위 연산
//	Iterator operator++(int)
//	{
//		Iterator temp = *this;
//		_ptr++;
//		return temp;
//	}
//	Iterator operator--(int)
//	{
//		Iterator temp = *this;
//		_ptr++;
//		return temp;
//	}
//
//	//it = it+2;같은거 나오면 사용되는데..
//	//참조형을 반환하면... 어떤일이 생기지?
//	Iterator operator+(const int count)
//	{
//		Iterator temp = *this;
//		temp._ptr += count;
//		return temp;
//	}
//	Iterator operator-(const int count)
//	{
//		Iterator temp = *this;
//		temp._ptr -= count;
//		return temp;
//	}
//	bool operator==(const Iterator& right) { return _ptr == right._ptr; }
//	bool operator!=(const Iterator& right) { return _ptr != right._ptr; }
//
//	T& operator*() { return *_ptr; }
//
//
//private:
//	T* _ptr;
//};
//
//template <typename T>
//class Vector
//{
//public:
//	Vector() : _data(nullptr), _size(0), _capacity(0) { }
//	Vector(int size)
//	{
//		_size = size;
//		_capacity = size;
//		_data = new T[_size];
//	}
//	~Vector() {
//		if (_data != nullptr)
//			delete _data;
//	}
//
//	T& operator[](const int pos)
//	{
//		return _data[pos];
//	}
//
//	void reserve(int size) {
//		_capacity = size;
//
//		//새로 공간을 할당하고
//		T* newData = new T[_capacity];
//
//		//복사
//		for (int i = 0; i < _size; i++)
//			newData[i] = _data[i];
//
//		_data = newData;
//
//	}
//
//	void push_back(const T& val) {
//		if (_size == _capacity)
//		{
//			int newCapa = _capacity * 1.5;
//			if (newCapa == _capacity)
//			{
//				newCapa++;
//			}
//
//			reserve(newCapa);
//			_capacity = newCapa;
//		}
//
//		_data[_size++] = val;
//	}
//
//	int size() { return _size; }
//	int capacity() { return _capacity; }
//	void clear() { _size = 0; }
//public:
//	typedef Iterator<T> iterator;
//	iterator begin() { return iterator(& _data[0]); }
//	iterator end() { return iterator(&_data[_size]); }
//
//
//private:
//	T* _data;
//	int _size;
//	int _capacity;
//};
//
//int main()
//{
//	Vector<int> v;
//	//v.reserve(100);
//
//	for (int i = 0; i < 100; i++)
//	{
//		v.push_back(i);
//		cout << "(" << v.size() << ", " << v.capacity() << ")" << endl;
//	}
//
//	//for (int i = 0; i < v.size(); i++)
//	//{
//	//	//v[i] = i;
//	//	cout << v[i] << endl;
//	//}
//
//	cout << "----------------------------------" << endl;
//
//	for (Vector<int>::iterator it = v.begin(); it != v.end(); ++it)
//	{
//		cout << (*it) << endl;
//	}
//
//	v.clear();
//
//	return 0;
//}