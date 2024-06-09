#include<iostream>
using namespace std;
int main()
{
 int s;
 cout<<"Enter the size: ";
 cin>>s;
if(s>=6)
{
 int s1=(s*2)-1;
 int s2=s/3;
 int s4=1;
 int s6=s1/2;
 int s7=s1/2;
 cout<<endl<<endl;
 for(int u=1;u<s2;u++)
 {
  s6=s6-2;
  s7=s7-2;
  s4=s4+2;
 }
 for(int l=1;l<=s2;l++)
 {
  for(int m=s2;m>l;m--)
  {
   cout<<" ";
  }
  for(int n=1;n<=s6;n++)
  {
   cout<<"*";
  }
  s6=s6+2;
  for(int p=s4;p>=1;p--)
  {
   cout<<" ";
  }
  s4=s4-2;
  for(int q=1;q<=s7;q++)
  {
   cout<<"*";
  }
  s7=s7+2;
  cout<<endl;
  }
/* for(int r=1;r<=s1;r++) //separator
 {
  cout<<"*";
 }
 cout<<endl;*/
 for(int i=1;i<=s;i++)  //inverted triangle
 {
  for(int j=1;j<i;j++)
  {
   cout<<" ";
  }
  for(int k=1;k<=s1;k++)
  {
   cout<<"*";
  }
  s1=s1-2;
  cout<<endl;
 }
 cout<<endl<<endl;
}
else
{
 cout<<"size must be greater than or equal to 6";
}
}
