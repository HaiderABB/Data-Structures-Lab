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
//			return next;
//	}
//	void setData(int data)
//	{
//		this->data = data;
//	}
//	int getData()
//	{
//		if(this!=nullptr)return data;
//	}
//	~Node()
//	{
//		//delete next;
//		next = nullptr;
//	}
//};
//
//
//class List{
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
//	void insertAtStart(int data)
//	{
//			Node* newNode = new Node(data);
//			newNode->setNext(head);
//			head = newNode;
//			current = tail;
//			current->setNext(nullptr);
//			++size;
//	}
//	void insertAtEnd(int data)
//	{
//		Node* newNode = new Node(data);
//		current->setNext(newNode);
//		tail = newNode;
//		tail->setNext(nullptr);
//	}
//	void deleteAtStart()
//	{
//		if (head != nullptr)
//		{
//			Node* temp = head;
//			head = temp->getNext();
//			delete temp;
//			temp = nullptr;
//		}
//	}
//	void deleteAtEnd()
//	{
//		if (head == tail)
//		{
//			delete head;
//			tail = nullptr;
//			head = nullptr;
//		}
//		else if (size == 0)
//		{
//			cout << "There is no element in the linked list" << endl;
//		}
//		else
//		{
//			Node* temp = head;
//			while (temp->getNext() != tail)
//			{
//				temp = temp->getNext();
//			}
//			delete tail;
//			tail = temp;
//			tail->setNext(nullptr);
//		}
//	}
//	void traverse()
//	{
//		Node* temp = head;
//		int i = 1;
//		while (temp != nullptr)
//		{
//			cout << i << " term of linked list is " << temp->getData() << endl;
//			temp = temp->getNext();
//		}
//	}
//	void printForward()const
//	{
//		Node* temp = head;
//		int i = 1;
//		while (temp != nullptr)
//		{
//			cout << i << " term of linked list is " << temp->getData() << endl;
//			temp = temp->getNext();
//		}
//	}
//	void printReverseRecursive(Node*head) {
//		if (head == nullptr) {
//			return; // Base case: the list is empty or we've reached the end
//		}
//
//		// Recursively print the rest of the list
//		printReverseRecursive(head->getNext());
//
//		// Print the current node's data
//		std::cout << head->getData() << " ";
//	}
//	void printReverse()
//	{
//		printReverseRecursive(head);
//	}
//	int getSize()const
//	{
//		return size;
//	}
//	int returnMiddleElement()
//	{
//		int middle;
//		if (size % 2 == 0)
//		{
//			middle = size / 2;
//			middle = middle - 1;
//		}
//		else
//		{
//			middle = (size / 2) + 1;
//		}
//
//		Node* temp = head;
//		int i = 0;
//		while (i != middle)
//		{
//			temp = temp->getNext();
//			++i;
//		}
//
//		return temp->getData();
//
//	}
//	bool isEmpty()
//	{
//		if (tail == nullptr)
//		{
//			return true;
//		}
//		else
//			return false;
//
//	}
//	int findMax()const
//	{
//		Node* temp = head;
//		int max = temp->getData();
//		while (temp != nullptr)
//		{
//			temp = temp->getNext();
//			if (max < temp->getData())
//			{
//				max = temp->getData();
//			}
//		}
//		return max;
//	}
//	void insertAfter(int value, int key)
//	{
//		bool flag = true;
//		Node* temp = head;
//		while (temp != nullptr)
//		{
//			if (value == temp->getData())
//			{
//				Node* newNode = new Node(key);
//				newNode->setNext(temp->getNext());
//				temp->setNext(newNode);
//				flag = false;
//				break;
//			}
//			else
//				temp = temp->getNext();
//		}
//
//		if (flag)
//		{
//			Node* newNode = new Node(key);
//			tail->setNext(newNode);
//			tail = newNode;
//			newNode->setNext(nullptr);
//		}
//	}
//	void insertBefore(int value, int key)
//	{
//		bool flag = true;
//		Node* temp = head;
//		Node* prev = temp;
//		while (flag)
//		{
//			if (temp->getData() == value && size==1)
//			{
//				Node* newNode = new Node(key);
//				newNode->setNext(head);
//				tail = head;
//				tail->setNext(nullptr);
//				head = newNode;
//				break;
//			}
//			else if (temp->getData() == value)
//			{
//				Node* newNode = new Node(key);
//				newNode->setNext(temp);
//				prev->setNext(newNode);
//				break;
//			}
//			prev = temp;
//			temp = temp->getNext();
//		}
//	}
//	void insertSorted(int value)
//	{
//		Node* prev = head;
//		Node* temp = head->getNext();
//		while (temp != nullptr)
//		{
//			if (value < head->getData())
//			{
//				Node* newNode = new Node(value);
//				newNode->setNext(head);
//				head = newNode;
//				break;
//			}
//			else if (value >= prev->getData() && value <= temp->getData())
//			{
//				Node* newNode = new Node(value);
//				newNode->setNext(temp);
//				prev->setNext(newNode); 
//					break;
//			}
//			else if (value >= tail->getData())
//			{
//				Node* newNode = new Node(value);
//				tail->setNext(newNode);
//				tail = newNode;
//				tail->setNext(nullptr);
//				break;
//			}
//			else
//			{
//				prev = prev->getNext();
//				temp = temp->getNext();
//			}
//		}
//	}
//	~List()
//	{
//		Node* temp = head;
//		while (temp != nullptr && head!=nullptr)
//		{
//			Node* temp = head;
//			head = head->getNext();
//			delete temp;
//			temp = nullptr;
//		}
//		current = nullptr;
//		tail = nullptr;
//	}
//};
//
//int main()
//{
//	List linkedList;
//	linkedList.AddNode(4);
//	linkedList.AddNode(5);
//	linkedList.AddNode(6);
//	linkedList.AddNode(8);
//	linkedList.AddNode(9);
//	linkedList.AddNode(11);
//	linkedList.AddNode(4);
//	linkedList.AddNode(4);
//	linkedList.AddNode(5);
//	linkedList.AddNode(8);
//	linkedList.traverse();
//	/*linkedList.insertAtStart(1);
//	linkedList.insertAtStart(2);
//	cout << "The linked list after inserting element at the start is " << endl;*/
//	linkedList.traverse();
//	/*cout << "The linked list after deleting element from the end is " << endl;
//	linkedList.deleteAtEnd();
//	linkedList.traverse();*/
//	cout << endl;
//	cout << "Middle Element of the list is " << linkedList.returnMiddleElement() << endl;
//	cout << "The max element of the list is " << linkedList.findMax() << endl;
//	/*linkedList.insertBefore(7, 8);
//	cout << "The new element 8 is added before 7 and the list now becomes " << endl;
//	linkedList.traverse();
//	cout << "The new element 4 is added after 5 and the list now becomes " << endl;
//	linkedList.insertAfter(5, 4);
//	linkedList.traverse();*/
//	linkedList.insertSorted(7);
//	cout << "After adding 7" << endl;
//	linkedList.traverse();
//	linkedList.insertSorted(10);
//	cout << "After adding 10" << endl;
//	linkedList.traverse();
//	linkedList.insertSorted(12);
//	cout << "After adding 12" << endl;
//	linkedList.traverse();
//	cout << endl;
//}