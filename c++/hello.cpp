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

#if 1
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
        //cout << "Enter name: ";
        cout << "Enter address: ";
        cin >> address;
        getline(cin, name);
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
