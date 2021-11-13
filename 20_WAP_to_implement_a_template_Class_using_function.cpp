//20_WAP_to_implement_a_template_Class_using_function

#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

template<class No>

void swap(No &x, No &y)
{
    No temp = x;
    x = y;
    y = temp;
}

void fun(int a, int b, float c, float d) 
{
    cout << "\na and b before swaping :" << a << "\t" << b;
    swap(a, b);
    cout << "\na and b after swaping  :" << a << "\t" << b;
    cout << "\n\nc and d before swaping :" << c << "\t" << d;
    swap(c, d);
    cout << "\nc and d after swaping  :" << c << "\t" << d;
}

int main()
{
    int a, b;
    float c, d;
    
    cout << "Enter A,B values(integer):";
    cin >> a>>b;

    cout << "Enter C,D values(float):";
    cin >> c>>d;

    fun(a, b, c, d);

    return 0;
}
