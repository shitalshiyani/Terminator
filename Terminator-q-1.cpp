#include<iostream>
#include<string.h>

using namespace std;

class Car;
class Garage
{
	public :
		Garage (int statement)
		{
			try
			{
				throw statement;
			}
			catch (int statement)
			{
				cout<<statement<<endl<<"Cleared_ _ _";
				cout<<endl;
			}
		}
};

class Car
{
	public :
		Car (int i)
		{
			Garage g(i);
		}
};

class Motor
{
	public :
		Motor ()
		{
			throw Car (125);
		}
};

main()
{
	try
	{
		Motor m;
	}
	catch (...)
	{
		cout<<"---Close---";
		cout<<endl;
	}
	return 0;
}
