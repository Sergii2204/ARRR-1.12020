#include<iostream>
using namespace std;
//‘”Õ ÷»ﬂ  ¿ ¿ﬂ —Œ«ƒ¿®“ Ã¿——»¬
void Fill(int* arr, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
}
//‘”Õ ÷»ﬂ  ¿ ¿ﬂ ƒŒ—Œ«ƒ¿®“ ƒŒ¡¿¬À≈Õ»≈ ≈À≈Ã≈Õ“€ Ã¿—»¬¿
void FillA(int* arr, int SIZE, int a)
{
	for (int i = SIZE - a; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
}
//‘”Õ ÷»ﬂ  ¿ ¿ﬂ œ≈–≈ÕŒ—»“ »« ŒƒÕŒ√Œ Ã¿——»¬¿ ¬ ƒ–”√Œ… œ–» ≈√Œ ”¬»À»◊≈Õ»»
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
//‘”Õ ÷»ﬂ  ¿ ¿ﬂ œ≈–≈ÕŒ—»“ »« ŒƒÕŒ√Œ Ã¿——»¬¿ ¬ ƒ–”√Œ… œ–» ≈√Œ ”Ã≈Õ‹ÿ≈Õ»»
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
//‘”Õ ÷»ﬂ  ¿ ¿ﬂ ¬€¬Œƒ»“ Ã¿——»¬
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

	cout << "Ã≈Õﬁ" << endl;
	Fill(arr, SIZE);
	Arrouput(arr, SIZE);

	do
	{
		cout << "1. ”‚ÂÎË˜ËÚ¸ Ï‡ÒË‚\n 2. ”ÏÂÌ¸¯ËÚ¸ Ï‡ÒË‚\n  3. ¬˚ıÓ‰\n";
		cin >> z;
		if (z == 1)
		{
			system("cls");
			cout << "¬˚ ıÓÚËÚÂ Û‚ÂÎË˜ËÚ¸ Ï‡ÒÒË‚\n\n";
			cout << "Õ‡ Í‡ÍÓÂ ÍÓÎË˜ÂÒÚ‚Ó ‚˚ ıÓÚËÚÂ Û‚ÂÎË˜ËÚ¸ Ï‡ÒÒË‚\n";
			cout << "¬‡¯ Ï‡ÒË‚ ÒÓÒÚÓËÚ ËÁ    " << SIZE << "    ≈ÎÂÏÂÌÚÓ‚" << endl;
			cout << "¬‚Â‰ËÚÂ ˜ËÒÎÓ\n";
			cin >> a;
			int* arr1 = new int[SIZE + a];
			Filladditeon(arr1, arr, SIZE, a);
			FillA(arr, SIZE, a);
			Arrouput(arr, SIZE);

			
		}
		else if (z == 2)
		{
			system("cls");
			cout << "¬˚ ıÓÚËÚÂ ÛÏÂÌ¸¯ËÚ¸ Ï‡ÒÒË‚\n\n";
			cout << "Õ‡ Í‡ÍÓÂ ÍÓÎË˜ÂÒÚ‚Ó ‚˚ ıÓÚËÚÂ ÛÏÂÌ¸¯ËÚ¸ Ï‡ÒÒË‚\n\n";
			cout << "¬‡¯ Ï‡ÒË‚ ÒÓÒÚÓËÚ ËÁ    " << SIZE << "    ≈ÎÂÏÂÌÚÓ‚" << endl;
			cout << "¬¿ÿ≈ ◊»—ÀŒ ƒŒÀ∆ÕŒ ¡€“‹ ¬ ƒ»¿œ¿«ŒÕ≈ Œ“  Œ ƒŒ –¿«Ã≈–¿ Ã¿—»¬¿\n";


			cout << "¬‚Â‰ËÚÂ ˜ËÒÎÓ\n";
			cin >> a;
			if (a >= 0 && a <= SIZE)
			{
				int* arr2 = new int[SIZE - a];
				Fillsudstrateon(arr2, arr, SIZE, a);
				Arrouput(arr, SIZE);

			}
			else
			{
				cout << "¬‡¯Â ˜ËÒÎÓ ÌÂ ‚ ‰Ë‡Ô‡ÁÓÌÂ\n";
			}
		}
		

	} while (z != 3);
}


void main()
{
	setlocale(LC_ALL, "rus");
	cout << "MENU" << endl;
	cout << "¬‚Â‰ËÚÂ ‡ÁÏÂ Ï‡ÒÒË‚‡" << endl;
	int SIZE = 0;
	int a = 0, z = 0;
	cin >> SIZE;
	int* arr = new int[SIZE];
	Funcmenu(arr, SIZE, a, z);

	
	system("pause");

}
