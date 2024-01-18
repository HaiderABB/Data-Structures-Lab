//#include<iostream>
//#include<queue>
//using namespace std;
//
//class Node {
//	int data;
//	Node* left;
//	Node* right;
//public:
//	Node()
//	{
//		left = nullptr;
//		right = nullptr;
//	}
//	Node* getRight()
//	{
//		return right;
//	}
//	Node* getLeft()
//	{
//		return left;
//	}
//	int getData()
//	{
//		return data;
//	}
//	void setRight(Node*right)
//	{
//		this->right=right;
//	}
//	void setLeft(Node*left)
//	{
//		this->left=left;
//	}
//	void setData(int data)
//	{
//		this->data = data;
//	}
//};
//
//class BST {
//	Node* root;
//public:
//	BST()
//	{
//		root = nullptr;
//	}
//	Node* getRoot()
//	{
//		return root;
//	}
//
//	BST(BST& obj)
//	{
//		root = deepCopy(obj.root);
//	}
//	
//	Node* deepCopy(Node* s)
//	{
//		if (s == nullptr)
//			return nullptr;
//		else
//		{
//			Node* newNode = new Node;
//			newNode->setData(s->getData());
//			newNode->setLeft(deepCopy(s->getLeft()));
//			newNode->setRight(deepCopy(s->getRight()));
//		}
//	}
//
//	bool insert(int data)
//	{
//		if (root == nullptr)
//		{
//			root = new Node();
//			root->setData(data);
//			cout << "Inserted as Root" << endl;
//			return true;
//		}
//		else
//		{
//			bool flag = true;
//			bool check = false;
//			Node* temp = root;
//			while (flag)
//			{
//				if (data > temp->getData())
//				{
//					if (temp->getRight() == nullptr)
//					{
//						temp->setRight(new Node());
//						temp = temp->getRight();
//						temp->setData(data);
//						check = true;
//						flag = false;
//						cout << "Inserted as Right" << endl;
//					}
//					else
//					{
//						temp = temp->getRight();
//					}
//				}
//				else if (data < temp->getData())
//				{
//					if (temp->getLeft() == nullptr)
//					{
//						temp->setLeft( new Node());
//						temp = temp->getLeft();
//						temp->setData(data);
//						cout << "Inserted as Left" << endl;
//						flag = false;
//						check = true;
//					}
//					else
//					{
//						temp = temp->getLeft();
//					}
//				}
//				else if (data == temp->getData())
//				{
//					flag = false;
//					cout << "Duplicate Data" << endl;
//				}
//			}
//
//			if (check)
//			{
//				return true;
//			}
//			else
//				return false;
//		}
//	}
//
//	void inTrav(Node*s,int&count)
//	{
//		if (s == nullptr)
//			return;
//		else
//		{
//			inTrav(s->getLeft(),count);
//			cout << s->getData() << " ";
//			++count;
//			inTrav(s->getRight(),count);
//		}
//	}
//	void PreTrav(Node* s,int&c)
//	{
//
//		if (s == nullptr)
//		{
//			return;
//		}
//
//		if (s->getLeft() == nullptr && s->getRight() == nullptr)
//		{
//			++c;
//		}
//			cout << s->getData() << " ";
//			PreTrav(s->getLeft(),c);
//			PreTrav(s->getRight(),c);
//		
//	}
//	void PosTrav(Node*s)
//	{
//		if (s == nullptr)
//			return;
//		else
//		{
//			PosTrav(s->getLeft());
//			PosTrav(s->getRight());
//			cout << s->getData() << " ";
//		}
//	}
//	void levOrd(Node*root)
//	{
//		queue<Node*>q;
//		q.push(root);
//		q.push(nullptr);
//
//		while (!q.empty())
//		{
//			Node* temp = q.front();
//			q.pop();
//			if (temp != nullptr)
//			{
//				cout << temp->getData() << " ";
//				if (temp->getLeft())
//					q.push(temp->getLeft());
//				if (temp->getRight())
//					q.push(temp->getRight());
//			}
//			else if (!q.empty())
//				q.push(nullptr);
//		}
//	}
//
//	Node* compare(int key,Node*s)
//	{
//		if (s != nullptr)
//		{
//			if (key == s->getData())
//			{
//				return s;
//			}
//		}
//		else if(s==nullptr)
//			return nullptr;
//		else if ((s->getRight() == nullptr && s->getLeft() == nullptr))
//			return nullptr;
//
//			if (key > s->getData())
//			{
//				compare(key, s->getRight());
//			}
//			else
//			{
//				compare(key, s->getLeft());
//			}
//		
//	}
//
//	Node* search(int key)
//	{
//		Node* temp = compare(key, root);
//		if (temp == nullptr)
//		{
//			cout << "Node not found" << endl;
//			return nullptr;
//		}
//		else
//		{
//			cout << "Node found" << endl;
//			return temp;
//			
//		}
//	}
//
//	int countNodes() {
//		int count = 0;
//		inTrav(root, count);
//		return count;
//	}
//
//	int leafCount()
//	{
//		int lc = 0;
//		PreTrav(root, lc);
//		return lc;
//	}
//
//	void destructor(Node*s)
//	{
//		if (s == nullptr)
//			return;
//
//		destructor(s->getLeft());
//		destructor(s->getRight());
//		delete s;
//		s = nullptr;
//		cout << "ND" << " ";
//	}
//
//	~BST()
//	{
//		destructor(root);
//		cout << "Tree Deleted" << endl;
//	}
//
//};
//int main()
//{
//	BST Tree;
//	Tree.insert(103);
//	Tree.insert(345);
//	Tree.insert(184);
//	Tree.insert(589);
//	Tree.insert(263);
//	Tree.insert(1484);
//	Tree.insert(251);
//	/*BST Tree2 = Tree;*/
//	Node*ptr=Tree.search(1484);
//	cout << endl;
//	cout << "Total Nodes are " << Tree.countNodes();
//	cout << endl;
//	cout << "Total leafs are " << Tree.leafCount();
//	cout << endl;
//}