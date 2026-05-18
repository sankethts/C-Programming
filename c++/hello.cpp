#include<iostream>
#if 0
int main()
{
    std::cout<<"Hello world\n";
    return 0;
}
#endif

#if 0
using namespace std;
int main()
{
    cout<<"Hello world\n";
    return 0;

}
#endif

#if 0
using namespace std;
int main()
{
    cout<<"HEllo world"<<endl;
    return 0;
}
#endif

#if 0
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    cout << x << " " << y << endl;
    return 0;
}
#endif

#if 0
//#include<stdio.h>
int main()
{
    printf("HEllo world\n");
    return 0;
}
#endif

#if 0
#include<stdio.h>
void main()
{
    printf("HEllo world\n");
    return ;
}
#endif

#if 0
using namespace std;
class Employee
{
    public :
    int id;
    string name;
    string address;

    void get_id()
    {
        cout << "Enter id: ";
        cin >> id;
    }
    void get_name()
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void get_address()
    {
        cout << "Enter address: ";
        cin >> address;
    }
};

int main()
{
    Employee emp1;//not required writing class employee as we write in c, struct student 
    emp1.get_id();
    emp1.get_name();
    emp1.get_address();

    cout << emp1.id << endl;
    cout << emp1.name << endl;
    cout << emp1.address << endl;
    return 0;
}
#endif

#if 0
using namespace std;
class Employee
{
    public :
    int id;
    string name;
    string address;

    void get_data()
    {
        cout << "Enter id: ";
        cin >> id;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        cin >> address;
    }
    void print_data()
    {
        cout << id << endl;
        cout << name << endl;
        cout << address << endl;
    }
};

int main()
{
    Employee emp1;//not required writing class employee as we write in c, struct student 
    emp1.get_data();
    emp1.print_data();
    return 0;
}
#endif

#if 0
using namespace std;
class Employee
{
    public :
    int id;
    string name;
    string address;

    void get_data()
    {
        cout << "Enter id: ";
        cin >> id;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        cin >> address;
    }
    void print_data();
};
inline void Employee :: print_data()//we can write inline also, requesting complier, wherever function call is there, replace function definition with that, and it is upto the compiler
    {
        cout << id << endl;
        cout << name << endl;
        cout << address << endl;
    }

int main()
{
    Employee emp1;//not required writing class employee as we write in c, struct student 
    emp1.get_data();
    emp1.print_data();
    return 0;
}
#endif

#if 0
using namespace std;
class Employee
{
    private :
        int id;
    public :
        string name;
        string address;

    void get_data()
    {
        cout << "Enter id: ";
        cin >> id;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, address);
        
    }
    void print_data()
    {
        cout << id << endl;
        cout << name << endl;
        cout << address << endl;
    }
};

int main()
{
    Employee emp1;//not required writing class employee as we write in c, struct student 
    //cin >> emp1.name;
    emp1.get_data();
    emp1.print_data();
    return 0;
}
#endif

#if 0
//class v/s struct
//13/05/26
using namespace std;
class cEmployee
{
    int id;
    string name;
    string address;
};

struct sEmployee
{
    int id;
    string name;
    string address;
};

int main()
{
    sEmployee emp1;
    cEmployee emp2;
    emp1.name="tingu";
    //emp2.name="pingu";
    return 0;
}
#endif

#if 0
//class v/s struct
using namespace std;
class cEmployee
{
    int id;
    public:
    string name;
    string address;
};

struct sEmployee
{
    int id;
    private:
    string name;
    string address;
};

int main()
{
    sEmployee emp1;
    cEmployee emp2;
    //emp1.name="tingu";
    emp2.name="pingu";
    cout << emp2.name << endl;
    return 0;
}
#endif

#if 0
//class v/s struct
using namespace std;
class cEmployee
{
    int id;
    string name;
    string address;
};

struct sEmployee
{
    int id;
    string name;
    string address;
};

