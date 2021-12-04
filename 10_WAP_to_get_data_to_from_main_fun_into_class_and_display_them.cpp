/*
    WAP create a class student take public data members rollno, name and age and enter these data from main function.
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


    void displaydata()
    {
        cout <<"Student Rollno.: "<< rollno <<"\nStudent Name: "<<Name<<"\nStduent Age: "<<age;
    }

};

int main()
{
    students one;
    cout << "Enter stduent Roll no.: ";
    cin >> one.rollno;
    cout << "Enter Student Name: ";
    cin >> one.Name;
    cout << "Enter student Age: "; 
    cin >> one.age;
    // one.getdata();
    one.displaydata();
        
    return 0;
}