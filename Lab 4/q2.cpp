//#include<iostream>
//using namespace std;
//class Node
//{
//	Node* next;
//	int value;
//public:
//	Node()
//	{
//		next = NULL;
//		value = 0;
//	}
//	int getValue()
//	{
//		return value;
//	}
//	Node* getNext()
//	{
//		return next;
//	}
//	void setValue(int value)
//	{
//		this->value = value;
//	}
//	void setNext(Node* next)
//	{
//		this->next = next;
//	}
//	~Node()
//	{
//		delete next;
//	}
//};
//class Linked_List
//{
//	Node* head;
//	Node* currentptr;
//	int size;
//public:
//	Linked_List()
//	{
//		size = 0;
//		head = NULL;
//		currentptr = NULL;
//	}
//	~Linked_List()
//	{
//		delete head;
//		delete currentptr;
//	}
//	int getSize()
//	{
//		Node* ptr = head;
//		int size = 0;
//		while (ptr->getNext() != NULL)
//		{
//			size++;
//			ptr = ptr->getNext();
//		}
//		return size;
//	}
//	void Insertion(int value)
//	{
//		if (size == 0)
//		{
//			Node* ptr = new Node();
//			ptr->setValue(value);
//			ptr->setNext(NULL);
//			head = ptr;
//			size++;
//		}
//		else
//		{
//			Node* ptr = new Node();
//			ptr->setValue(value);
//			ptr->setNext(NULL);
//			Node* ptr2 = head;
//			while (ptr2->getNext() != NULL)
//			{
//				ptr2 = ptr2->getNext();
//			}
//			ptr2->setNext(ptr);
//			size++;
//		}
//	}
//	void print()
//	{
//		Node* ptr = head;
//		while (ptr != NULL)
//		{
//			cout << ptr->getValue() << " ";
//			ptr = ptr->getNext();
//		}
//		cout << endl;
//	}
//	void Remove_Index(int ind, Linked_List& L2)
//	{
//		if (ind == 0)
//		{
//			L2.Insertion(head->getValue());
//			head = head->getNext();
//			return;
//		}
//		Node* ptr = head;
//		for (int i = 0; i < ind - 1; i++)
//		{
//			ptr = ptr->getNext();
//		}
//		Node* ptr2 = ptr->getNext();
//		Node* ptr3 = ptr->getNext()->getNext();
//		ptr->setNext(ptr3);
//		L2.Insertion(ptr2->getValue());
//	}
//};
//int main()
//{
//	int ans = 0;
//	int response = 0;
//	int size = 0;
//	cout << "Enter the Size for List: " << endl;
//	cin >> size;
//	Linked_List List1;
//	Linked_List List2;
//	int value = 0;
//	cout << "Enter the Values: " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cin >> value;
//		List1.Insertion(value);
//	}do
//	{
//		system("CLS");
//		cout << "---------------------------------------------" << endl;
//		cout << "1. Print the List." << endl;
//		cout << "2. Remove any Index." << endl;
//		cout << "3. View the Removed Elements." << endl;
//		cout << "---------------------------------------------" << endl;
//		cin >> response;
//		if (response == 1)
//		{
//			cout << "The List 1 is: " << endl;
//			List1.print();
//			system("pause");
//		}
//		else if (response == 2)
//		{
//			List1.print();
//			cout << "Enter the Index to be Removed." << endl;
//			cin >> value;
//			if (size <= value)
//			{
//				cout << "The Index is out of the range of size!" << endl;
//			}
//			else if (value < 0)
//			{
//				cout << "Index is less than Zero." << endl;
//			}
//			else
//			{
//				List1.Remove_Index(value, List2);
//				size--;
//			}
//			system("pause");
//
//		}
//		else if (response == 3)
//		{
//			cout << "The Removed Elements are: " << endl;
//			List2.print();
//			system("pause");
//
//		}
//		else
//		{
//			ans = 1;
//			system("pause");
//		}
//
//	} while (ans == 0);
//}