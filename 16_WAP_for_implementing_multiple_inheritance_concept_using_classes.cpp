/*
    WAP_for_implementing_multiple_inheritance_concept_using_classes.
*/
#include<iostream>
#include<string>
// using namespace std;

using std::cout;
using std::cin;
using std::string;

class teacher
{
public:
    char theirintial(char fletter)
    {
        
        cout << "\nEnter Teacher's intials: "; 
        cin >> fletter;
        cout << "\nTeacher's intials: ";
        cout<<fletter;
    }
};

class chor
{
    public:
    void chorinstincts()
    {
        cout << "\nOh Shoot!!,Someone stole all the pens!";
    }

};

class students: teacher, chor
{

    public:

    string Name;
    int rollno;
    int age;


    void displaydata(char fletter)
    {
        cout <<"Student Rollno.: "<< rollno <<"\nStudent Name: "<<Name<<"\nStduent Age: "<<age;
        theirintial(fletter);
        chorinstincts();
    }

};

int main()
{
    char fletter;

    students one;
    cout << "Enter stduent Roll no.: ";
    cin >> one.rollno;
    cout << "Enter Student Name: ";
    cin >> one.Name;
    cout << "Enter student Age: "; 
    cin >> one.age;
    
    one.displaydata(fletter);
        
    return 0;
}
