#include <iostream>

using namespace std;

//void sum(int , int )
//{
//	for(i = 0; i <= *ten; ++i)
//	
//		cout << 
//		return 0;
//}

int main()
{
	int MaxTen = 0;
	
	int Sum = 0;

			
	cout << "������ Ƚ���� �Է��Ͻÿ�. : ";
	
	cin >> MaxTen;
	
	int* Array = new int [MaxTen];

	cout << "���ڸ� �Է��Ͻÿ�. :" << endl;
	
	for (int i = 0; i < MaxTen; i++)
	{
		cin >> Array[i];
		Sum += Array[i];
	}
	for (int i = 0; i < MaxTen; i++)
	{
		for (int Step = 0; Step < MaxTen - 1; Step++)
		{

			for (i = 0; i < MaxTen - 1 - Step; i++)
			{
				if (Array[i] < Array[i + 1])
				{
					int Temp = Array[i];
					Array[i] = Array[i + 1];
					Array[i + 1] = Temp;

				}

			}
		}
	}
	
	cout << "������ ���� : " << Sum;
	delete[] Array;
	return 0;
}

