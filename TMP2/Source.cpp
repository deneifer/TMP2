#include <iostream> <string> 
#include <vector> 
#include <algorithm>
using namespace std;
int c = 0,u=0,y=0;
int* enterdata(int *a)
{
	cout << "������� ����: ";
	cin >> a[0];
	cout << "������� �����: ";
	cin >> a[1];
	cout << "������� ���: ";
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
		cout << "�� ����� ���������� ����!";
	}
	cout << endl;
	if (c > u&&y==0)
	{
		cout << "���� ";
		showdate(a);
		cout << " ����� ��� ";
		showdate(b);
	}
	if(c<u&&y==0)
		{
			cout << "���� ";
			showdate(b);
			cout << " ����� ��� ";
			showdate(a);
		}
	cout << endl;
};

int main()
{
	setlocale(LC_ALL,"Rus");
	int data1[3], data2[3];
	cout << "��������� ���� ���" << endl << "������� 1 ����:" << endl;
	enterdata(data1);
	cout <<endl<< "������� 2 ����:"<<endl;
	enterdata(data2);
	if (data1[0] < 32 && data1[1] < 13 && data2[0] < 32 and data2[1] < 13)
		showlatedata(data1, data2);
	else
		cout << "���� ������� �������!" << endl;

	system("PAUSE");
	return 0;
};