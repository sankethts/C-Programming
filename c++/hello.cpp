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
    Employee emp2;
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

#if 0
//18-05-2026
#include<string.h>
//Multilevel Inheritance
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
//19-05-2026
//constructor invocation explicitly
#include<iostream>
using namespace std;
class Polygon
{
    protected:
    int width;
    int height;
    public:
    Polygon(int a, int b) : width(a), height(b)//we can assign value like this also
    {
        
    }
    void display()
    {
        cout << width << " " << height << endl;
    }
};
int main()
{
    Polygon P = Polygon(4, 20);
    P.display();
    return 0;
}
#endif

#if 0
//19-05-2026
//dynamic object creation using new
#include<iostream>
using namespace std;
class Polygon
{
    protected:
    int width;
    int height;
    public:
    Polygon(int a, int b) : width(a), height(b)//we can assign value like this also
    {
        cout << "Constructor is called\n";
    }
    void display()
    {
        cout << width << " " << height << endl;
    }
    ~Polygon()
    {
        cout << "Destructor is called\n";
    }
};
int main()
{
    Polygon *P = new Polygon(4, 20);
    P->display();
    delete P;
    return 0;
}
#endif

#if 0
//19-05-2026
//dynamic object creation using malloc
#include<stdlib.h>
#include<iostream>
using namespace std;
class Polygon
{
    protected:
    int width;
    int height;
    public:
    Polygon(int a, int b) : width(a), height(b)//we can assign value like this also
    {
        cout << "Constructor is called\n";
    }
    void display()
    {
        cout << width << " " << height << endl;
    }
    ~Polygon()
    {
        cout << "Destructor is called\n";
    }
};
int main()
{
    Polygon *P = (Polygon *)malloc(sizeof(Polygon));//malloc will not call constructor and destructor
    P->display();
    free(P);//not call destructor
    return 0;
}
#endif

#if 0
//19-05-2026
//pointer to base class
#include<stdlib.h>
#include<iostream>
using namespace std;
class Polygon 
{
    protected:
    int width, height;
    public:
    void set_values(int a, int b)
    {
        width=a; height=b;
    }
};
class Rectangle: public Polygon 
{
    public:
    int area()
    {
        return width*height;
    }
}; 
class Triangle: public Polygon 
{
    public:
    int area()
    {
        return width*height/2;
    }
};
int main ()
{
    Rectangle rect;
    Triangle trgl;
    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &trgl;
    ppoly1->set_values (4,5);
    ppoly2->set_values (4,5);
    cout << rect.area() << endl;
    cout << trgl.area() << endl;
    return 0; 
}
#endif

#if 0
//function overloading
using namespace std;
int add(int a, int b)
{
    return a+b;
}
double add(double a, int b)
{
    return a+b;
}
double add(int a, double b)
{
    return a+b;
}
string add(string s1, string s2)
{
    return s1+s2;
}
int main()
{
    cout << add(5, 10) << endl;
    cout << add(5.5, 10) << endl;
    cout << add(5, 10.5) << endl;
    cout << add("sanke", "th ts") << endl;
    return 0;
}
#endif

#if 0
//operator overloading
//unary
using namespace std;
class Distance
{
    int inches, feet;
    public:
    Distance(int i=0, int f=0) : inches(i), feet(f)
    {

    }
    void display()
    {
        cout << inches << " " << feet << endl;
    }
    void operator -() 
    {
        inches = -inches;
        feet = -feet;
    }
};
int main()
{
    Distance d1(11,0), d2(0, 11);
    -d1;
    d1.display();
    -d2;
    d2.display();
    return 0;
}
#endif

#if 0
//operator overloading
//unary
using namespace std;
class Distance
{
    int feet, inches;
    public:
    Distance(int f=0, int i=0) : feet(f), inches(i)
    {

    }
    void display()
    {
        cout << "F: " << feet << " I: " << inches << endl;
    }
    void operator ++() 
    {
        feet += 2;
        inches += 2;
    }
    void operator ++(int)
    {
        feet += 2;
        inches += 2;
    }
};
int main()
{
    Distance d1(11,10), d2(-5, 11);
    ++d1;
    d1.display();
    d1++;
    d1.display();
    d2++;
    d2.display();
    return 0;
}
#endif

#if 0       
//20-05-2026
//operator overloading
//binary
using namespace std;
class Binary
{
    int i, i1;
    public:
    Binary(int i=0, int f=0) : i(i), i1(f)
    {

    }
    void display()
    {
        cout << i << " " << i1 << endl;
    }
    void operator +(int a) 
    {
        i += a;
        i1 += a;
    }
    void operator +(Binary b)
    {
        i += b.i;
        i1 += b.i1;
    }
};
int main()
{
    Binary b1(11,10), b2(-5, 11);
    int a=10;
    b1+a;
    b1.display();
    b1+b2;
    b1.display();
    b2.display();
    return 0;
}
#endif

