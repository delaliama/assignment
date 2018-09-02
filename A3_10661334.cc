#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

unsigned int mark ;


cout<< "Please enter the exam mark"<<endl;
cin>> mark;

if(mark>=80&&mark<=100)
{
	cout<<"You got an A";
	
}
else if(mark>=75&&mark<=79)
{
	cout<<"You got a B+";
	
}
else if(mark>=70&&mark<=74)
{
	cout<<"You got a B";
	
}
else if(mark>=65&&mark<=69)
{
	cout<<"You got a C+" ;
	
}
else if(mark>=60&&mark<=64)
{
	cout<<"You got a C" ;
}
else if(mark>=55&&mark<=59)
{
	cout<<"You got a D+";
	
}
else if(mark>=50&&mark<=54)
{
	cout<<"You got a D" ;
	
}
else if(mark>=45&&mark<=49)
{
	cout<<"You got an E" ;

}
else if(mark>=0&&mark<=44)
{
   cout<<"You got an F" ;

}
return 0;
}
