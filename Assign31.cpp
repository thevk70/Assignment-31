// 1. Define a class Person with instance members name and age. Also define member
// functions setName(), setAge(), getName(), getAge(). Now define class Employee by
// inheriting Person class. In the Employee class define empid and salary as instance
// members. Also define setEmpid, setSalary, getEmpid, getSalary.
// #include <iostream>
// using namespace std;
// class Person
// {
//     string name;
//     int age;
//     public:
//     void setName(string n)
//     {
//        name = n;
//     }
//     void setAge(int a)
//     {
//         age = a;
//     }
//     void getName()
//     {
//         cout<<"Name = "<<name<<endl;
//     }
//     void getAge()
//     {
//         cout<<"Age = "<<age<<endl;
//     }

// };
// class Employee : public Person
// {
//     int emp_id;
//     int emp_sal;
//     public:
//     void setEmpid(int id)
//     {
//         emp_id = id;
//     }
//     void setSalary(int s)
//     {
//         emp_sal = s;
//     }
//     void getEmpid()
//     {
//         cout<<"Employee ID = "<<emp_id<<endl;
//     }
//     void getSalary()
//     {
//         cout<<"Employee salary = "<<emp_sal<<endl;
//     }
// };
// int main()
// {
//     Person p;
//     Employee e;
//     p.setName("Vishwajeet Kumar");
//     p.setAge(18);
//     p.getName();
//     p.getAge();
//     e.setEmpid(10);
//     e.setSalary(100000);
//     e.getEmpid();
//     e.getSalary();
//     return 0;
// }

// 2. Write a C++ program to add two numbers using single inheritance. Accept these two
// numbers from the user in base class and display the sum of these two numbers in
// derived class.
// #include <iostream>
// using namespace std;
// class base
// {
//     public:
//     int num1,num2;
//     void setNum(int n1,int n2)
//     {
//         num1 = n1;
//         num2 = n2;
//     }
// };
// class  derived : public base
// {
//     public:
//     void sum()
//     {
//         cout<<"Sum = "<<num1 + num2<<endl;
//     }
// };
// int main()
// {
//     derived d;
//     d.setNum(4,6);
//     d.sum();
//     return 0;
// }

// 3. Write a C++ program to calculate the percentage of a student using multi-level
// inheritance. Accept the marks of three subjects in base class. A class will be derived
// from the above mentioned class which includes a function to find the total marks
// obtained and another class derived from this class which calculates and displays the
// percentage of students.
// #include <iostream>
// using namespace std;
// class base
// {
//     public:
//    int sub1,sub2,sub3;
//    void setMarks(int s1,int s2,int s3)
//    {
//       sub1 = s1;
//       sub2 = s2;
//       sub3 = s3;
//    }
// };
// class derived : public base
// {
//    public:
//    int Tmarks;
//    void getTotalMarks()
//    {
//       Tmarks = sub1+sub2+sub3;
//       cout<<"Total Marks "<<Tmarks<<" out of 300."<<endl;
//    }
// };
// class Percentage : public derived
// {
//     public:
//     void getPercent()
//     {
//         int per = Tmarks/3;
//         cout<<"Percentage = "<<per<<"%"<<endl;
//     }
// };
// int main()
// {
//     Percentage p;
//     p.setMarks(50,50,50);
//     p.getTotalMarks();
//     p.getPercent();
//     return 0;
// }

