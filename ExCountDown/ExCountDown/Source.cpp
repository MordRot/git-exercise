#include <iostream>
#include <thread>
using namespace std;

void main()
{
	cout << "" << "Time until takeoff: 12";
	
	for (int i = 12; i > 0; i--)
	{
		cout << "\b\b";
		if (i > 9)
		{
			cout << i;
		}
		else
		{			
			cout << i << " ";
		}
		this_thread::sleep_for(1s);
	}
	system("cls");

	cout << "\r";
	for (int i = 0; i < 5; i++)
	{
		cout << "Takeoff";
		this_thread::sleep_for(1s);
		system("cls");
		this_thread::sleep_for(1s);
	}
	
}