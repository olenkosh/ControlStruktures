#include<iostream>
using namespace  std;

//#include<conio.h>
//#define Escape   27
//#define WHILE_2


void main()

{ 
	setlocale(LC_ALL, "");

	
//#endif
	//int i = 0;  // счётчик цикла
	//int n = 5;  // Количество итераций
//	while (i < n)
	//{

	//	cout << i << ". Loops" << endl;
	//	i++;
//	}
	/*char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key !=27);*/

	int n;
	cout << "Введите количество итераций:"; cin >> n;
	while (n-- > 0)
	{
		cout << n << "\t";
	}
	cout << endl;


}