// 4. Write a C++ program to design a base class Person (name, address, phone_no). Derive
// a class Employee (eno, ename) from Person. Derive a class Manager (designation,
// department name, basic-salary) from Employee. Write a menu driven program to:
// a. Accept all details of 'n' managers.
// b. Display manager having highest salary
// Output -
// #include <iostream>
// using namespace std;
// class Person
// {
//     public:
//     string name;
//     string address;
//     long long int phone_no;
// };
// class Employee : public Person
// {
//     public:
//     int eno;
//     string ename;
// };
// class Manager : public Employee
// {
//     public:
//     string design;
//     string depart;
//     int basic_salary;
//     void input()
//     {
//         cout<<"\n\n";
//         cout<<"--------------------------------"<<endl;
//         cout<<"Enter Employee No. : ";
//         cin>>eno;
//         cout<<"Enter name : ";
//         cin.get();
//         getline(cin,name);
//         cout<<"Enter Address : ";
//         cin.get();
//         getline(cin,address);
//         cout<<"Enter Phone No. : ";
//         cin>>phone_no;
//         cout<<"Enter Designation : ";
//         cin.get();
//         getline(cin,design);
//         cout<<"Enter Depaartment Name : ";
//         cin.get();
//         getline(cin,depart);
//         cout<<"Enter Basic Salary : ";
//         cin>>basic_salary;
//     }
// };
// int main()
// {
//     int n,max;string name;
//     cout<<"How many Managers do you want to enter?"<<endl;
//     cin>>n;
//     Manager m[n];
//     for (int i = 0; i < n; i++)
//     {
//         m[i].input();
//     }
//     for (int i = 0; i < n; i++)
//     {
//         max = m[0].basic_salary;
//         if (max < m[i].basic_salary)
//         {
//             max = m[i].basic_salary;
//             name = m[i].name;
//         }
//     }
//     cout<<"\n\nManager with Highest Salary id : "<<max<<endl<<"And, Manager Name is : "<<name<<endl;
//     return 0;
// }

// 5. Write a C++ program to define a base class Item (item-no, name, price). Derive a class
// Discounted-Item (discount-percent). A customer purchases 'n' items. Display the item-wise bill
// and total amount using appropriate format.
// Output -
// #include <iostream>
// using namespace std;
//     int total_price = 0;
//     int discoun_price = 0;
// class Item
// {
//     public:
//     int item_no;
//     float price;
//     string name;
// };
// class Discounted_Item : public Item
// {
//     public:
//     int discount_percent;
//     void input()
//     {
//         cout<<"Enter Item Name : ";
//         cin.get();
//         getline(cin,name);
//         cout<<"Enter Item No : ";
//         cin>>item_no;
//         cout<<"Enter Price : ";
//         cin>>price;
//         cout<<"Enter Discount Percent : ";
//         cin>>discount_percent;
//         cout<<"\n\n-------------------------"<<endl;
//         total_price = total_price + price;
//     }
//     void Show()
//     {
//         cout<<"Item Name : "<<name<<endl;
//         cout<<"Item No. : "<<item_no<<endl;
//         cout<<"Item Price : "<<price<<endl;
//         cout<<"Discount Percent : "<<discount_percent<<endl;
//         cout<<"Discounted Price : "<<(discount_percent*0.01)*price<<endl;
//         cout<<"\n----------------------------"<<endl;
//         discoun_price = discoun_price + (discount_percent*0.01)*price;
//         cout<<"Total Price : "<<total_price<<endl;
//         cout<<"Total Discount : "<<discoun_price;
//     }
// };
// int main()
// {
//     int n;
//     cout<<"How many items you want to enter? : ";
//     cin>>n;
//     Discounted_Item d[n];
//     for (int i = 0; i < n; i++)
//     {
//         d[i].input();
//     }
//     for (int i = 0; i < n; i++)
//     {
//         d[i].Show();
//     }

//     return 0;
// }

// 6. Write a C++ program to demonstrate how a common friend function can be used to
// exchange the private values of two classes. (Use call by reference method).
// #include <iostream>
// using namespace std;
// class B; //Forward Declaration
// class A
// {
//     int x = 5;
//   public:
//   void show()
//   {
//     cout<<"X = "<<x<<endl;
//   }
//   friend void swap(A &,B &);
// };
// class B
// {
//     int y = 10;
//   public:
//   void show()
//   {
//     cout<<"Y = "<<y<<endl;
//   }
//   friend void swap(A &,B &);
// };
// void swap(A &a,B &b)
// {
//    int temp = a.x;
//    a.x = b.y;
//    b.y = temp;
// }
// int main()
// {
//     A obj1;
//     B obj2;
//     swap(obj1,obj2);
//     obj1.show();
//     obj2.show();
//     return 0;
// }

