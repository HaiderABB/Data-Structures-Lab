//#include<iostream>
//#include<vector>
//using namespace std;
//class Student {
//	const char* name;
//	int student_ID;
//public:
//	Student(  const char* name, int studentID) {
//		this->name = name;
//		this->student_ID = studentID;
//	}
//	 const char* getName() const
//	 {
//		 return name;
//	 }
//	 int getStudentId() 
//	 {
//		 return student_ID;
//	 }
//};
//class Course {
//	string courseName;
//	// Using Vectors
//	vector<Student*>students;  
//	int rows = 0;
//public:
//	Course(string courseName) {
//		this->courseName = courseName;
//	}
//    void addStudent(Student*student)
//	{
//		students.push_back(student);
//		++rows;
//	}
//
//    void displayStudents() const
//    {
//		for (int i = 0; i < rows; ++i)
//		{
//			cout << students[i]->getName() << " " << students[i]->getStudentId() << endl;
//		}
//    }
//};
//int main()
//{
//	Student student1("John Smith",12345);
//	Student student2("Jane Doe",54321);
//	Course mathCourse("Mathematics");
//	mathCourse.addStudent(&student1);
//	mathCourse.addStudent(&student2);
//	mathCourse.displayStudents();
//	return 0;
//}
//
//
