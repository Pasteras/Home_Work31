//Task 3
#include <iostream>  
#include <fstream>  

using namespace std;

void main()
{
	string Array;
	cout << "Enter text: " << endl;
	cin >> Array;
	char* arr = new char[1];
	ofstream fillone;
	fillone.open("filename.txt", ios::trunc);
	fillone << "\n" << Array;
	fillone.close();

	ifstream filltwo;

	filltwo.open("filename.txt");
	char ch;
	int count = 0;
	int i = 0;
	while (filltwo.get(ch))
	{
		if (ch != '\0')
		{
			arr[i] = ch;
			i++;
		}
	}
	int k = 0;
	while (arr[k] != '\0')
	{
		cout << arr[k];
		k++;
		if (arr[k] == arr[k + 1])
		{
			if (arr[k + 1] == arr[k + 2])
			{
				if (arr[k + 2] == arr[k + 3])
				{
					cout << "Yes" << endl;
					break;
				}
				else
				{
					cout << "No" << endl;
				}
			}
		}
	}
	filltwo.close();
}