// 7. Write class declarations and member function definitions for a C++ base class to
// represent an Employee (emp-code, name).
// Derive two classes as Fulltime (daily rate, number of days, salary) and Parttime (number
// of working hours, hourly rate, salary).
// Write a menu driven program to:
// 1. Accept the details of ‘n’ employees.
// 2. Display the details of ‘n’ employees.
// 3. Search a given Employee by emp-code.
// Output -
// #include <iostream>
// using namespace std;
// class Employee
// {
// public:
//   string name;
//   int emp_code;
//   void set()
//   {
//     cout << "Enter Name : ";
//     cin.get();
//     getline(cin, name);
//     cout << "Enter Your Code  : ";
//     cin >> emp_code;
//   }
// };
// class Fulltime : public Employee
// {
//   int daily_rate;
//   int no_of_days;
//   int salary;

// public:
//   void setdata()
//   {
//     cout << "Enter Your daily rate : ";
//     cin >> daily_rate;
//     cout << "Enter No of Days : ";
//     cin >> no_of_days;
//   }
//   void cal_salary()
//   {
//     salary = no_of_days * daily_rate;
//     cout << "Salary : " << salary << endl;
//   }
//   void getdata()
//   {
//     cout << "---------------------------------------\n";
//     cout << "Employee Number       :  " << emp_code << endl;
//     cout << "Employee Name         :  " << name << endl;
//     cout << "Salary                :    " << salary << endl;
//     cout << "Status                :  "
//          << "Fulltime" << endl;
//     cout << "---------------------------------------\n";
//   }
// };
// class Parttime : public Employee
// {
//   int no_of_working_hr, hourly_rate, salary;

// public:
//   void setdata()
//   {
//     cout << "Enter Your daily rate : ";
//     cin >> hourly_rate;
//     cout << "Enter No of Days      : ";
//     cin >> no_of_working_hr;
//   }
//   void cal_salary()
//   {
//     salary = no_of_working_hr * hourly_rate;
//     cout << "Salary : " << salary << endl;
//   }
//   void getdata()
//   {
//     cout << "---------------------------------------\n";
//     cout << "Employee Number     :    " << emp_code << endl;
//     cout << "Employee Name       :    " << name << endl;
//     cout << "Salary              :    " << salary << endl;
//     cout << "Status              :    Part Time" << endl;
//     cout << "---------------------------------------\n";
//   }
// };
// int main()
// {
//   int choice;
//   int var = 0;
//   int var1 = 0;
//   Fulltime f1[5];
//   Parttime p1[5];

//   do
//   {
//     cout << "\n1.Enter Record" << endl;
//     cout << "2.Display Record" << endl;
//     cout << "3.Search Record" << endl;
//     cout << "4.Quit" << endl;
//     cout << "\nEnter Your Choice : ";
//     cin >> choice;

//     switch (choice)
//     {
//     case 1:
//       int y;
//       cout << "\n1. Fulltime Employee";
//       cout << "\n2. Parttime Employee\n";
//       cout << "\n Enter Your Choice : ";
//       cin >> y;
//       switch (y)
//       {
//       case 1:
//         f1[var].set();
//         f1[var].setdata();
//         f1[var].cal_salary();
//         var++;
//         break;
//       case 2:
//         p1[var1].set();
//         p1[var1].setdata();
//         p1[var1].cal_salary();
//         var1++;
//       default:
//         cout << "Invalid Choice Try Again." << endl;
//         break;
//       }
//       break;
//     case 2:
//       for (int i = 0; i < var; i++)
//       {
//         f1[i].getdata();
//       }
//       for (int i = 0; i < var1; i++)
//       {
//         p1[i].getdata();
//       }
//       break;
//     case 3:
//       int a;
//       cout << "\nEnter Employee No. : ";
//       cin >> a;
//       for (int i = 0; i < var; i++)
//       {
//         if (f1[i].emp_code == a)
//         {
//           f1[i].getdata();
//         }
//       }
//       for (int i = 0; i < var1; i++)
//       {
//         if (p1[i].emp_code == a)
//         {
//           p1[i].getdata();
//         }
//       }
      
//       break;
//     default:
//       cout << "Invalid Choice Try Again." << endl;
//       break;
//     }

//   } while (choice == 4);
//   return 0;
// }

