#include<iostream>
using namespace std;
int** createpascaltriangle(int n)
{
	int k;
	int** triangle = new int*[n];
	for (int i = 0; i < n+1; ++i)
	{
		k = i + 1;

		triangle[i] = new int[k];

		for (int j = 0; j < k; ++j)
		{
			if ((j == 0 && i==0))
			{
				triangle[i][j] = 1;
				break;
		    }
			else if (j == 0)
			{
				triangle[i][j] = 1;
				continue;
			}

			if (j == i)
			{
				triangle[i][j] = triangle[i - 1][j - 1] + 0;
			}
			else
			{
				triangle[i][j] = triangle[i - 1][j - 1] + triangle[i-1][j];

			}
		}
	}
	return triangle;
}

void displaypascaltriangle(int**pt,int n)
{
	int k;
	for (int i = 0; i < n; ++i)
	{
		k = i + 1;
		for (int j = 0; j < k; ++j)
		{
			cout << pt[i][j] << " ";
		}
		cout << endl;
	}
}
void deallocatepascaltriangle(int** pt, int n) {	
}
int main()
{
	int s;
	cout << "enter size : " << endl;
	cin >> s;
	int** triangle = createpascaltriangle(s);
	displaypascaltriangle(triangle, s);
}