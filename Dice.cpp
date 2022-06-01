#include <iostream>
#include <cstdlib>
using namespace std;

int Roll() 
{
	int num;
	
	srand((unsigned)time(0));
	num = (rand() % 6) + 1;
	if (num == 1) 
	{
		cout << "				___________" << endl;
		cout << "				|         |" << endl;
		cout << "				|         |" << endl;
		cout << "				|    0    |" << endl;
		cout << "				|         |" << endl;
		cout << "				|_________|" << endl;
		cout << "\nNumber is 1 " << endl;

	}
	else if (num == 2)
	{
		cout << "				___________" << endl;
		cout << "				|         |" << endl;
		cout << "				|    0    |" << endl;
		cout << "				|         |" << endl;
		cout << "				|    0    |" << endl;
		cout << "				|_________|" << endl;
		cout << "\nNumber is 2 " << endl;

	}
	else if (num == 3)
	{
		cout << "				___________" << endl;
		cout << "				|         |" << endl;
		cout << "				|    0    |" << endl;
		cout << "				|  0   0  |" << endl;
		cout << "				|         |" << endl;
		cout << "				|_________|" << endl;
		cout << "\nNumber is 3 " << endl;

	}
	else if (num == 5)
	{
		cout << "				___________" << endl;
		cout << "				|         |" << endl;
		cout << "				|  0   0  |" << endl;
		cout << "				|    0    |" << endl;
		cout << "				|  0   0  |" << endl;
		cout << "				|_________|" << endl;
		cout << "\nNumber is 5 " << endl;

	}
	else if (num == 4)
	{
		cout << "				___________" << endl;
		cout << "				|         |" << endl;
		cout << "				|    0    |" << endl;
		cout << "				|  0   0  |" << endl;
		cout << "				|    0    |" << endl;
		cout << "				|_________|" << endl;
		cout << "\nNumber is 4 " << endl;

	}
	else if (num == 6)
	{
		cout << "				___________" << endl;
		cout << "				|         |" << endl;
		cout << "				|  0   0  |" << endl;
		cout << "				|  0   0  |" << endl;
		cout << "				|  0   0  |" << endl;
		cout << "				|_________|" << endl;
		cout << "\nNumber is 6 " << endl;

	}
	system("pause");
	system("cls");
	return 0;
}
int main()
{
	char answer;
	cout << endl << "--------------DICE---------------" << endl;
	cout << "Roll the dice " << endl;
	system("pause");
	system("cls");
	do
	{
		Roll();
		cout << "-------   Do you want to roll it again  ------" << endl;
		cout << "  Yes (press y and enter) " << endl;
		cout << "  N  (press n and enter)" << endl;
		cout << "Option =  ";
		cin >> answer;
	} while (answer == 'y');
}