int main()
{
    sEmployee emp1;
    cEmployee emp2;
    //cout << sizeof(sEmployee) << endl;
    cout << sizeof(emp1) << endl;
    cout << sizeof(emp2) << endl;
    cout << sizeof(string) << endl;
    return 0;
}
#endif

#if 0
//class v/s struct
using namespace std;
class cEmp
{

};

struct sEmp
{

};

int main()
{
    cout << sizeof(sEmp) << endl;//1
    cout << sizeof(cEmp) << endl;//1
    return 0;
}
#endif

#if 0
//reference variable
using namespace std;
int main()
{
    int num1=10, num2=20;
    int &ref = num1;
    cout << num1 << " " << num2 << " " << ref << endl;
    ref = 123;
    cout << num1 << " " << num2 << " " << ref << endl;
    ref = num2;
    cout << num1 << " " << num2 << " " << ref << endl;
    
    return 0;
}
#endif

#if 0
//reference variable
using namespace std;
int main()
{
    int num1=10, num2=20;
    int &ref;
    ref = num1;//error
    cout << num1 << " " << num2 << " " << ref << endl;
    ref = 123;
    cout << num1 << " " << num2 << " " << ref << endl;
    ref = num2;
    cout << num1 << " " << num2 << " " << ref << endl;
    
    return 0;
}
#endif

#if 0
//constructor
using namespace std;
class Employee
{
    public:
    int id;
    string name;
    string address;
    Employee()
    {
        ;
    }
};
int main()
{
    Employee emp;

    cout << emp.id << endl;
    cout << emp.name << endl;
    cout << emp.address << endl;
    return 0;
}
#endif

#if 0
//constructor
using namespace std;
class Employee
{
    public:
    int id;
    string name;
    string address;
    Employee()
    {
        cout << "Constructor is called" << endl;
        id = 1111;
        name = "sanketh";
        address = "Shivamogga";
    }
};
int main()
{
    Employee emp;

    cout << emp.id << endl;
    cout << emp.name << endl;
    cout << emp.address << endl;
    return 0;
}
#endif


#if 0
// default constructor
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    Employee()
    {
        cout << "Constructor is called" << endl;
        id = 1111;
        name = (char *)malloc(sizeof(char)*10);//in g++, we have to do typecast
    }
};
int main()
{
    Employee emp1;

    cout << emp1.id << endl;
    strcpy(emp1.name, "sanketh");
    cout << emp1.name << endl;
    return 0;
}
#endif

#if 0
// default constructor
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    Employee()
    {
        cout << "Constructor is called" << endl;
        id = 1111;
        cout << id << endl;
        name = (char *)malloc(sizeof(char)*10);//in g++, we have to do typecast
        strcpy(name, "sanketh");
        cout << name << endl;
    }
};
int main()
{
    Employee emp1;

    // cout << emp1.id << endl;
    // strcpy(emp1.name, "sanketh");
    // cout << emp1.name << endl;
    return 0;
}
#endif

#if 0
// Parameterized constructor
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    Employee(int x, char *str)
    {
        cout << "Constructor is called" << endl;
        id = x;
        name = (char *)malloc(sizeof(char)*10);
        strcpy(name, str);
    }
};
int main()
{
    Employee emp1(123, (char *)"sanketh");

    cout << emp1.id << endl;
    cout << emp1.name << endl;
    return 0;
}
#endif

#if 0
// Parameterized constructor
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    Employee(int id, char *name)//using same name as member of class, leads to some wrong output, not error
    {
        cout << "Constructor is called" << endl;
        id = id;
        name = (char *)malloc(sizeof(char)*10);
        strcpy(name, name);
    }
};
int main()
{
    Employee emp1(123, (char *)"sanketh");

    cout << emp1.id << endl;
    cout << emp1.name << endl;
    return 0;
}
#endif

