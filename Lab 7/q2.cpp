//#include<iostream>
//using namespace std;
//class Queue {
//private:
//	int front, rear;
//	int* data;
//	int cap;
//	int size = 0;
//public:
//	Queue(int cap)
//	{
//		front = rear = -1;
//		data = new int[cap];
//		this->cap = cap;
//	}
//	void Enqueue(int i)
//	{
//		if (front == -1)
//		{
//			rear = getNext(rear);
//			front = getNext(front);
//			data[rear] = i;
//		}
//		else
//		{
//			rear = getNext(rear);
//			data[rear] = i;
//		}
//		++size;
//	}
//	int Dequeue()
//	{
//		int d = data[front];
//		if (front == rear)
//			front = rear = -1;
//		else
//			front = getNext(front);
//
//		--size;
//		return d;
//	}
//	int getNext(int i)
//	{
//		return (i + 1) % cap;
//	}
//	bool isEmpty()
//	{
//		if (front == -1)
//			return true;
//		else
//			return false;
//	}
//	int getSize()
//	{
//		return size;
//	}
//};
//
//void ReverseQueue(Queue&MainQ,int n,int k)
//{
//	Queue tempQ(k);
//	int data;
//	if (k > n)
//	{
//		k = n;
//	}
//
//	for (int i = 0; i < k; ++i)
//	{
//		data = MainQ.Dequeue();
//		tempQ.Enqueue(data);
//	}
//
//	for (int i = k-1; i >0; --i)
//	{
//		for (int j = i; j > 0; --j)
//		{
//			data = tempQ.Dequeue();
//			tempQ.Enqueue(data);
//		}
//		data = tempQ.Dequeue();
//		MainQ.Enqueue(data);
//	}
//	data = tempQ.Dequeue();
//	MainQ.Enqueue(data);
//
//	if(k!=n)
//	{
//		for (int i = 0; i < k - 1; ++i)
//	    {
//		data = MainQ.Dequeue();
//		MainQ.Enqueue(data);
//	    }
//	}
//}
//
//int main()
//{
//	int n, k, num;
//	cout << "Enter the number of elements you want to Enqueue" << endl;
//	cin >> n;
//	Queue MainQ(n);
//
//	cout << "Enter Elements" << endl;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> num;
//		MainQ.Enqueue(num);
//	}
//
//	cout << "Enter from where you want to Reverse the Queue" << endl;
//	cin >> k;
//	if (k != 1)
//	{
//		ReverseQueue(MainQ, n, k);
//	}
//	cout<<"----------------------" << endl;
//	cout << "The Queue after being reversed is " << endl;
//	while (!MainQ.isEmpty())
//	{
//		n = MainQ.Dequeue();
//		cout << n << " ";
//	}
//	
//}