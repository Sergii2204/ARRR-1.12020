#include<iostream>
using namespace std;
//������� ����� ������� ������
void Fill(int* arr, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
}
//������� ����� ��������� ���������� �������� ������
void FillA(int* arr, int SIZE, int a)
{
	for (int i = SIZE - a; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
}
//������� ����� ��������� �� ������ ������� � ������ ��� ��� ����������
void Filladditeon(int* arr1, int*& arr, int& SIZE, int a)
{
	for (int i = 0; i < SIZE + a; i++)
	{
		arr1[i] = arr[i];
	}
	SIZE = SIZE + a;
	delete[]arr;
	arr = arr1;
}
void Fillrevers1(int* arr1, int* arr, int SIZE, int a)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = arr1[i];
	}
}
void Fillrevers2(int* arr2, int* arr, int SIZE, int a)
{
	for (int i = 0; i < SIZE + a; i++)
	{
		arr[i] = arr2[i];
	}
}
//������� ����� ��������� �� ������ ������� � ������ ��� ��� ����������
void Fillsudstrateon(int* arr1, int*& arr, int& SIZE, int a)
{
	for (int i = 0; i < SIZE - a; i++)
	{
		arr1[i] = arr[i];
	}
	SIZE = SIZE - a;
	delete[]arr;
	arr = arr1;
}
//������� ����� ������� ������
void Arrouput(int* arr, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "" << " " << arr[i];
	}
	cout << endl;

}

void Funcmenu(int* arr, int SIZE, int a, int z)
{

	cout << "����" << endl;
	Fill(arr, SIZE);
	Arrouput(arr, SIZE);

	do
	{
		cout << "1. ��������� �����\n 2. ��������� �����\n  3. �����\n";
		cin >> z;
		if (z == 1)
		{
			system("cls");
			cout << "�� ������ ��������� ������\n\n";
			cout << "�� ����� ���������� �� ������ ��������� ������\n";
			cout << "��� ����� ������� ��    " << SIZE << "    ���������" << endl;
			cout << "������� �����\n";
			cin >> a;
			int* arr1 = new int[SIZE + a];
			Filladditeon(arr1, arr, SIZE, a);
			FillA(arr, SIZE, a);
			Arrouput(arr, SIZE);

			
		}
		else if (z == 2)
		{
			system("cls");
			cout << "�� ������ ��������� ������\n\n";
			cout << "�� ����� ���������� �� ������ ��������� ������\n\n";
			cout << "��� ����� ������� ��    " << SIZE << "    ���������" << endl;
			cout << "���� ����� ������ ���� � ��������� ��  � �� ������� ������\n";


			cout << "������� �����\n";
			cin >> a;
			if (a >= 0 && a <= SIZE)
			{
				int* arr2 = new int[SIZE - a];
				Fillsudstrateon(arr2, arr, SIZE, a);
				Arrouput(arr, SIZE);

			}
			else
			{
				cout << "���� ����� �� � ���������\n";
			}
		}
		

	} while (z != 3);
}


void main()
{
	setlocale(LC_ALL, "rus");
	cout << "MENU" << endl;
	cout << "������� ������ �������" << endl;
	int SIZE = 0;
	int a = 0, z = 0;
	cin >> SIZE;
	int* arr = new int[SIZE];
	Funcmenu(arr, SIZE, a, z);

	
	system("pause");

}