#if 0
// Parameterized constructor using this pointer
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    Employee(int id, char *name)
    {
        cout << "Constructor is called" << endl;
        this->id = id;
        this->name = (char *)malloc(sizeof(char)*10);
        strcpy(this->name, name);
    }
};
int main()
{
    Employee emp1(123, (char *)"sanketh");

    cout << emp1.id << endl;
    cout << emp1.name << endl;
    return 0;
}
#endif

#if 0
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    Employee(int id, char *name)
    {
        cout << "Constructor is called" << endl;
        this->id = id;
        this->name = (char *)malloc(sizeof(char)*10);
        strcpy(this->name, name);
    }
};
int main()
{
    Employee emp1(123, (char *)"sanketh");
    Employee emp2;//this gives error, so write empty constructor function
    cout << emp1.id << endl;
    cout << emp1.name << endl << endl;
    cout << emp2.id << endl;
    cout << emp2.name << endl;
    return 0;
}
#endif

#if 0
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    
    Employee(int id, char *name)
    {
        cout << "Constructor is called" << endl;
        this->id = id;
        this->name = (char *)malloc(sizeof(char)*10);
        strcpy(this->name, name);
    }
    Employee()
    {
        ;
    }
};

int main()
{
    Employee emp1(123, (char *)"sanketh");
    Employee emp2;//this gives error, so write empty constructor function
    cout << emp1.id << endl;
    cout << emp1.name << endl << endl;
    cout << emp2.id << endl;
    cout << emp2.name << endl;
    return 0;
}
#endif

#if 0
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    
    Employee(int x, char *str)
    {
        cout << "Constructor with 2 arg" << endl;
        id = x;
        name = (char *)malloc(sizeof(char)*10);
        strcpy(name, str);
    }
    Employee()
    {
        cout << "Constructor with 0 arg" << endl;
    }
    Employee(int x)
    {
        cout << "Constructor with 1 arg" << endl; 
        id = x;
    }
};

int main()
{
    Employee emp1(123, (char *)"sanketh");
    Employee emp2, emp3(999);//this gives error, so write empty constructor function
    cout << emp1.id << endl;
    cout << emp1.name << endl << endl;
    cout << emp2.id << endl;
    //cout << emp2.name << endl << endl;
    cout << emp3.id << endl;
    cout << emp3.name << endl;
    return 0;
}
#endif

#if 0
// Constructor Overloading
// with two different constructors
// of class name
#include<string.h>
using namespace std;

class construct
{
    public:
    float area;
    // Constructor with no parameters
    construct()
    {
        cout<<"Constructor with zero args\n";
        area = 0;
    }
    // Constructor with two parameters
    construct(int a, int b)
    {
        cout<<"Constructor with two args\n";
        area = a * b;
    }
    void disp()
    {
        cout<< area<< endl;
    }
}; 

int main()
{
    
    construct o;
    construct o2( 10, 20);
    o.disp();
    o2.disp();
    return 1;
} 
#endif

#if 0
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    
    Employee(int x, char *str)
    {
        cout << "Constructor is called" << endl;
        id = x;
        name = (char *)malloc(sizeof(char)*10);
        strcpy(name, str);
    }
    ~Employee()
    {
        cout << "Destructor is called" << endl; 
        free(name);
    }
};

int main()
{
    Employee emp1(123, (char *)"sanketh");
    cout << emp1.id << endl;
    cout << emp1.name << endl << endl;
    return 0;
}
#endif

#if 0
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    
    Employee()
    {
        cout << "Constructor is called" << endl;
    }
    ~Employee()
    {
        cout << "Destructor is called" << endl; 
    }
};

int main()
{
    Employee emp1, emp2;
   
    return 0;
}
#endif

#if 0
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    
    Employee()
    {
        cout << "Constructor is called" << endl;
    }
    ~Employee()
    {
        cout << "Destructor is called" << endl; 
    }
};
void my_func()
{
    cout << "sanketh\n";
}
int main()
{
    Employee emp1, emp2;
    my_func();
    return 0;
}
#endif