// 8 - In a bank, different customers have savings account. Some customers may have taken a
// loan from the bank. So bank always maintain information about bank depositors and borrowers.
// Design a Base class Customer (name, phone-number). Derive a class
// Depositor(accno, balance) from Customer.
// Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
// Write necessary member functions to read and display the details of ‘n’ customers.
// Output -
// #include <iostream>
// using namespace std;
// class customer
// {  
//   string name;
//   long long int ph_no;
//   public:
//   void set()
//   {
//     cout<<"Enter customer name        :  ";
//     cin.get();
//     getline(cin,name);
//     cout<<"Enter customer Phone No.   :  ";
//     cin>>ph_no;
//   }
//   void get()
//   {
//     cout<<"\n Details of Customer \n";
//     cout<<"------------------------------------------\n";
//     cout<<"Customer Name            :   "<<name<<endl;
//     cout<<"Customer Phone No        :   "<<ph_no<<endl;
//   }
// };
// class Depositor : public customer
// {
//   long long int accno;
//   int balance;
//   public: 
//   void setDataD()
//   {
//     cout<<"Enter Customer A/C No      :     ";
//     cin>>accno;
//     cout<<"Enter Balance              :     ";
//     cin>>balance;
//   }
//   void getDataD()
//   {
//     cout<<"Customer A/C No           :    "<<accno<<endl;
//     cout<<"Balance                   :    "<<balance<<endl;
//     cout<<"\n----------------------------------------"<<endl;
//   }
// };
// class Borrower : public Depositor
// {
//   int loan_no;
//   int loan_amt;
//   public:
//   void setDataB()
//   {
    
//     cout<<"Enter Loan-No        :  ";
//     cin>>loan_no;
//     cout<<"Enter Loan-Amount    :  ";
//     cin>>loan_amt;
//     cout<<"----------------------------\n";
//   }
//   void getDataB()
//   {
//     cout<<"Loan No                 :      "<<loan_no<<endl;
//     cout<<"Loan Amount             :      "<<loan_amt<<endl;
//     cout<<"----------------------------\n";
//   }
// };
// int main()
// {
//   Borrower *b1;
//   int n,i;
//   cout<<"\nEnter No. of Customer Details You Want  :  ";
//   cin>>n;
//   b1 = new Borrower[n];
//   for ( i = 0; i < n; i++)
//   {
//     b1[i].set();
//     b1[i].setDataD();
//     b1[i].setDataB();
//   }
//   for ( i = 0; i < n; i++)
//   {
//     b1[i].get();
//     b1[i].getDataD();
//     b1[i].getDataB();
//   }
  
//   return 0;
// }

// 9. Write a C++ program to implement the following class hierarchy:
// Student: id, name
// StudentExam (derived from Student): Marks of 6 subjects
// StudentResult (derived from StudentExam) : percentage
// Define appropriate functions to accept and display details.
// Create 'n' objects of the StudentResult class and display the marklist.
// Output -
// #include <iostream>
// using namespace std;
// class Student
// {
//   int id;
//   string name;
//   public:
//   void set()
//   {
//     cout<<"Enter Studnet ID      :     ";
//     cin>>id;
//     cout<<"Enter Student Name    :     ";
//     cin.get();
//     getline(cin,name);
//   }
//   void get()
//   {
//     cout<<"\n\n";
//     cout<<"---------------------------------------\n";
//     cout<<"***********Student MarkSheet***********\n";
//     cout<<"---------------------------------------\n";
//     cout<<"Roll No                  :    "<<id<<endl;
//     cout<<"Student Name             :    "<<name<<endl;
//   }
// };
// class StudentExam : Student
// {
//   public:
//   float m1,m2,m3,m4,m5,m6;
//   void setMarks()
//   {
//     set();
//     cout<<"Enter Marks for Subject 1     :      ";
//     cin>>m1;
//     cout<<"Enter Marks for Subject 2     :      ";
//     cin>>m2;
//     cout<<"Enter Marks for Subject 3     :      ";
//     cin>>m3;
//     cout<<"Enter Marks for Subject 4     :      ";
//     cin>>m4;
//     cout<<"Enter Marks for Subject 5     :      ";
//     cin>>m5;
//     cout<<"Enter Marks for Subject 6     :      ";
//     cin>>m6;
//   }
//   void getMarks()
//   {
//     get();
//     cout<<"\n\nMarks of Subject 1       :    "<<m1<<endl;
//     cout<<"Marks of Subject 2       :    "<<m2<<endl;
//     cout<<"Marks of Subject 3       :    "<<m3<<endl;
//     cout<<"Marks of Subject 4       :    "<<m4<<endl;
//     cout<<"Marks of Subject 5       :    "<<m5<<endl;
//     cout<<"Marks of Subject 6       :    "<<m6<<endl;
//   }
// };
// class StudentResult : public StudentExam
// {
//   float percentage;
//   public:
//   void getPercentage()
//   {
//     percentage = (m1+m2+m3+m4+m5+m6)/6;
//     cout<<"\n\nTotal Percentage         :    "<<percentage<<endl;
//     cout<<"---------------------------------------\n";
//   }

