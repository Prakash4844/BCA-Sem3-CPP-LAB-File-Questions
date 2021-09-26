                              //WAP_to_Swapping_2_numbers_using_Call_by_Value_in_C++.cpp
#include<iostream>

using namespace std;

int swap_by_value(int x,int y)
  {
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout <<"\nvalues after swapping Call by value:\n x = "<< x <<" and y = "<<y;
  };

int main()
{
  int x, y, temp;

  cout <<"Enter the value of x and y: ";
  cin >>x>>y;

  cout <<"\nvalues before swapping:\n x = "<< x <<" and y = "<< y;

  swap_by_value(x, y);

  
return 0;

}

  