#if 0
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    
    Employee()
    {
        cout << "Constructor is called" << endl;
    }
    ~Employee()
    {
        cout << "Destructor is called" << endl; 
    }
};
void my_func(Employee e)//there are 3 objects, so it will call 3 times destructor
{
    cout << "sanketh\n";
}
int main()
{
    Employee emp1, emp2;
    my_func(emp1);//this will call copy constructor internally
    my_func(emp1);
    return 0;
}
#endif

#if 0
#include<string.h>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    
    Employee()
    {
        cout << "Constructor is called" << endl;
    }
    Employee(const Employee &r)
    {
        cout << "Copy Constructor is called" << endl;
    }
    ~Employee()
    {
        cout << "Destructor is called" << endl; 
    }
};
void my_func(Employee e)//there are 3 objects, so it will call 3 times destructor
{
    cout << "sanketh\n";
}
int main()
{
    Employee emp1, emp2;
    my_func(emp1);//this will call copy constructor
    return 0;
}
#endif

#if 0
//15-05-2026
#include <cstring>
using namespace std;
class Employee
{
    public:
    int id;
    char *name;
    Employee(int id);
    Employee(int id, char *s);
    ~Employee(void);
};
Employee::Employee(int i, char *s)
{
    id = i;
    name = (char *)malloc(sizeof(char)*10);
    strcpy(name, s);
}
Employee::Employee(int i)
{
    id = i;
}
Employee::~Employee(void)
{
    free(name);
}
int main()
{
    Employee e1(10), e2(11, (char *) "Tingu");
    cout << "ID: " << e1.id << endl;
    //cout << "Name: " << e1.name << endl;
    cout << "ID: " << e2.id << endl;
    cout << "Name: " << e2.name << endl;
    return 0;
}
#endif

#if 0
//15/05/2026
#include <cstring>
using namespace std;
int main()
{
    int *ptr;
    ptr=new int;
    cout << *ptr << endl;
    delete ptr;
    return 0;

}
#endif

#if 0
//15/05/26
#include <cstring>
using namespace std;
int main()
{
    int *ptr;
    ptr=new int(10);
    cout << *ptr << endl;
    delete ptr;
    return 0;

}
#endif

#if 0
//15/05/26
#include <cstring>
using namespace std;
int main()
{
    int *ptr;
    ptr=new int[3]{11,22,33};
    cout << ptr[2] << endl;
    cout << ptr[1] << endl;
    cout << ptr[0] << endl;
    delete ptr;
    return 0;

}
#endif

#if 0
//15/05/26
#include <cstring>
using namespace std;
int main()
{
    int *ptr;
    ptr=new 4; //error, only mention datatype
    cout << *ptr << endl;
    delete ptr;
    return 0;

}
#endif

#if 0
//Encapsulation
using namespace std;
class Employee
{
    int id; // This member can be accessed with only get and set function since its
            // private, hence we can say its encapsulated
    public:
    int create_id() // Getter
    { 
        return id;
    }
    void set_id(int id) // Setter
    { 
        this->id = id;
    }
};
int main()
{
    Employee e;
    e.create_id(10);
    cout << "The ID is " << e.get_id() << endl;
    return 0;
}
#endif

#if 0
#include<string.h>
//Abstraction
using namespace std;
class Employee
{
    int id; 
    char *name;

    public:
    Employee(int id, char *s);
    ~Employee(void);
    int get_id(void);
    char *get_name(void);
};
int Employee :: get_id(void)
{
    return id;
}
char *Employee :: get_name(void)
{
    return name;
}
Employee::Employee(int i, char *s)
{
    id=i;
    name=new char[10];
    strcpy(name, s);
}
Employee :: ~Employee(void)
{
    delete name;
}
int main()
{
    Employee e(11, (char *)"Tingu");
    // Cannot access the members directly
    // This, we had seen in the initial
    // examples, Please refer 002_example.cpp
    cout << "The ID is " << e.get_id() << endl;
    cout << "The Name is " << e.get_name() << endl;
    return 0;
}
#endif

