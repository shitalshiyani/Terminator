#include<iostream>
#include<string.h>

using namespace std;

main()
{
	int x,y,z;
	char result[]= "Can divide by any value except Zero";
	x=255;
	y=0;
	
	try
	{
	if (y==0)
	{
		throw result; 
	}
	else
	{
		z=x/y;
		cout<<"Z="<<z<<endl;
	}
    }
	catch (...)
	{
		cout<<"General Exception...";
	}
	return 0;
}
