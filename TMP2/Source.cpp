#include <iostream> <string> 
#include <vector> 
#include <algorithm>
using namespace std;
int c = 0,u=0,y=0;
int* enterdata(int *a)
{
	cout << "Введите день: ";
	cin >> a[0];
	cout << "Введите месяц: ";
	cin >> a[1];
	cout << "Введите год: ";
	cin >> a[2];
	
	return a;
};

void showdate(int* a)
{
	for (int i = 0;i < 3;i++)
	{
		cout << a[i];
		if(i<2)cout << ".";
	}
	
};

void showlatedata(int* a, int* b)
{
	cout << endl;
	if (a[2] > b[2])
	{
		c=1;
		u = 0;
	}
	else
	{
		c = 0;
		u = 1;
	}
	if (a[2] == b[2])
	{
		if (a[1] > b[1])
		{
			c = 1;
			u = 0;
		}
		else
		{
			c = 0;
			u = 1;
		}
		if (a[1] == b[1])
		{
			if (a[0] > b[0])
			{
				c = 1;
				u = 0;
			}
			else
			{
				c = 0;
				u = 1;
			}
		}
	}
	if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2])
	{
		y = 1;
		cout << "Вы ввели одинаковые даты!";
	}
	cout << endl;
	if (c > u&&y==0)
	{
		cout << "Дата ";
		showdate(a);
		cout << " позже чем ";
		showdate(b);
	}
	if(c<u&&y==0)
		{
			cout << "Дата ";
			showdate(b);
			cout << " позже чем ";
			showdate(a);
		}
	cout << endl;
};

int main()
{
	setlocale(LC_ALL,"Rus");
	int data1[3], data2[3];
	cout << "Сравнение двух дат" << endl << "Введите 1 дату:" << endl;
	enterdata(data1);
	cout <<endl<< "Введите 2 дату:"<<endl;
	enterdata(data2);
	if (data1[0] < 32 && data1[1] < 13 && data2[0] < 32 and data2[1] < 13)
		showlatedata(data1, data2);
	else
		cout << "Даты введены неверно!" << endl;

	system("PAUSE");
	return 0;
};