#if 0
#include<string.h>
//Inheritance
using namespace std;
class Parent
{
    int id; 
    float f;

    public:
        Parent()
        {
            id=123;
            f=12.23;
        }
        void display()
        {
            cout << id << " " << f << endl;
        }
};
class Child : public Parent
{

};

int main()
{
    Parent p;
    cout << sizeof(p) << endl;
    Child c;
    cout << sizeof(c) << endl;
    c.display();
    return 0;
}
#endif

#if 0
#include<string.h>
//Inheritance, protected
using namespace std;
class Parent
{
    int id; 
    protected:
        float f;

    public:
        Parent()
        {
            id=123;
            f=12.23;
        }
        void display()
        {
            cout << id << " " << f << endl;
        }
};
class Child : public Parent
{
    public:
        void disp()
        {
            //cout << id << endl;
            cout << f << endl;
        }

};

int main()
{
    Parent p;
    p.display();
    Child c;
    c.disp();
    return 0;
}
#endif

#if 0
#include<string.h>
//Inheritance, constructor, destructor
using namespace std;
class Parent
{
    public:
        Parent()
        {
            cout << " Parent Constructor " << endl;
        }
        ~Parent()
        {
            cout << " Parent Destructor " << endl;
        }
};
class Child : public Parent
{
    public:
        Child()
        {
            cout << "Child Constructor" << endl;
        }
        ~Child()
        {
            cout << "Child Destructor" << endl;
        }

};

int main()
{
    Parent p;
    Child c;
    return 0;
}
#endif

#if 1
//18-05-2026
#include<string.h>
//MultilevelInheritance
using namespace std;
class A
{
    public:
        A()
        {
            cout << "A Constructor" << endl;
        }
        ~A()
        {
            cout << "A Destructor" << endl;
        }

};
class B : public A
{
    public:
        B()
        {
            cout << "B Constructor" << endl;
        }
        ~B()
        {
            cout << "B Destructor" << endl;
        }
};
class C : public B
{
    public:
        C()
        {
            cout << "C Constructor" << endl;
        }
        ~C()
        {
            cout << "C Destructor" << endl;
        }
};

int main()
{
    A a;
    B b;
    C c;
    return 0;
}
#endif

#if 0
#include<iostream>
using namespace std;
class Emertxe
{
    protected:
    int id;
    string name;
    string address;
    public:
    Emertxe(int i, string n, string a)
    {
        id=i;
        name=n;
        address=a;
    }
    void display()
    {
        cout << "Id: "<< id << endl;
        cout << "Name: "<< name << endl;
        cout << "Address: "<< address << endl;
    }
};
class Mentor: public Emertxe
{
    string sub;
    string rank;
    public:
    Mentor(int i, string n, string a, string sb, string rn): Emertxe(i, n, a)
    {
        sub=sb;
        rank=rn;
    }
    void display()
    {
        cout << "Id: "<< id << endl;
        cout << "Name: "<< name << endl;
        cout << "Address: "<< address << endl;
        cout << "Sub: "<< sub << endl;
        cout << "Rank: "<< rank << endl;
    }
};
class Candidate: public Emertxe
{
    string cource;
    int year;
    public:
    Candidate(int i, string n, string a, string crc, int yr): Emertxe(i, n, a)
    {
        course=crc;
        year=yr;
    }
    void display()
    {
        cout << "Id: "<< id << endl;
        cout << "Name: "<< name << endl;
        cout << "Address: "<< address << endl;
        cout << "Course: "<< course << endl;
        cout << "Year: "<< yearr << endl;
    }
};
#endif