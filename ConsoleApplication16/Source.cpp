#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>
#include <windows.h>


using namespace std;
int y;

int main()

{
	setlocale(LC_ALL, "Russian");

	int bckr, t;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
start:



	/*SetConsoleTextAttribute(hConsole, (WORD)((bckr << 4) | t));
*/
	cout << "����� ���� ������ ������? 1/2? ";
	int nt;
	cin >> nt;

	system("cls");

	switch (nt)
	{
	case 1:
	{

		cout << "����� �� ������ ������� ����������������?" << endl;

		SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
		cout << " __________________________________ " << endl
			<< "|                                  |" << endl
			<< "|         ��� �����  - 1           |" << endl
			<< "|         ���������� - 2           |" << endl
			<< "|       ������������ - 3           |" << endl
			<< "|          ��������� - 4           |" << endl
			<< "|       ������������ - 5           |" << endl
			<< "|  � �� ����, �������� �� ����- 6  |" << endl
			<< "|                                  |" << endl
			<< "|__________________________________|" << endl;

		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
		cin >> y;

		switch (y)
		{
		case 1:
		{
			cout << "������� �� Scratch, �����..." << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((9 << 4) | 15));
			cout << " __________ " << endl;
			cout << "|  PYTHON  |" << endl;
			cout << "|____***___|" << endl;
		}break;

		case 2:
		{	SetConsoleTextAttribute(hConsole, (WORD)((98 << 4) | 15));
		cout << " ______________________________________ " << endl;
		cout << "| � ��� ���� ���� ��� ��������? - 1    |" << endl
			<< "| ��� �� ������ ����� ������?   - 2    |" << endl
			<< "|______________________________________|" << endl;
		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
		cin >> y;
		switch (y)
		{
		case 1:
		{
		which:

			SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
			cout << " _____________________________ " << endl
				<< "|                             |" << endl;
			cout << "|  ����� ���������/�����?     |" << endl;
			cout << "|       3d/���� - 1           |" << endl
				<< "|     ��������� - 2           |" << endl
				<< "|     ����.���� - 3           |" << endl
				<< "|           ��� - 4           |" << endl
				<< "|_____________________________|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			cin >> y;
			switch (y)
			{
			case 1:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((243 << 4) | 15));
				cout << "   C++   " << endl;
				cout << "   ***   " << endl;
			}break;

			case 2:
			{
			mob:

				SetConsoleTextAttribute(hConsole, (WORD)((121 << 4) | 95));
				cout << "       ����� OS?  " << endl
					<< "       IOS - 1    " << endl
					<< "   Android - 2    " << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> y;
				switch (y)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((5 << 4) | 15));
					cout << "   Objective C   " << endl;
					cout << "       ***       " << endl;
				}break;

				case 2:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((12 << 4) | 15));
					cout << "      JAVA      " << endl;
					cout << "       ***      " << endl;
				}break;
				}
			}break;

			case 3:
			{
			corp:
				SetConsoleTextAttribute(hConsole, (WORD)((203 << 4) | 163));
				cout << "    ��� ������� � Microsoft?   " << endl
					<< "         ����� ��� - 1         " << endl
					<< "           ������� - 2         " << endl
					<< "               ��� - 3         " << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> y;
				switch (y)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((10 << 4) | 15));
					cout << "        C#      " << endl;
					cout << "       ***      " << endl;
				}break;
				case 2:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((12 << 4) | 15));
					cout << "      JAVA      " << endl;
					cout << "       ***      " << endl;
				}break;
				case 3:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((12 << 4) | 15));
					cout << "      JAVA      " << endl;
					cout << "       ***      " << endl;
				}break;

				}
			}break;

			case 4:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((95 << 4) | 221));
				cout << "  ��� ������ ����� �������� � �������� �������, ��� twitter?  " << endl
					<< "                           �� - 1                             " << endl
					<< "                          ��� - 2                             " << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> y;
				switch (y)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((6 << 4) | 0));
					cout << "   Javascript   " << endl;
					cout << "       ***      " << endl;
				}break;
				case 2:
				{
				wish:

					SetConsoleTextAttribute(hConsole, (WORD)((54 << 4) | 314));
					cout << "������ ����������� ���-�� �����, �� �� ����� ����������?" << endl
						<< "                        �� - 1                          " << endl
						<< "                   �� ���� - 2                          " << endl
						<< "                       ��� - 3                          " << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
					cin >> y;
					switch (y)
					{
					case 1:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((6 << 4) | 0));
						cout << "   Javascript   " << endl;
						cout << "       ***      " << endl;
					}break;

					case 2:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((64 << 4) | 97));
						cout << "      ����� � ��� ������� �������?    " << endl
							<< "                LEGO - 1               " << endl
							<< "           ��������� - 2               " << endl
							<< "    ����������, �� ������� ����� - 3   " << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
						cin >> y;
						switch (y)
						{
						case 1:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((9 << 4) | 15));
							cout << "  PYTHON  " << endl;
							cout << "   ***    " << endl;
						}break;

						case 2:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((243 << 4) | 12));
							cout << "   RUBY   " << endl;
							cout << "   ****   " << endl;
						}break;

						case 3:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 15));
							cout << "   PHP    " << endl;
							cout << "   ***    " << endl;
						}break;
						}
					}break;

					case 3:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((64 << 4) | 97));
						cout << "      ����� � ��� ������� �������?    " << endl
							<< "                LEGO - 1               " << endl
							<< "           ��������� - 2               " << endl
							<< "    ����������, �� ������� ����� - 3   " << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
						cin >> y;
						switch (y)
						{
						case 1:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((9 << 4) | 15));
							cout << "  PYTHON  " << endl;
							cout << "   ***    " << endl;
						}break;

						case 2:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((243 << 4) | 12));
							cout << "   RUBY   " << endl;
							cout << "   ****   " << endl;
						}break;

						case 3:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 15));
							cout << "   PHP    " << endl;
							cout << "   ***    " << endl;
						}break;
						}
					}break;
					}


				}break;
				}
			}break;
			}
		}break;

		case 2:
		{
			SetConsoleTextAttribute(hConsole, (WORD)((64 << 4) | 216));
			cout << "          ����� ���������/�����?           " << endl
				<< " � ���� �������� � ������� it-�������� - 1 " << endl
				<< "         � ������ ���� $$$ - 2             " << endl
				<< "                    ��� - 3                " << endl
				<< "                ����.���� - 4              " << endl
				<< "                ��������� - 5              " << endl
				<< "                 3d/���� - 6               " << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			cin >> y;
			switch (y)
			{
			case 1:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((214 << 4) | 163));
				cout << " � ���� �������� � ������� it-��������:  " << endl
					<< "              facebook - 1               " << endl
					<< "              google - 2                 " << endl
					<< "              microsoft - 3              " << endl
					<< "              apple - 4                  " << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> y;
				switch (y)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((9 << 4) | 15));
					cout << "  PYTHON  " << endl;
					cout << "   ***    " << endl;
				}break;

				case 2:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((9 << 4) | 15));
					cout << "  PYTHON  " << endl;
					cout << "   ***    " << endl;
				}break;

				case 3:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((10 << 4) | 15));
					cout << "        C#      " << endl;
					cout << "       ***      " << endl;
				}break;

				case 4:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((5 << 4) | 15));
					cout << "   Objective C   " << endl;
					cout << "       ***       " << endl;
				}break;
				}


			}break;

			case 2:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((12 << 4) | 15));
				cout << "      JAVA      " << endl;
				cout << "       ***      " << endl;
			}break;

			case 3:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((82 << 4) | 15));
				cout << "       ���:       " << endl
					<< "    �������� - 1  " << endl
					<< "      ������ - 2  " << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> y;
				switch (y)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((6 << 4) | 0));
					cout << "   Javascript   " << endl;
					cout << "       ***      " << endl;
				}break;
				case 2:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((35 << 4) | 15));
					cout << "               ������:           " << endl
						<< "      ���� �������� �� ...       " << endl
						<< "          ���������� - 1         " << endl
						<< "            ������� - 2          " << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
					cin >> y;
					switch (y)
					{
					case 1:
					{
						goto corp;
					}break;
					case 2:
					{
						goto wish;
					}break;
					}

				}
				}
			}break;

			case 4:
			{
				goto corp;
			}break;

			case 5:
			{
				goto mob;
			}break;

			case 6:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((243 << 4) | 15));
				cout << "    C++   " << endl;
				cout << "    ***   " << endl;
			}break;
			}
		}break;

		}
		}break;

		case 3:
		{
		round:

			SetConsoleTextAttribute(hConsole, (WORD)((236 << 4) | 15));
			cout << "   ��� ���� ���� �� ������?  " << endl
				<< "          �� - 1             " << endl
				<< " ���, ������ ���� ������ - 2 " << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			cin >> y;

			switch (y)
			{
			case 1:
			{
				goto which;
			}break;
			case 2:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((226 << 4) | 15));
				cout << "        ���, ������ ���� ������                     " << endl
					<< "            ��� �������� �������                    " << endl
					<< "              ������� �������� - 1                  " << endl
					<< "             ������ �������� - 2                    " << endl
					<< "          ����������� �������� - 3                  " << endl
					<< "   ����� ������� ���� (�� ����� ����� �����) - 4    " << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> y;

				switch (y)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((9 << 4) | 15));
					cout << "  PYTHON  " << endl;
					cout << "   ***    " << endl;
				}break;
				case 2:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((9 << 4) | 15));
					cout << "  PYTHON  " << endl;
					cout << "   ***    " << endl;
				}break;
				case 3:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((9 << 4) | 18));
					cout << " ����� ������� �������? " << endl
						<< "       ������� - 1      " << endl
						<< "        ������ - 2      " << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
					cin >> y;

					switch (y)
					{
					case 1:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((12 << 4) | 15));
						cout << "      JAVA      " << endl;
						cout << "       ***      " << endl;
					}break;

					case 2:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 15));
						cout << "    C    " << endl;
						cout << "   ***    " << endl;
					}break;
					}

				}break;
				case 4:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((243 << 4) | 15));
					cout << "   C++   " << endl;
					cout << "   ***   " << endl;
				}break;
				}

			}break;
			}

		}break;

		case 4:
		{
			goto round;
		}break;

		case 5:
		{
			goto round;
		}break;

		case 6:
		{
			SetConsoleTextAttribute(hConsole, (WORD)((9 << 4) | 15));
			cout << "  PYTHON  " << endl;
			cout << "   ***    " << endl;
		}break;
		}
	}break;

	case 2:
	{	int z;
	SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
	cout << "������ ����� ���������������� ����������?1/0" << endl;

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	cin >> z;

	switch (z)
	{
	case 1:
	{
		SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
		cout << "�� ������?1/0" << endl;

		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
		cin >> z;

		switch (z)
		{
		case 1:
		{
		party:

			SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
			cout << "������ ����������?" << endl;

			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			cin >> z;

			switch (z)
			{
			case 1:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
				cout << "���� �����?" << endl;

				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> z;

				switch (z)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
					cout << "������ ������ ��������?(��-1, ���-0, �� ����-2" << endl;

					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
					cin >> z;

					switch (z)
					{
					case 1:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
						cout << "������ �������� ����� �����?" << endl;

						SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
						cin >> z;

						switch (z)
						{
						case 1:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
							cout << "              " << endl;
							cout << "    �����     " << endl;
							cout << "              " << endl;
						}break;

						case 0:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
							cout << "������ � ����, ��� ����� �������� � �������, ���� ���� �� ����� �������?" << endl;

							SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
							cin >> z;

							switch (z)
							{
							case 1:
							{
								SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
								cout << "                  " << endl;
								cout << "     �������      " << endl;
								cout << "                  " << endl;
							}break;

							case 0:
							{
								SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
								cout << "                  " << endl;
								cout << "     ��������     " << endl;
								cout << "                  " << endl;
							}break;
							}

						}break;
						}
					}break;
					case 2:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "                 " << endl;
						cout << "     �������     " << endl;
						cout << "                 " << endl;
					}break;

					case 0:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
						cout << "...� ����?" << endl;

						SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
						cin >> z;

						switch (z)
						{
						case 1:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
							cout << "                  " << endl;
							cout << "     ��������     " << endl;
							cout << "                  " << endl;
						}break;

						case 0:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
							cout << "� ��� ���� �������� �����?" << endl;

							SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
							cin >> z;

							switch (z)
							{
							case 1:
							{
								SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
								cout << "                 " << endl;
								cout << "       �����     " << endl;
								cout << "                 " << endl;
							}break;

							case 0:
							{
								SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
								cout << "                 " << endl;
								cout << "       �����     " << endl;
								cout << "                 " << endl;
							}break;
							}

						}break;
						}
					}break;
					}

				}break;

				case 0:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
					cout << "�� ��������� ������?" << endl;

					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
					cin >> z;

					switch (z)
					{
					case 1:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "                   " << endl;
						cout << "     ����������    " << endl;
						cout << "                   " << endl;
					}break;

					case 0:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "                " << endl;
						cout << "     ������     " << endl;
						cout << "                " << endl;
					}break;
					}
				}break;
				}
			}break;
			case 0:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
				cout << "������ ���������� �� 8 ����� � ����?" << endl;

				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> z;

				switch (z)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
					cout << "������ ����� �����?" << endl;

					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
					cin >> z;

					switch (z)
					{
					case 1:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "               " << endl;
						cout << "    ������     " << endl;
						cout << "               " << endl;
					}break;

					case 0:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "                 " << endl;
						cout << "     �������     " << endl;
						cout << "                 " << endl;
					}break;
					}
				}break;

				case 0:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
					cout << "���� ������?" << endl;

					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
					cin >> z;

					switch (z)
					{
					case 1:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "               " << endl;
						cout << "      ����     " << endl;
						cout << "               " << endl;
					}break;

					case 0:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "               " << endl;
						cout << "      ����     " << endl;
						cout << "               " << endl;
					}break;
					}
				}break;
				}
			}break;
			}
		}break;

		case 0:
		{
			SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
			cout << "������ ������?" << endl;

			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			cin >> z;

			switch (z)
			{
			case 1:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((12 << 4) | 15));
				cout << "                 " << endl;
				cout << "�������� � ������" << endl;
				cout << "                 " << endl;
			}break;
			case 0:
			{
				goto party;
			}break;
			}
		}break;
		}
	}break;

	case 0:
	{
		SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
		cout << "������ ����������� � ���������?" << endl;

		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
		cin >> z;

		switch (z)
		{
		case 1:
		{
			SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
			cout << "������ ��������?" << endl;

			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			cin >> z;

			switch (z)
			{
			case 1:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
				cout << "������ ������?" << endl;

				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> z;

				switch (z)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
					cout << "               " << endl;
					cout << "    ������     " << endl;
					cout << "               " << endl;
				}break;

				case 0:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
					cout << "                   " << endl;
					cout << "    ����������     " << endl;
					cout << "                   " << endl;
				}
				}
			}break;

			case 0:
			{
			man:

				SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
				cout << "�� ������?" << endl;
				
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> z;

				switch (z)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
					cout << "                        " << endl;
					cout << "      ������� �����     " << endl;
					cout << "                        " << endl;
				}break;

				case 0:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
					cout << "                 " << endl;
					cout << "     �������     " << endl;
					cout << "                 " << endl;
				}break;
				}

			}break;
			}
		}break;
		
		case 0:
		{
			SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
			cout << "������ ����������� � �������?" << endl;

			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			cin >> z;

			switch (z)
			{
			case 1:
			{
				goto man;
			}break;

			case 0:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
				cout << "               " << endl;
				cout << "     �����     " << endl;
				cout << "               " << endl;
			}break;
			}
		}break;
		}
	}break;
	}
	}break;

	}

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 7));
	int q;
	cout << "������ ���������� 1/0?";
	cin >> q;

	switch (q)
	{
	case 1:
		system("cls");
		goto start;
		break;
	default:
	{
		cout << "������" << endl;
	}
	}
	system("pause");
	return 0;
}

