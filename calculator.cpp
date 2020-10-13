#include<iostream>
using namespace std
int main()
{
 float a,b,c,d;
 do {
 cout<<"Enter the first number\n";
 cin>>a;
 cout<<"Enter the secod number\n";
 cin>>b;
 cout<<"Enter the number corresponding to the operation that you like to use\n 1.ADDITION 2.SUBSTRACTION\n 3.MULTIPLICATION 4.DIVISION\n";
 cin>>c;
 if (c==1)
 {
	 c=a+b;
	}
else if (c==2)
{
	c=a-b;
}
else if (c==3)
{ 
	c=a*b;
}
else if (c==4)
{
	c=a/b;
}
else {
	cout<<"Invalid Key. Please insert the right key\n If you want to restart,type 1.\n If you want to terminate,type any other key.\n";
	cin>>d;
}
cout<<"The result is "<<c<<"\n";
cout<<"We hope you like our program.\nIf you want to restart,type 1.\n If you want to terminate,type any other key.\n";
cin>>d; }
while (d==1);
cout<<"Thank you for using our calculator. Have a nice day.";
return (0);
