//Task1
#include <iostream> 
#include <fstream> 

using namespace std;

void main()
{
	int cont_p = 0;//count '+'
	int cont_m = 0;//count '-'
	int cont_r = 0;//count '='
	string str;
	cout << "sss" << endl;
	cin >> str;
	ofstream of;
	of.open("MyFile.txt", ios::app);
	of << "\n" << str;
	of.close();

	ifstream in;

	in.open("MyFile.txt");
	char ch;
	while (in.get(ch))
	{
		cout << ch;
		if (ch == '+')
		{
			cont_p++;
		}
		if (ch == '-')
		{
			cont_m++;
		}
		if (ch == '=')
		{
			cont_r++;
		}
	}
	cout << "\n\nPlus: " << cont_p;
	cout << "\n\nMinus: " << cont_m;
	cout << "\n\nDor: " << cont_r;
	in.close();
}