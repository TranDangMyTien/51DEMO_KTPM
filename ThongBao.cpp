#include<iostream>
using namespace std;

int main11()
{
	int a[4][4] = { {5,4,3,2},
		{8,4,-1,5},
		{2,2,6,9},
		{11,2,5,4} };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	system("pause");
	return 0;
}