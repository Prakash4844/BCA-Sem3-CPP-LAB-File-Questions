

#include<iostream>
#include<fstream>

using namespace std;
//using std::cout;
//using std::cin;

int main()
{
  //opening MyWritingFile.txt using constructor and Writing in it.
  string st = "Text to be written in MyFile.txt";
  string st2;

  ofstream out("MyWritingFile.txt");
  cout<<"Written in MyWriting.txt\n";

  out<<st;

  //opening MyWritingFile.txt using constructor and Reading it.

  ifstream in("MyReadingFile.txt");
  getline(in, st2);

  cout<<st2;

  


  return 0;
}