// };
// int main()
// {
//   int n;
 
//   cout<<"Enter No. of Students You Want?  :  ";
//   cin>>n;
//   cout<<"---------------------------------------\n";
//   StudentResult s[n];
//   for (int i = 0; i < n; i++)
//   {
//     s[i].setMarks();
//   }
//   for (int i = 0; i < n; i++)
//   {
//     s[i].getMarks();
//     s[i].getPercentage();
//   }
//   return 0;
// }

// 10. Consider two base classes
// worker(int code, char name, float salary),
// officer(float DA, HRA)
// class manger(float TA(is 10% of salary), gross salary) is derived from both base classes.
// Write necessary member functions.
// Output -
// #include <iostream>
// #include <cstring>
// using namespace std;
// class worker
// {
//   protected:
//   int code;
//   char name[30];
//   float salary;
//   public:
//   worker()
//   {

//   }
//   worker(int c,char *n,float s)
//   {
//     code = c;
//     strcpy(name,n);
//     salary = s;
//   }
//   void putw()
//   {
//     cout<<"\nCode          :   "<<code<<endl;
//     cout<<"Name          :   "<<name<<endl;
//     cout<<"Salary        :   "<<salary<<endl;
//   }
// };
// class officer
// {
//   protected:
//   float DA,HRA;
//   public:
//   officer(){}
//   officer(float d,float h)
//   {
//     DA = d;
//     HRA = h;
//   }
//   void puto()
//   {
//     cout<<"DA            :    "<<DA<<endl;
//     cout<<"HRA           :    "<<HRA<<endl;
//   }
// };
// class manager : public worker , public officer
// {
//  protected:
//   float TA,gross_salary;
//   public:
//   manager(){}
//   manager(int c,char *n,float s,float d,float h) : worker(c,n,s),officer(d,h)
//   {

//   }
//   void putm()
//   {
//     putw();
//     puto();
//     TA = 0.10*salary;
//     cout<<"TA            :   "<<TA<<endl;
//     gross_salary = DA + HRA + salary;
//     cout<<"Gross Salary  :   "<<gross_salary<<endl;
//   }
// };
// int main()
// {
//   int cnt,i;
//   cout<<"\n Enter Manager Count : ";
//   cin>>cnt;
//   manager *m;
//   m = new manager[cnt];
//   for ( i = 0; i < cnt; i++)
//   {
//     cout<<"\n Enter Worker Information for "<<i+1<<"\n";
//     cout<<"\n---------------------------------";
//     cout<<"\n Enter Code    :  ";
//     int c;
//     cin>>c;
//     cout<<"\n Enter name    :  ";
//     char n[200];
//     cin>>n;
//     cout<<"\n Enter Salary  :  ";
//     float s;
//     cin>>s;
//     cout<<"\n Enter DA      :   ";
//     float d;
//     cin>>d;
//     cout<<"\n Enter HRA     :   ";
//     float h;
//     cin>>h;
//     m[i] = manager(c,n,s,d,h);
//   }
//   for ( i = 0; i < cnt; i++)
//   {
//     cout<<"\n----------------------------------";
//     cout<<"\n Manager Information ";
//     cout<<"\n----------------------------------";
//     m[i].putm();
//   }
  
//   return 0;
// }