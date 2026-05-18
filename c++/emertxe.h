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
        cout << "Address: "<< address << endl << endl;
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
        cout << "Rank: "<< rank << endl << endl;
    }
};
class Candidate: public Emertxe
{
    string course;
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
        cout << "Year: "<< year << endl;
    }
};