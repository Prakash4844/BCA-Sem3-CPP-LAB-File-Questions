#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class myclass 
{       
    private: 
    int a;
    
    public:
    int b;

    myclass(int A, int B)
    {
        a=A;
        b=B;
    }

    friend myclass Sum(myclass o1);

};

myclass Sum(myclass o1)
{
    int c;
    c = o1.a+o1.b;
    cout<<"Sum is: "<<c;
}

int main()
{
    myclass obj1(4, 5);

    Sum(obj1);
    
    return 0;
}