#if 0
//function overriding
//without virtual function
using namespace std;
class BaseClass
{
    public:
    void disp()
    {
        cout<<"Function of Parent Class\n";
    }
};
class DerivedClass: public BaseClass
{
    public:
    void disp()
    {
        cout<<"Function of Child Class\n";
    }
};
int main()
{
    BaseClass obj = DerivedClass();
    obj.disp();
    return 0;
}
#endif

#if 0
//function overriding
//using pointer
//without virtual function
using namespace std;
class BaseClass
{
    public:
    void disp()
    {
        cout<<"Function of Parent Class\n";
    }
};
class DerivedClass: public BaseClass
{
    public:
    void disp()
    {
        cout<<"Function of Child Class\n";
    }
};
int main()
{
    BaseClass *obj = new DerivedClass();
    obj->disp();
    return 0;
}
#endif

#if 0
//function overriding
//with virtual function
using namespace std;
class BaseClass
{
    public:
    virtual void disp()
    {
        cout<<"Function of Parent Class\n";
    }
};
class DerivedClass: public BaseClass
{
    public:
    void disp()
    {
        cout<<"Function of Child Class\n";
    }
};
int main()
{
    BaseClass *obj = new DerivedClass();
    obj->disp();
    return 0;
}
#endif

#if 0
//function overriding
//with pure virtual function
using namespace std;
class BaseClass
{
    public:
    virtual void disp();
};
class DerivedClass: public BaseClass
{
    public:
    void disp()
    {
        cout<<"Function of Child Class\n";
    }
};
int main()
{
    BaseClass *obj = new DerivedClass();
    obj->disp();
    return 0;
}
#endif

#if 0
//abstract class
#include <iostream>
using namespace std;
class Polygon
{
    protected:
    int width, height;
    string shape_name;
    public:
    Polygon() 
    {

    }
    Polygon(int a, int b, string name) : width(a), height(b), shape_name(name) 
    { 

    }
    string get_name(void) 
    {
        return shape_name;
    }
    // A pure virtual functions
    virtual int get_area(void) = 0;
    void print_area(void) 
    {
        cout << "Area of " << this->get_name() << " is "<< this->get_area() << endl;
    }
};
class Rectangle: public Polygon
{
    public:
    Rectangle(int a, int b, string name) : Polygon(a, b, name) 
    { 

    }
    int get_area(void)
    {
        return width * height;
    }
};
class Triangle: public Polygon
{
    public:
    Triangle(int a, int b, string name) : Polygon(a, b, name) 
    { 
        
    }
    int get_area(void)
    {
        return width * height / 2;
    }
};
int main()
{
    Rectangle rect (4, 5, "Rectangle");
    Triangle trgl (4, 5, "Triangle");
    Polygon *shapes[] = {&rect, &trgl};
    for (int i = 0; i < 2; i++)
    {
        shapes[i]->print_area();
    }
    return 0;
}
#endif

#if 0
//friend() we can access private members of class outside class
using namespace std;
class Employee
{
    int id;
    string name;
    string address;
    public: Employee()
    {
        id=123;
        name="sanketh";
        address="Bangalore";
    }
    friend void print_data(Employee emp1);
};
void print_data(Employee emp1)
{
    cout << emp1.id << endl;
    cout << emp1.name << endl;
    cout << emp1.address << endl;
}
int main()
{
    Employee emp1;
    print_data(emp1);
    return 0;
}
#endif

#if 0
//ambiguity in multiple inheritance
//can overcome using scope resolution operator
using namespace std;
class A
{
    public:
    int x;
    void disp()
    {
        cout << x << endl;
    }
};
class B: public A
{
    public :
    B()
    {
        x=123;
    }
};
class C: public A
{
    public:
    C()
    {
        x=987;
    }
};
class D: public B, public C
{

};
int main()
{
    D obj;
    //obj.disp();
    obj.B::disp();
    obj.C::disp();
    return 0;
}
#endif

#if 0
using namespace std;
//namespace
int x=10;
int main()
{
    double x=10.5;
    cout << x << endl;
}
#endif

#if 0
//namespace
using namespace std;
namespace global
{
    int x=10;
}
int main()
{
    double x=10.5;
    cout << x << endl;
    cout << global::x << endl;
}
#endif

#if 0
//namespace
using namespace std;
int x=10;
int main()
{
    double x=10.5;
    {
        extern int x;
        cout << x << endl;
    }
    
}
#endif

#if 0
//namespace
using namespace std;
namespace first
{
int x=10;
}
namespace second
{
    double x=12.234;
}
int main()
{
    double x=10.5;
    cout << x << endl;
    cout << first::x << endl;
    cout << second::x << endl;
}
#endif

#if 0
//namespace
using namespace std;
namespace first
{
    int x=10;
}
namespace second
{
    double x=12.234;
}
int main()
{
    //double x=10.5;
    using namespace first;
    cout << x << endl;
    // cout << first::x << endl;
    // cout << second::x << endl;
}
#endif

#if 0
//namespace
using namespace std;
namespace myspace
{
    class employee
    {
        //public: //error
        int x;
        string name;
    };
}
class employee
{
    public:
    int x;
    string name;
};
int main()
{
    employee e1;
    myspace::employee e2;
    e1.name="tingu";
    e2.name="pingu";
    cout << e1.name << endl;
    cout << e2.name << endl;
}
#endif

