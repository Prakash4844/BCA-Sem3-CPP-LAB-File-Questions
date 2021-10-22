/*
WAP to create a class employee having data members empid, empname, age; use member functions getdata() &displaydata() 
to read & display the data. Keep data members as private.
*/

#include<iostream>
#include<string>
// using namespace std;

using std::cout;
using std::cin;
using std::string;

class employee
{
    private:
    
        int empid;
        string empname;
        int age;

    public:

    void getdata()
    {
        cout << "Enter employee ID: "; 
        cin >> empid;
        cout << "Enter employee Name: "; 
        cin >> empname;
        cout << "Enter employee Age: "; 
        cin >> age;
    }

    void displaydata()
    {
        cout <<"Employee ID: "<< empid <<"\nEmployee Name: "<<empname<<"\nEmployee Age: "<<age;
    }

};

int main()
{
    employee one;
    one.getdata();
    one.displaydata();
        
    return 0;
}