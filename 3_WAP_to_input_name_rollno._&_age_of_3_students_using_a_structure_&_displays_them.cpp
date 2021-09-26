                              //WAP_to_input_name_rollno._&_age_of_3_students_using_a_structure_&_displays_them.cpp
#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<cmath>

using namespace std;

struct bache
  {
    char name[20];
    int roll, age;
  } s[10];

int main()
{
  int i, n;

  struct bache s[10];

  cout <<"Enter the no. of students whose details you want to store: ";
  cin >>n;

  for(i=0;i<n;i++)
  {
    cout<<"\nEnter information of student "<<i+1;
    cout<<"\n Enter name: ";
    cin >> s[i].name; 

    cout<<"\n Enter roll number: ";
    cin >>s[i].roll;

    cout<<"\n Enter ages: ";
    cin >>s[i].age;
  }

  cout <<"Displaying infomation of "<<n<<" Baches";

  for(i=0;i<n;i++)
  {
    cout<<"\n\nno. student info"<< i+1;
    cout<<"\nName: "<<s[i].name;
    cout<<"\nRoll number: "<<s[i].roll;
    cout<<"\nAge:"<< s[i].age;
  }
return 0;

}

  