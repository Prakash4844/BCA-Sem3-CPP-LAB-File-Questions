                              //WAP_to_show_overloading_of_area_function.cpp
#include<iostream>

using namespace std;

int area(int s)
  {
    return(s*s);
  };

int area(int l, int b)
  {
    return(l*b);
  }

int main()
{
  int l,s,b;

  cout <<"Enter the value of l,s and b: ";
  cin >>l>>s>>b;

  cout<<"Area of square is "<<area(s);
  cout<<"\nArea of rectangle is "<<area(l,b);
  
return 0;

}

  