#include <iostream>

using namespace std;



void SSort(int* Array, int MaxTen)
{
	for (int i = 0; i < MaxTen; i++)
	{
		for (int j = i; j < MaxTen; j++)
		{
			if (Array[i] < Array[j])
			{
				int Temp = Array[i];
				Array[i] = Array[j];
				Array[j] = Temp;
			}
		}
	}
}
int SumNum(int* Array, int MaxTen)
{
	int Sum = 0;
	for (int i = 0; i < MaxTen; i++)
	{
		Sum += Array[i];
	}
	return Sum;
}

int main()
{
	int MaxTen = 0;


	cout << "������ Ƚ���� �Է��Ͻÿ�. : ";

	cin >> MaxTen;

	int* Array = new int[MaxTen];

	cout << "���ڸ� �Է��Ͻÿ�." << endl;

	for (int i = 0; i < MaxTen; i++)
	{
		cin >> Array[i];
	}
	int Sum = SumNum(Array, MaxTen);


	cout << "������ ���� : " << Sum << endl;

	cout << "�������� ����" << endl;
	SSort(Array, MaxTen);
	for (int i = 0; i < MaxTen; i++)
	{
		cout << Array[i] << endl;
	}
	delete[] Array;
	return 0;
}
