#include <iostream>

// N = 7
// 
//     1234567
//        *   
//       * *  
//	    *   * 
//	   *     *
//	    *   * 
//       * *  
//	      *   

using namespace std;

int main()
{
	int N;
	cout << "Input N: ";
	cin >> N;
   

	while (N < 0 || N % 2 == 0)
	{
		cout << "Please input a positive odd number" << endl;

		cout << "Input N: ";
		cin >> N;
	}

	//if (N > 0 || N % 2 != 0)
	//{
	//}

	int astPosLeft, astPosRight;

	astPosLeft = astPosRight = N / 2 + 1;

	for (int row = 1; row <= N; row++)
	{
		for (int col = 1; col <= N; col++)
		{
			if (col == astPosLeft)
			{
				cout << "*";
				if (astPosLeft == astPosRight)
					break;
			}
			else if (col == astPosRight)
			{
				cout << "*";
				break;
			}
			else
				cout << " ";
		}
		cout << endl;

		if (row > N / 2)
		{
			astPosLeft++;
			astPosRight--;
		}
		else
		{
			astPosLeft--;
			astPosRight++;
		}
	}

	//while (paiman)
	//{
	//}

	//do
	//{
	//} while (paiman);
}