#if 0
//namespace
using namespace std;
namespace myspace
{
    class employee
    {
        //public: //error
        int x;
        string name;
    };
}
class employee
{
    public:
    int x;
    string name;
};
int main()
{
    employee e1;
    myspace::employee e2;
    e1.name="tingu";
    e2.name="pingu";
    cout << e1.name << endl;
    cout << e2.name << endl;
}
#endif

#if 0
//function template
using namespace std;
template <typename T>
T Max (T a, T b)// 'max' will be error, because max() is built-in()
{
    return b < a ? a : b;
}
int main()
{
    cout << Max(10, 20) << endl;
    cout << Max(33.5, 20.2) << endl;
    cout << Max(3.5, 10.2) << endl;
    cout << Max('A', 'B') << endl;
    cout << Max('Z', 'Y') << endl;
    return 0;
}
#endif

#if 0
//class template
using namespace std;
template <class T>
class MyTemplate
{
    T element;
    public:
    MyTemplate (T arg)
    {
        element=arg;
    }
    T divideBy2 ()
    {
        return element/2;
    }
};
int main()
{
    MyTemplate <int>m(10);
    cout<<"division: "<<m.divideBy2()<<endl;
    MyTemplate <float>m1(10.50f);
    cout<<"division: "<<m1.divideBy2()<<endl;
    return 0;
}
#endif

#if 0
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two values: ", cin >> a >> b;
    //cin >> a >> b;
    try
    {
        if (b != 0) 
        {
            cout << "Res: " << a / b << endl;
        }
        else 
        {
            throw b;
        }
    }
    //cout << b << endl; //error
    catch(int x)
    {
        cout << "Caught DIVIDE_BY_ZERO ERROR" << "b: "<< x << endl;
    }
}
#endif

#if 0
//strings
using namespace std;
int main()
{
    string s = "HELLO";
    string s1 = "HELLO";
    if(s.compare(s1) == 0)
     cout << s << " is equal to " << s1 << endl;
    else
     cout << s << " is not equal to " << s1 << endl;
    s.append(" WORLD!");
    cout << s << endl;
    printf("%s\n", s.c_str());
    if(s.compare(s1) == 0)
     cout << s << " is equal to " << s1 << endl;
    else
     cout << s << " is not equal to " << s1 << endl;
    return 0;
}
#endif

#if 0
//vecor
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    vector <int> :: iterator it;
    v.push_back(5);
    while(v.back() > 0)
     v.push_back(v.back() - 1);

    for(it = v.begin(); it != v.end(); ++it)
     cout << *it << ' '; cout << endl;

    for(int i=0; i<v.size(); ++i)
      cout << v.at(i) << ' '; cout << endl;

    while(!v.empty())
    {
     cout << v.back() << ' '; v.pop_back();
    }
    cout << endl;
    return 0;
}
#endif

#if 0
//list
#include<list>
using namespace std;
int main()
{
    list <int> li;
    list <int> :: iterator it;
    li.push_back(4);
    li.push_back(5);
    li.push_front(3);
    li.push_front(5);
    it = li.begin();
    li.insert(it, 1);
    cout << "All elements of list li are: " << endl;

    for(it = li.begin(); it != li.end(); ++it)
     cout << *it << ' '; cout << endl;

    li.reverse();
    cout << "All elements of list li are after reversing:" << endl;
    for(it=li.begin(); it!=li.end(); ++it)
      cout << *it << ' '; cout << endl;
    
    li.remove(5);
    cout << "Elements after removing all occurence of 5 from list" << endl;
    for(it=li.begin(); it!=li.end(); ++it)
      cout << *it << ' '; cout << endl;

    li.pop_back();
    li.pop_front();
    return 0;
}
#endif

#if 0
//pair
#include<utility>//without this header file, i am getting output, research it
using namespace std;
int main()
{
    pair <int, char> p;
    pair <int, char> p1(2, 'b');
    p=make_pair(1, 'a');
    cout << p.first << ' ' << p.second << endl;
    cout << p1.first << ' ' << p1.second << endl;
    return 0;
}
#endif

#if 0
//set
#include<set>
using namespace std;
int main()
{
    set <int> s;
    set <int> :: iterator it;
    int a[]={3,5,2,1,5,4};
    for(int i=0;i<6; i++)
     s.insert(a[i]);

    for(it=s.begin(); it != s.end(); it++)
     cout << *it << ' '; cout << endl;
    return 0;
}
#endif

#if 0
//map
#include<utility>
#include<map>//mp['key]=value
using namespace std;
int main()
{
    map <char, int> mp;
    mp['b']=10;
    mp['x']=5;
    mp['c']=9;
    mp['t']=21;
    mp['a']=19;
    mp['n']=34;
    mp['z']=1;
    map <char, int> :: iterator it;

    for(it=mp.begin(); it != mp.end(); it++)
     cout << it->first << "->" << it->second << endl;
    return 0;
}
#endif