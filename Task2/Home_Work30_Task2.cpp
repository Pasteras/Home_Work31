//Task 2
#include <iostream>  
#include <fstream>  

using namespace std;

void main()
{
	string Array;
	cout << "Enter text: " << endl;
	cin >> Array;
	ofstream of;
	of.open("MyFile.txt", ios::app);
	of << "\n" << Array;
	of.close();

	ifstream in;

	in.open("MyFile.txt");
	char ch;
	int count = 0;
	while (in.get(ch))
	{
		if (ch == 'w')
		{
			count++;
			continue;
		}
		if (ch == 'h' && count == 1)
		{
			count++;
			continue;
		}
		if (ch == 'i' && count == 2)
		{
			count++;
			continue;
		}
		if (ch == 'l' && count == 3)
		{
			count++;
			continue;
		}
		if (ch == 'e' && count == 4)
		{
			count++;
			continue;
			if (count != 5)
			{
				count = 0;
			}
		}
	}
	if (count == 5)
	{
		cout << "Word in text." << endl;
	}
	else
	{
		cout << "Word not in text." << endl;
	}
	in.close();
	}