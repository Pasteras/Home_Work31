//Task5
#include <iostream> 
#include <fstream> 
#include <string>

using namespace std;

int cont_p = 0;//count '+'
int cont_m = 0;//count '-'
int cont_r = 0;//count '='

void main()
{
	string str;
	cout << "Enter: " << endl;
	cin >> str;
	ofstream of;
	of.open("MyFile.txt", ios::trunc);
	of << endl << str;
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
	in.close();
	ofstream ofqs;
	ofqs.open("MyFile1.txt", ios::trunc);
	ofqs << cont_p;
	ofqs << endl << cont_m;
	ofqs << endl << cont_r;
	ofqs.close();


	ifstream ins;

	ins.open("MyFile1.txt");
	char ch1;
	int a = 1;
	cout << endl << endl;
	while (!ins.eof())
	{
		getline(ins, str);
		if(a == 1)
		{
			cout << "Plus: " << str << endl;
		}

		if(a == 2)
		{
			cout << "Minus: " << str << endl;
		}

		if(a == 3)
		{
			cout << "Equal: " << str << endl;
		}
		a += 1;
	}

	ins.close();

}