                              //WAP_to_show_Working_of_Static_Variables_inside_Functions.cpp
#include<iostream>

using namespace std;
  
void counter()
{
    static int count=0; //count is not getting intialized for each function call due to it being static 
    cout << count++;
}

void main()
{
    for(int i=0;i<5;i++)
    {
        counter();
    }
}