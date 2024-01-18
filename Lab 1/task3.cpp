//#include<iostream>
//using namespace std;
//class LibraryItem {
//protected:
//	int item_id;
//	string title;
//	string author;
//	int publication_year;
//	bool is_available;
//public:
//	LibraryItem(int item_id,string title,string author,int publication_year,bool is_available){
//		this->item_id= item_id;
//		this->title= title;
//		this->author= author;
//		this->publication_year= publication_year;
//		this->is_available= is_available;
//	}
//    LibraryItem(){}
//	int getID() { return item_id; }
//	void setID(int item_id) { this->item_id =item_id; }
//	string getTitle() { return title; }
//	void setTitle(string title) { this->title = title; }
//	string getAuthor() { return author; }
//	void setAuthor(string Author) { this->author = Author; }
//	int getYear() { return publication_year; }
//	void setYear(int year) { publication_year = year; }
//	bool getAvail() { return is_available; }
//	void setAvail(bool avail) { is_available = avail; }
//	virtual void displayDetails() {
//		cout << "Item ID: " << item_id << endl;
//		cout << "Title: " << title << endl;
//		cout << "Creator: " << author<< endl;
//		cout << "Publication Year: " << publication_year << endl;
//		cout << "Available: " << endl;
//		if (is_available = true)
//		{
//			cout << "Yes" << endl;
//		}
//		else
//			cout << "NO" << endl;
//	}
//
//	void borrowItem() {
//		if (is_available) {
//			is_available = false;
//			cout << title << " has been borrowed.\n";
//		}
//		else {
//			cout << title << " NA" << endl;
//		}
//	}
//
//	void returnItem() {
//		is_available = true;
//		cout << title << " has been returned.\n";
//	}
//
//};
//
//class Book :public LibraryItem {
//	long long int ISBN;
//	string genre;
//public:
//	Book(long long int ISBN, string genre,int item_id, string title, string author, int publication_year, bool is_available):LibraryItem( item_id, title,author, publication_year,is_available)
//	{
//		this->ISBN = ISBN;
//		this->genre = genre;
//	}
//	void displayDetails()
//	{
//		LibraryItem::displayDetails();
//		cout << "ISBN: " << ISBN << "\nGenre: " << genre << "\n";
//	}
//};
//class Magazine:public LibraryItem {
//	int issue_num;
//	string topic;
//public:
//	Magazine(int issue_num, string topic, int item_id, string title, string author, int publication_year, bool is_available) :LibraryItem(item_id, title, author, publication_year, is_available)
//	{
//		this->issue_num = issue_num;
//		this->topic = topic;
//	}
//	void displayDetails() override
//	{
//		LibraryItem::displayDetails();
//		cout << "Issue Number: " << issue_num << "\nTopic: " << topic << "\n";
//	}
//};
//class DVD : public LibraryItem {
//protected:
//	int duration;
//	string director;
//public:
//	DVD(int duration,string director,int item_id, string title, string author, int publication_year, bool is_available)
//		: LibraryItem(item_id, title, author, publication_year, is_available) 
//	{
//		this->duration = duration;
//		this->director = director;
//	}
//
//	void displayDetails() override
//	{
//		LibraryItem::displayDetails();
//		cout << "Duration: " << duration << " minutes\nDirector: " << director << "\n";
//	}
//
//
//};
//const int MAX_ITEMS = 100;
//class Library:public LibraryItem {
//private:
//    LibraryItem* items[MAX_ITEMS];
//    int numItems;
//
//public:
//   Library(){}
//
//    void addBook(int id, const string& t, const string& c, int year, int isbn, const string& g)
//    {
//        if (numItems < MAX_ITEMS)
//        {
//            items[numItems++] = new Book(isbn, g,id, t, c, year,true);
//            cout << "Book added: " << t << "\n";
//        }
//        else {
//            cout << "Library is full. Cannot add more items.\n";
//        }
//    }
//
//    void addMagazine(int id, const string& t, const string& c, int year, int issue, const string& top) {
//        if (numItems < MAX_ITEMS)
//        {
//            items[numItems++] = new Magazine(issue, top,id, t, c, year,true);
//
//            cout << "Magazine added: " << t << "\n";
//        }
//        else {
//            cout << "Library is full. Cannot add more items.\n";
//        }
//    }
//
//    void addDVD(int id, const string& t, const string& c, int year, int dur, const string& dir)
//    {
//        if (numItems < MAX_ITEMS)
//        {
//            items[numItems++] = new DVD(dur, dir,id, t, c, year,true);
//            cout << "DVD added: " << t << "\n";
//        }
//        else {
//            cout << "Library is full. Cannot add more items.\n";
//        }
//    }
//
//    void displayAllItems() {
//        cout << "All Library Items:\n";
//        for (int i = 0; i < numItems; ++i)
//        {
//            items[i]->displayDetails();
//            cout << "-------------\n";
//        }
//    }
//
//    void borrowItem(int item_id) {
//        for (int i = 0; i < numItems; ++i)
//        {
//            if (items[i]->getID() == item_id)
//            {
//                items[i]->borrowItem();
//                return;
//            }
//        }
//        cout << "Item not found.\n";
//    }
//
//    void returnItem(int item_id) {
//        for (int i = 0; i < numItems; ++i) {
//            if (items[i]->getID() == item_id) {
//                items[i]->returnItem();
//                return;
//            }
//        }
//        cout << "Item not found.\n";
//    }
//
//    ~Library() {
//        for (int i = 0; i < numItems; ++i) {
//            delete items[i];
//        }
//    }
//};
//
//int main()
//{
//    Library library;
//
//    int id, year, issue, dur, isbn;
//    string title, creator, genre, topic, director;
//
//    int choice;
//
//    cout << "1. BOOK " << endl;
//    cout << "2. Magzine" << endl;
//    cout << "3. DVD" << endl;
//    cin >> choice;
//    if (choice == 1) {
//        cout << "Adding a Book\n";
//        cout << "Enter ID: "; cin >> id;
//        cout << "Enter Title: "; cin >> title;
//        cout << "Enter Creator: "; cin >> creator;
//        cout << "Enter Publication Year: "; cin >> year;
//        cout << "Enter ISBN: "; cin >> isbn;
//        cout << "Enter Genre: "; cin >> genre;
//        library.addBook(id, title, creator, year, isbn, genre);
//    }
//    if (choice == 2) {
//        cout << "Adding a Magazine\n";
//        cout << "Enter ID: "; cin >> id;
//        cout << "Enter Title: "; cin >> title;
//        cout << "Enter Creator: "; cin >> creator;
//        cout << "Enter Publication Year: "; cin >> year;
//        cout << "Enter Issue Number: "; cin >> issue;
//        cout << "Enter Topic: "; cin >> topic;
//        library.addMagazine(id, title, creator, year, issue, topic);
//    }
//    if (choice == 3)
//    {
//        cout << "Adding a DVD" << endl;
//        cout << "Enter ID: "; cin >> id;
//        cout << "Enter Title: "; cin >> title;
//        cout << "Enter Creator: "; cin >> creator;
//        cout << "Enter Publication Year: "; cin >> year;
//        cout << "Enter Duration: "; cin >> dur;
//        cout << "Enter Director: "; cin >> director;
//        library.addDVD(id, title, creator, year, dur, director);
//    }
//    library.displayAllItems();
//
//    int borrowId;
//    cout << "Enter Item ID to Borrow: "; cin >> borrowId;
//    library.borrowItem(borrowId);
//
//    library.displayAllItems();
//
//    int returnId;
//    cout << "Enter Item ID to Return: "; cin >> returnId;
//    library.returnItem(returnId);
//
//    library.displayAllItems();
//
//
//}