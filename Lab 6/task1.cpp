//#include<iostream>
//using namespace std;
//template <typename T>
//class Stack {
//	class Node {
//		T data;
//		Node* next;
//	public:
//		Node(T data)
//		{
//			this->data = data;
//			next = nullptr;
//		}
//		T getData()
//		{
//			return data;
//		}
//		
//		void setNext(Node* n)
//		{
//			next = n;
//		}
//		Node* getNext()
//		{
//			return next;
//		}
//	};
//	Node* top;
//	Node* Bottom;
//	Node* current;
//	int size = 0;
//public:
//	Stack()
//	{
//		top = nullptr;
//		Bottom = nullptr;
//	}
//	int getSize()
//	{
//		return size;
//	}
//	bool isEmpty()
//	{
//		if (size == 0)
//		{
//			return true;
//		}
//		else
//			return false;
//	}
//	void push(T const& e)
//	{
//		if (Bottom == nullptr)
//		{
//			Node* newNode = new Node(e);
//			top = newNode;
//			Bottom = newNode;
//			++size;
//			current = newNode;
//			newNode->setNext(nullptr);
//		}
//		else
//		{
//			Node* newNode = new Node(e);
//			newNode->setNext(current);
//			top = newNode;
//			++size;
//			current = newNode;
//		}
//	}
//	void pop()
//	{
//		Node* temp = top;
//		top = top->getNext();
//		delete temp;
//		temp = nullptr;
//		--size;
//	}
//	bool topData(T& f)
//	{
//		if (top == nullptr)
//		{
//			return false;
//		}
//		else
//			f = top->getData();
//	}
//};
//int main()
//{
//	Stack<int>st;
//	for (int i = 10; i > 0; --i)
//	{
//		st.push(i);
//	}
//	int k;
//	cout << "The top most data member of Stack is " << st.topData(k);
//
//	if (st.isEmpty())
//	{
//		cout << "The stack is empty " << endl;
//	}
//	else
//		cout << "The stack has data" << endl;
//
//	for (int i = 10; i > 0; --i)
//	{
//		st.pop();
//	}
//
//	if (st.isEmpty())
//	{
//		cout << "The stack is empty " << endl;
//	}
//	else
//		cout << "The stack has data" << endl;
//}