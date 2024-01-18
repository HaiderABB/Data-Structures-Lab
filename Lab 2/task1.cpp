//#include <iostream>
//using namespace std;
//
//template<class T>
//class my_vector {
//    int size;
//    int capacity;
//    T* arr;
//public:
//    my_vector() {
//        size = 0;
//        capacity = 1;
//        arr = new T[capacity];
//        arr = nullptr;
//    }
//    my_vector(my_vector&Temp)
//    {
//        this->size = Temp.size;
//        this->capacity = Temp.capacity;
//        this->arr = new T[capacity];
//        for (int i = 0; i < size; ++i)
//        {
//            this->arr[i] = Temp.arr[i];
//        }
//    }
//    void push_back(T val) {
//        bool check = false;
//        if (this->size == this->capacity)
//        {
//            check = true;
//        }
//        if (check)
//        {
//            int temp = this->capacity * 2;
//            T* arr1 = new T[temp];
//            for (int i = 0; i < this->capacity; i++)
//            {
//                arr1[i] = this->arr[i];
//            }
//            arr1[size] = val;
//            this->capacity = temp;
//            ++size;
//
//            delete[] arr;
//            arr = arr1;
//        }
//        else
//        {
//            this->arr[size] = val;
//            ++size;
//        }
//    }
//
//    T pop_back() {
//        if (this->capacity == this->size * 2)
//        {
//            T* temp = new T[size-1];
//            for (int i = 0; i < size - 2; ++i)
//            {
//                temp[i] = this->arr[i];
//            }
//            T val = this->arr[size-1];
//            this->capacity = size;
//            this->size = size - 1;
//            delete[]arr;
//            arr = temp;
//            return val;
//        }
//        else
//        {
//            T val;
//            val = this->arr[size - 1];
//            this->arr[size - 1]=0;
//            return val;
//        }
//    }
//
//    void display_list(void) {
//        cout << "Elements present in list are:\n";
//        for (int i = 0; i < size; i++)
//            cout << arr[i] << "\t";
//        cout << endl;
//    }
//
//   friend my_vector operator+(const my_vector&temp,const int& n)
//   {
//        for (int i = 0; i < size; i++)
//        {
//            temp.arr[i] = arr[i] + n;
//        }
//        return temp;
//   }
//
//  my_vector operator+(const my_vector& obj)
//    {
//       if (this->capacity == obj.capacity)
//       {
//           for (int i = 0; i < size; i++)
//           {
//               this->arr[i] = obj.arr[i] + this->arr[i];
//           }
//           return this;
//       }
//       else
//           cout << "The sizes of the two arrays are not equal" << endl;
//   }
//
//   my_vector operator=(const my_vector& temp)
//   {
//       delete[]arr;
//       this->size = temp.size;
//       this->capacity = temp.capacity;
//       this->arr = new T[capacity];
//       for (int i = 0; i < size; ++i)
//       {
//           this->arr[i] = temp.arr[i];
//       }
//       return this;
//   }
//
//   T operator[](int n)
//   {
//       if (n < capacity)
//       {
//           return this->arr[n];
//       }
//       else
//       {
//           cout << "The index is out of bound" << endl;
//           return false;
//       }
//   }
//
//   friend ostream& operator<<(ostream& temp, const my_vector& obj)
//   {
//       for (int i = 0; i < size; ++i)
//       {
//           temp << obj.arr[i] << " ";
//       }
//       cout << endl;
//       return temp;
//   }
//
//   friend istream& operator>>(istream& temp, const my_vector& obj)
//   {
//       for (int i = 0; i < size; ++i)
//       {
//           temp>> obj.arr[i];
//       }
//       return temp;
//   }
//
//    ~my_vector()
//    {
//        delete[]arr;
//        arr = nullptr;
//    }
//};
//
//int main()
//{
//    my_vector<int> list;
//
//    for (int i = 0; i < 8; i++) {
//        list.push_back(i + 1);
//        list.display_list();
//    }
//
//    for (int j = 0; j <= 4; j++) {
//        cout << "Extracted \t" << list.pop_back() << "\t from list" << endl;
//        list.display_list();
//
//    }
//    
//    return 0;
//}