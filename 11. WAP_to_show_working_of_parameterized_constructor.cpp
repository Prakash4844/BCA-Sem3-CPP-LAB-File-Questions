/*
    WAP_to_show_working_of_parameterized_constructor.
*/
#include<iostream>
#include<string>
// using namespace std;

using std::cout;
using std::cin;
using std::string;

class students
{

    public:

    string Name;
    int rollno;
    int age;

    students(string x, int y, int z);


    void displaydata()
    {
        cout <<"\nStudent Rollno.: "<< rollno <<"\nStudent Name: "<<Name<<"\nStduent Age: "<<age;
    }

};

students::students(string x, int y, int z)
{
    Name= x;
    rollno= y;
    age = z;
}

int main()
{
    students one("Prakash", 28, 19 ),two("kavya", 47, 18 );
    // cout << "Enter stduent Roll no.: ";
    // cin >> one.rollno;
    // cout << "Enter Student Name: ";
    // cin >> one.Name;
    // cout << "Enter student Age: "; 
    // cin >> one.age;
    
    one.displaydata();
    two.displaydata();
        
    return 0;
}

