                                        //WAP to find reverse of a given number
#include<iostream>

using namespace std;

int main()
{
  int input_no, rev=0, remainder;

  cout <<"Enter the no. you want to reverse: ";
  cin >>input_no;

  while(input_no != 0)
  {
    remainder = input_no % 10;
    rev= rev * 10 + remainder;
    input_no /= 10;
  }

  cout <<"Reverse of given no "<< input_no <<" is: "<<rev;
  return 0;
}

  