 //WAP to implementing an array of objects in a class using member functions to input and display data.

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class employee
{
    private:
    int id;
    int age;
    int salary;

    public:
    void displaydata(int i);
    void setdata(int i)
    {
        cout<<"\nEnter "<<i<<" employee ID: ";
        cin>>id;
        cout<<"\nEnter "<<i<<" employee Age: ";
        cin>>age;
        cout<<"\nEnter employee "<<i<<" Salary: ";
        cin>>salary;
    }

};

void employee::displaydata(int i)
{
    cout<<"\nEmployee "<<i<<" ID: "<<id<<"\nEmployee "<<i<<" Age: "<<age<<"\nEmployee "<<i<<" Salary: "<<salary<<"\n\n";

}


int main()
{
    int i;
    employee one[4];

    for(i=0;i<=4;i++) 
    {   
        one[i].setdata(i);
        one[i].displaydata(i);
    }
    return 0;
}
