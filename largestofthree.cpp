
/*exp5_2- print the largest of the three numbers*/

#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cout<<"Enter first number:";
  cin>>a;
  cout<<"Enter second number:";
  cin>>b;
  cout<<"Enter third number:";
  cin>>c;
  if(a>b && a>c)
  {
    cout<<"a is the largest";
  }
  else if (b>a && b>c)
  {
    cout<<"b is the largest";
  }
  else
  {
    cout<<"c is the largest";
  }
}