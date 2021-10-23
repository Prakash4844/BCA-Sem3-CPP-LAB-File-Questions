#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

class imaginary
{       
  private: 
    int b;
    int a;
  
  public:
    imaginary(int v1)
    {
        b=v1;
    }
    void operator+(imaginary obj1)
    {
       a = b + obj1.b;
    }
    void printdata(int i)
    {
        cout<<"Your imaginary no."<<i<<" "<<b<<"i\n";
    }
    void printcomplexsum()
        {
            cout<<"Sum of Your Complex no. "<<a<<"i\n";
        }

 
};

int main()
{
    imaginary obj0(2),obj1(4);

    obj0.printdata(0);

    obj1.printdata(1);
    
    obj0+obj1;
    obj0.printcomplexsum();

    return 0;
}
