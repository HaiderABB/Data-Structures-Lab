//#include<iostream>
//using namespace std;
//class Node {
//private:
//	int data;
//	Node* next;
//public:
//	Node()
//	{
//		next = nullptr;
//	}
//	Node(int data)
//	{
//		this->data = data;
//		next = nullptr;
//	}
//	void setNext(Node* temp)
//	{
//		next = temp;
//	}
//	Node* getNext()
//	{
//		return next;
//	}
//	void setData(int data)
//	{
//		this->data = data;
//	}
//	int getData()
//	{
//		if (this != nullptr)return data;
//	}
//	~Node()
//	{
//		//delete next;
//		next = nullptr;
//	}
//};
//class List {
//	Node* head;
//	Node* tail;
//	Node* current;
//	int size = 0;
//public:
//	List()
//	{
//		head = nullptr;
//		tail = nullptr;
//		current = nullptr;
//	}
//	void AddNode(int data)
//	{
//		Node* newNode = new Node(data);
//		if (head == nullptr)
//		{
//			head = newNode;
//			current = newNode;
//			tail = newNode;
//			newNode->setNext(nullptr);
//		}
//		else
//		{
//			current->setNext(newNode);
//			tail = newNode;
//			tail->setNext(nullptr);
//			current = newNode;
//		}
//		++size;
//	}
//	bool insert(int value)
//	{
//		if (head == nullptr)
//		{
//			Node* newNode = new Node(value);
//			head = newNode;
//			tail = newNode;
//			tail->setNext(nullptr);
//			current = newNode;
//			return true;
//			++size;
//		}
//		else if(head!=nullptr)
//		{
//			Node* newNode = new Node(value);
//			current->setNext(newNode);
//			current = newNode;
//			tail = newNode;
//			tail->setNext(nullptr);
//			return true;
//			++size;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	void display()
//	{
//		Node* temp = head;
//		int i = 1;
//		while (temp != nullptr)
//		{
//			cout << i << " term of linked list is " << temp->getData() << endl;
//			temp = temp->getNext();
//		}
//	}
//	int getSize()
//	{
//		return size;
//	}
//	int countNodes()
//	{
//		Node* temp = head;
//		int i = 0;
//		while (temp != nullptr)
//		{
//			++i;
//		}
//		return i;
//	}
//	int returnFirst()
//	{
//		return head->getData();
//	}
//	int returnLast()
//	{
//		return tail->getData();
//	}
//	int pop()
//	{
//		if (head != nullptr)
//		{
//			Node* temp1= head->getNext();
//			Node* temp2 = head;
//			int data = head->getData();
//			delete temp2;
//			temp2 = nullptr;
//			head = temp1;
//			return data;
//		}
//	}
//	bool insertNthNode(int data,int n)
//	{
//		if (n <= size)
//		{
//			int i = 0;
//			Node* temp = head;
//			while (temp != nullptr)
//			{
//				if (i == n && temp != tail)
//				{
//					temp->setData(data);
//					return true;
//				}
//				else if (i == n && temp == tail)
//				{
//					tail->setData(data);
//					tail->setNext(nullptr);
//					return true;
//				}
//			}
//		}
//		else if (n > size && n < size + 2)
//		{
//			return (insert(data));
//		}
//		else
//			return false;
//	}
//	void combine(List& list1, List& list2)
//	{
//		Node* temp = list1.head;
//		while (temp != nullptr)
//		{
//			if (head == nullptr)
//			{
//				Node* newNode = new Node(temp->getData());
//				temp = temp->getNext();
//				head = newNode;
//				tail = newNode;
//				tail->setNext(nullptr);
//				current = newNode;
//			}
//			else
//			{
//				Node* newNode = new Node(temp->getData());
//				current->setNext(newNode);
//				tail = newNode;
//				tail->setNext(nullptr);
//				current = newNode;
//			}
//			temp = temp->getNext();
//		}
//
//		temp = list2.head;
//		while (temp != nullptr)
//		{
//			Node* newNode = new Node(temp->getData());
//			current->setNext(newNode);
//			tail = newNode;
//			tail->setNext(nullptr);
//			current = newNode;
//			temp = temp->getNext();
//		}
//	}
//
//	~List()
//	{
//		if (head != nullptr)
//		{
//			delete head;
//			head = nullptr;
//		}
//		if (tail != nullptr)
//		{
//			delete tail;
//			tail = nullptr;
//		}
//	}
//};
//int main()
//{
//	List list1, list2;
//	for (int i = 1; i <= 10; ++i)
//	{
//		list1.insert(i);
//	}
//	for (int i = 11; i <= 20; ++i)
//	{
//		list2.insert(i);
//	}
//	cout << "\n--------------------------------\n";
//	cout << "The first list is " << endl;
//	list1.display();
//	cout << "\n--------------------------------\n";
//	cout << "The second list is " << endl;
//	list2.display();
//	cout << "\n--------------------------------\n";
//	List list3;
//	list3.combine(list1, list2);
//	cout << "After combining the two lists" << endl;
//	list3.display();
//}