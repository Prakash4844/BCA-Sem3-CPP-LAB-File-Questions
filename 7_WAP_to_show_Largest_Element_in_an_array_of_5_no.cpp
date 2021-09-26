                              //WAP_to_show_Largest_Element_in_an_array_of_5_no.cpp
#include<iostream>

using namespace std;

int main()
{
  int l, arr[50];

  cout <<"Enter the size of array: ";
  cin >>l;

  cout<<"Enter array values:";
  for(int i=0; i<l;i++)
  {
    cin>>arr[i];
  }
  for(int i=1; i<l;i++)
  if(arr[0]<arr[i])
  {
    arr[0]=arr[i];

  }

  cout<<"Largest element: "<<arr[0];
  
  return 0;

}

  