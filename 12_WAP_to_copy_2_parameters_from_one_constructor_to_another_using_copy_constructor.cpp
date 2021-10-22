/*
    WAP_to_copy_2_parameters_from_one_constructor_to_another_using_copy_constructor.
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

    int a,b;

    students() //default constructor
    {
        a=0;
        b=0;
    }
    students(int x, int y) //1st constructor
    {
        a=x;
        b=y;
    }
    students(students &objext) //Copy constructor
    {
        cout << "Copy condtructor called!" ;
        a=objext.a;
        b=objext.b;
    }


    void displaydata() 
    {
        cout <<"\na: "<< a <<"\nb: "<<b<<"\n";
    }

};


int main()
{
    students one;
    students two(2, 3);
   
   one.displaydata();
   two.displaydata();
   
   students s1(two);
   s1.displaydata();
    return 0;
}

