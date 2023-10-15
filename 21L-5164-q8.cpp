#include<iostream>
using namespace std;

int main()
{
	int choice = 0, p1 = 0, p2 = 0, P1 = 0, p = 0;
	char a = ' ', b = ' ', c = ' ', d = ' ', e = ' ', f = ' ', g = ' ', h = ' ', i = ' ';

	cout << "TIC TAC TOE GAME" << endl << endl;

	cout << "   |   |   " << endl;
	cout << " " << a << " " << "|" << " " << b << " " << "|" << " " << c << " " << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << d << " " << "|" << " " << e << " " << "|" << " " << f << " " << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << g << " " << "|" << " " << h << " " << "|" << " " << i << " " << endl;
	cout << "   |   |   " << endl << endl;

	cout << "Enter 1 for one player game or 2 for two player game:" << endl;
	cin >> p;
	cout << endl;

	if (p == 2)
	{
		for (choice = 1; choice <= 9; choice++)
		{
			cout << "player 1 enter your number of box:" << endl;
			cin >> p1;

				if (p1 == 1)
				{
					a = 'X';
				}
				else if (p1 == 2)
				{
					b = 'X';
				}
				else if (p1 == 3)
				{
					c = 'X';
				}
				else if (p1 == 4)
				{
					d = 'X';
				}
				else if (p1 == 5)
				{
					e = 'X';
				}
				else if (p1 == 6)
				{
					f = 'X';
				}
				else if (p1 == 7)
				{
					g = 'X';
				}
				else if (p1 == 8)
				{
					h = 'X';
				}
				else if (p1 == 9)
				{
					i = 'X';
				}
				else
				{
					cout << "invalid input" << endl;
				}
	
	
			cout << "   |   |   " << endl;
			cout << " " << a << " " << "|" << " " << b << " " << "|" << " " << c << " " << endl;
			cout << "___|___|___" << endl;
			cout << "   |   |   " << endl;
			cout << " " << d << " " << "|" << " " << e << " " << "|" << " " << f << " " << endl;
			cout << "___|___|___" << endl;
			cout << "   |   |   " << endl;
			cout << " " << g << " " << "|" << " " << h << " " << "|" << " " << i << " " << endl;
			cout << "   |   |   " << endl << endl;

			if ((a == 'X' && b == 'X' && c == 'X') || (c == 'X' && f == 'X' && i == 'X') || (g == 'X' && h == 'X' && i == 'X') || (a == 'X' && d == 'X' && g == 'X') || (a == 'X' && e == 'X' && i == 'X') || (c == 'X' && e == 'X' && g == 'X') || (b == 'X' && e == 'X' && h == 'X'))
			{
				cout << "player one wins" << endl;
				break;
			}
			else if ((a == 'O' && b == 'O' && c == 'O') || (c == 'O' && f == 'O' && i == 'O') || (g == 'O' && h == 'O' && i == 'O') || (a == 'O' && d == 'O' && g == 'O') || (a == 'O' && e == 'O' && i == 'O') || (c == 'O' && e == 'O' && g == 'O') || (b == 'O' && e == 'O' && h == 'O'))
			{
				cout << "player two wins" << endl;
				break;
			}
			choice++;
			if (choice >= 9)
			{
				cout << "draw" << endl;
				break;
			}

			for (int choice1 = 1; choice1 <= 1; choice1++)
			{
				cout << "player 2 enter your number of box:" << endl;
				cin >> p2;

					if (p2 == 1)
					{
						a = 'O';
					}
					else if (p2 == 2)
					{
						b = 'O';
					}
					else if (p2 == 3)
					{
						c = 'O';
					}
					else if (p2 == 4)
					{
						d = 'O';
					}
					else if (p2 == 5)
					{
						e = 'O';
					}
					else if (p2 == 6)
					{
						f = 'O';
					}
					else if (p2 == 7)
					{
						g = 'O';
					}
					else if (p2 == 8)
					{
						h = 'O';
					}
					else if (p2 == 9)
					{
						i = 'O';
					}
					else
					{
						cout << "invalid input" << endl;
					}
					if (p2 == p1)
					{
						cout << "the space is already taken" << endl;
						break;
					}
		
	
				cout << "   |   |   " << endl;
				cout << " " << a << " " << "|" << " " << b << " " << "|" << " " << c << " " << endl;
				cout << "___|___|___" << endl;
				cout << "   |   |   " << endl;
				cout << " " << d << " " << "|" << " " << e << " " << "|" << " " << f << " " << endl;
				cout << "___|___|___" << endl;
				cout << "   |   |   " << endl;
				cout << " " << g << " " << "|" << " " << h << " " << "|" << " " << i << " " << endl;
				cout << "   |   |   " << endl << endl;


			}
			if ((a == 'X' && b == 'X' && c == 'X') || (c == 'X' && f == 'X' && i == 'X') || (g == 'X' && h == 'X' && i == 'X') || (a == 'X' && d == 'X' && g == 'X') || (a == 'X' && e == 'X' && i == 'X') || (c == 'X' && e == 'X' && g == 'X') || (b == 'X' && e == 'X' && h == 'X'))
			{
				cout << "player one wins" << endl;
				break;
			}
			else if ((a == 'O' && b == 'O' && c == 'O') || (c == 'O' && f == 'O' && i == 'O') || (g == 'O' && h == 'O' && i == 'O') || (a == 'O' && d == 'O' && g == 'O') || (a == 'O' && e == 'O' && i == 'O') || (c == 'O' && e == 'O' && g == 'O') || (b == 'O' && e == 'O' && h == 'O'))
			{
				cout << "player two wins" << endl;
				break;
			}
			if (choice>=9)
			{
				cout << "draw" << endl;
				break;
			}
			continue;
		}
		
	}

	if (p == 1)
	{
		for (choice = 1; choice <= 9; choice++)
		{
			cout << "player 1 enter your number of box:" << endl;
			cin >> p1;

			if (p1 == 1)
			{
				a = 'X';
			}
			else if (p1 == 2)
			{
				b = 'X';
			}
			else if (p1 == 3)
			{
				c = 'X';
			}
			else if (p1 == 4)
			{
				d = 'X';
			}
			else if (p1 == 5)
			{
				e = 'X';
			}
			else if (p1 == 6)
			{
				f = 'X';
			}
			else if (p1 == 7)
			{
				g = 'X';
			}
			else if (p1 == 8)
			{
				h = 'X';
			}
			else if (p1 == 9)
			{
				i = 'X';
			}
			else
			{
				cout << "invalid input" << endl;
			}


			cout << "   |   |   " << endl;
			cout << " " << a << " " << "|" << " " << b << " " << "|" << " " << c << " " << endl;
			cout << "___|___|___" << endl;
			cout << "   |   |   " << endl;
			cout << " " << d << " " << "|" << " " << e << " " << "|" << " " << f << " " << endl;
			cout << "___|___|___" << endl;
			cout << "   |   |   " << endl;
			cout << " " << g << " " << "|" << " " << h << " " << "|" << " " << i << " " << endl;
			cout << "   |   |   " << endl << endl;

			if ((a == 'X' && b == 'X' && c == 'X') || (c == 'X' && f == 'X' && i == 'X') || (g == 'X' && h == 'X' && i == 'X') || (a == 'X' && d == 'X' && g == 'X') || (a == 'X' && e == 'X' && i == 'X') || (c == 'X' && e == 'X' && g == 'X') || (b == 'X' && e == 'X' && h == 'X'))
			{
				cout << "player one wins" << endl;
				break;
			}
			else if ((a == 'O' && b == 'O' && c == 'O') || (c == 'O' && f == 'O' && i == 'O') || (g == 'O' && h == 'O' && i == 'O') || (a == 'O' && d == 'O' && g == 'O') || (a == 'O' && e == 'O' && i == 'O') || (c == 'O' && e == 'O' && g == 'O') || (b == 'O' && e == 'O' && h == 'O'))
			{
				cout << "player two wins" << endl;
				break;
			}
			choice++;
			if (choice >= 9)
			{
				cout << "draw" << endl;
				break;
			}

			for (int choice1 = 1; choice1 <= 1; choice1++)
			{
				
				p2 = rand() %9;
				

				if (p2 == 1)
				{
					a = 'O';
				}
				else if (p2 == 2)
				{
					b = 'O';
				}
				else if (p2 == 3)
				{
					c = 'O';
				}
				else if (p2 == 4)
				{
					d = 'O';
				}
				else if (p2 == 5)
				{
					e = 'O';
				}
				else if (p2 == 6)
				{
					f = 'O';
				}
				else if (p2 == 7)
				{
					g = 'O';
				}
				else if (p2 == 8)
				{
					h = 'O';
				}
				else if (p2 == 9)
				{
					i = 'O';
				}
				else
				{
					cout << "invalid input" << endl;
				}
				if (p1 == p2)
				{
					cout << "Space is already taken" << endl;
				}


				cout << "   |   |   " << endl;
				cout << " " << a << " " << "|" << " " << b << " " << "|" << " " << c << " " << endl;
				cout << "___|___|___" << endl;
				cout << "   |   |   " << endl;
				cout << " " << d << " " << "|" << " " << e << " " << "|" << " " << f << " " << endl;
				cout << "___|___|___" << endl;
				cout << "   |   |   " << endl;
				cout << " " << g << " " << "|" << " " << h << " " << "|" << " " << i << " " << endl;
				cout << "   |   |   " << endl << endl;

				break;

			}
			if ((a == 'X' && b == 'X' && c == 'X') || (c == 'X' && f == 'X' && i == 'X') || (g == 'X' && h == 'X' && i == 'X') || (a == 'X' && d == 'X' && g == 'X') || (a == 'X' && e == 'X' && i == 'X') || (c == 'X' && e == 'X' && g == 'X') || (b == 'X' && e == 'X' && h == 'X'))
			{
				cout << "player one wins" << endl;
				break;
			}
			else if ((a == 'O' && b == 'O' && c == 'O') || (c == 'O' && f == 'O' && i == 'O') || (g == 'O' && h == 'O' && i == 'O') || (a == 'O' && d == 'O' && g == 'O') || (a == 'O' && e == 'O' && i == 'O') || (c == 'O' && e == 'O' && g == 'O') || (b == 'O' && e == 'O' && h == 'O'))
			{
				cout << "player two wins" << endl;
				break;
			}
			if (choice >= 9)
			{
				cout << "draw" << endl;
				break;
			}
			continue;
		}

	}

	system("pause");
	return 0;
}