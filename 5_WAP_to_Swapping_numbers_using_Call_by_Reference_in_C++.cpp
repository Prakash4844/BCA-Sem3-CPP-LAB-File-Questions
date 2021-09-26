                              //WAP_to_Swapping_2_numbers_using_Call_by_Reference_in_C++.cpp
#include<iostream>

using namespace std;

int swap_by_value(int *x,int *y)
  {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
   
  };

int main()
{
  int x, y;

  cout <<"Enter the value of x and y: ";
  cin >>x>>y;

  cout <<"\nvalues before swapping:\n x = "<< x <<" and y = "<< y;

  swap_by_value(&x, &y);

  cout <<"\nvalues after swapping by Call by reference:\n x = "<< x <<" and y = "<<y;

  
return 0;

}

  