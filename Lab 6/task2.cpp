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
//	void push(T const& e)
//	{
//		if (Bottom == nullptr && top == nullptr)
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
//			newNode->setNext(top);
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
//	T play()
//	{
//		return top->getData();
//	}
//	void displayList()
//	{
//		Node* temp = top;
//		while (temp != nullptr)
//		{
//			cout << temp->getData() << endl;
//			temp = temp->getNext();
//		}
//	}
//};
//class MediaPlayer {
//private:
//	Stack<string> playlist;
//public:
//	void addToPlaylist(const string& media) { playlist.push(media); }
//	void removeFromPlaylist() { playlist.pop(); }
//	void play() { cout << playlist.play(); }
//	void displayPlaylist()
//	{
//		playlist.displayList();
//	}
//};
//int main()
//{
//	MediaPlayer aux;
//	aux.addToPlaylist("Hiasdeefjnfd");
//	aux.addToPlaylist("fmsdfmfm");
//	aux.addToPlaylist("Hifdsknfksnfksdfkjnfd");
//	aux.addToPlaylist("fsdffffffffffffffffff");
//	aux.play();
// cout<<endl;
//	aux.removeFromPlaylist();
//	aux.displayPlaylist();
//}