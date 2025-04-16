#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	/*for (;;)
	{
		cout << "Hello FOR";
	}*/


	/*int n = 5;
	for (
		int i = 0;
		i < n;

		i++
		)
	{
		cout<<i<<"\t";
	}*/

	// Факториал

	int n;
	//cout << "Введите количество операций:"; cin >> n;
	//int f=1;
	//for (int i = 1; i <= n; i++)
	//{
	//	//cout << i << "\t";
	//	cout << i << "!=";
	//	f *= i;
	//	cout << f << endl;
	//}
	//cout << endl;

	//Степени 

	/*double a;
	int n;
	cout << "Введите основание степени:"; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0;i < n;i++)
	{
		N *= a;
	}
	cout << N << endl;*/

	//ASCCI 

	   /*for (int i = 0;i<256;i++)
	   {
		   if (i % 16 == 0)cout << endl;
		   cout <<(char) i<<" ";
	   }*/

	   //фибаначи

	   /*int n;
	   cout << "Введите предельное число:"; cin >> n;
	   for (int a = 0, b = 1, c = a + b;a < n;a = b, b = c, c = a + b)
		   cout << a << "\t";
	   cout << endl;

	   cout << "Введите количество членов ряда:"; cin >> n;
	   for (long long int i = 0, a = 0, b = 1, c = a + b;i < n;i++, c = (a = b) + (b = c))
		   cout << a << "\t";
	   cout << endl;*/


	   //Вывести ряд простых чисел до указаных предел

	/*int n;
	cout << "Ввысти предельное число:"; cin >> n;
	for(int i=0; i<n;i++)
	{
		bool simple = true; 
		 for(int j=2;j<i; j++)
		 {
			 if (i % j == 0)
			 {
				 simple = false;
				 break;
			 }
         }
		if(simple)cout << i << "\t";
	}
	cout << endl;*/

	// Ввывести ряд совершенных чисел

	//int n; cout << "Введите предельное число:"; cin >> n;
	//for (int i= 1; i <= n; i++)
	//{
	//	//bool perfect = true;//Предположим число совершенное. но это нужно проверить.
	//	int sum = 0;
	//	for (int j = 1;j <= i / 2;j++)
	//	{
	//		if (i % j == 0)sum += j;

	//	}
	//	//if (sum == i)perfect = true;
	//	if (sum==i)cout << i << "\t";
 //   }
	//cout << endl;

//#ifdef RHOMBUS_1

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/"; 
		for (int j = 0; j < i; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0;i < n;i++)
	{
		for (j = 0; j <= i; j++)cout << " "; cout<<"\\";
		for (int j = i+1; j < n; j++)cout << " ";cout << "/";
		cout << endl;
	}


//#endif // RHOMBUS


	

}