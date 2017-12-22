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
	cout << "Какой тест хотите пройти? 1/2? ";
	int nt;
	cin >> nt;

	system("cls");

	switch (nt)
	{
	case 1:
	{

		cout << "зачем вы хотите изучить программирование?" << endl;

		SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
		cout << " __________________________________ " << endl
			<< "|                                  |" << endl
			<< "|         для детей  - 1           |" << endl
			<< "|         заработать - 2           |" << endl
			<< "|       поразвлечься - 3           |" << endl
			<< "|          интересно - 4           |" << endl
			<< "|       саморазвитие - 5           |" << endl
			<< "|  я не знаю, выберите за меня- 6  |" << endl
			<< "|                                  |" << endl
			<< "|__________________________________|" << endl;

		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
		cin >> y;

		switch (y)
		{
		case 1:
		{
			cout << "начните со Scratch, затем..." << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((9 << 4) | 15));
			cout << " __________ " << endl;
			cout << "|  PYTHON  |" << endl;
			cout << "|____***___|" << endl;
		}break;

		case 2:
		{	SetConsoleTextAttribute(hConsole, (WORD)((98 << 4) | 15));
		cout << " ______________________________________ " << endl;
		cout << "| у вас есть идея для стартапа? - 1    |" << endl
			<< "| или вы хотите найти работу?   - 2    |" << endl
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
			cout << "|  какая платформа/сфера?     |" << endl;
			cout << "|       3d/игры - 1           |" << endl
				<< "|     мобильная - 2           |" << endl
				<< "|     корп.софт - 3           |" << endl
				<< "|           веб - 4           |" << endl
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
				cout << "       какая OS?  " << endl
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
				cout << "    что скажете о Microsoft?   " << endl
					<< "         люблю его - 1         " << endl
					<< "           неплохо - 2         " << endl
					<< "               фуу - 3         " << endl;
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
				cout << "  ваш сервис будет работать в реальном времени, как twitter?  " << endl
					<< "                           да - 1                             " << endl
					<< "                          нет - 2                             " << endl;
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
					cout << "хотите попробовать что-то новое, но не очень трудоемкое?" << endl
						<< "                        да - 1                          " << endl
						<< "                   не знаю - 2                          " << endl
						<< "                       нет - 3                          " << endl;
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
						cout << "      какая у вас любимая игрушка?    " << endl
							<< "                LEGO - 1               " << endl
							<< "           пластилин - 2               " << endl
							<< "    старенький, но любимый мишка - 3   " << endl;
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
						cout << "      какая у вас любимая игрушка?    " << endl
							<< "                LEGO - 1               " << endl
							<< "           пластилин - 2               " << endl
							<< "    старенький, но любимый мишка - 3   " << endl;
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
			cout << "          какая платформа/сфера?           " << endl
				<< " я хочу работать в крупной it-компании - 1 " << endl
				<< "         я просто хочу $$$ - 2             " << endl
				<< "                    веб - 3                " << endl
				<< "                корп.софт - 4              " << endl
				<< "                мобильная - 5              " << endl
				<< "                 3d/игры - 6               " << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			cin >> y;
			switch (y)
			{
			case 1:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((214 << 4) | 163));
				cout << " я хочу работать в крупной it-компании:  " << endl
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
				cout << "       веб:       " << endl
					<< "    фронтенд - 1  " << endl
					<< "      бекэнд - 2  " << endl;
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
					cout << "               бэкенд:           " << endl
						<< "      хочу работать на ...       " << endl
						<< "          корпорацию - 1         " << endl
						<< "            стартап - 2          " << endl;
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
			cout << "   уже есть идея на милион?  " << endl
				<< "          да - 1             " << endl
				<< " нет, просто хочу начать - 2 " << endl;
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
				cout << "        нет, просто хочу начать                     " << endl
					<< "            мне нравится учиться                    " << endl
					<< "              простым способом - 1                  " << endl
					<< "             лучшим способом - 2                    " << endl
					<< "          трудненьким способом - 3                  " << endl
					<< "   очень сложный путь (но потом будет легче) - 4    " << endl;
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
					cout << " какая коробка передач? " << endl
						<< "       автомат - 1      " << endl
						<< "        ручная - 2      " << endl;
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
	cout << "хотите стать профессиональным музыкантом?1/0" << endl;

	SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
	cin >> z;

	switch (z)
	{
	case 1:
	{
		SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
		cout << "вы богаты?1/0" << endl;

		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
		cin >> z;

		switch (z)
		{
		case 1:
		{
		party:

			SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
			cout << "любите отрываться?" << endl;

			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			cin >> z;

			switch (z)
			{
			case 1:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
				cout << "пиво пьете?" << endl;

				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> z;

				switch (z)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
					cout << "хотите играть классику?(да-1, нет-0, не знаю-2" << endl;

					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
					cin >> z;

					switch (z)
					{
					case 1:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
						cout << "готовы работать целые сутки?" << endl;

						SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
						cin >> z;

						switch (z)
						{
						case 1:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
							cout << "              " << endl;
							cout << "    ГОБОЙ     " << endl;
							cout << "              " << endl;
						}break;

						case 0:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
							cout << "готовы к тому, что будут проблемы с работой, даже если вы круто играете?" << endl;

							SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
							cin >> z;

							switch (z)
							{
							case 1:
							{
								SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
								cout << "                  " << endl;
								cout << "     КЛАРНЕТ      " << endl;
								cout << "                  " << endl;
							}break;

							case 0:
							{
								SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
								cout << "                  " << endl;
								cout << "     ВАЛТОРНА     " << endl;
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
						cout << "     ТРОМБОН     " << endl;
						cout << "                 " << endl;
					}break;

					case 0:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
						cout << "...а джаз?" << endl;

						SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
						cin >> z;

						switch (z)
						{
						case 1:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
							cout << "                  " << endl;
							cout << "     САКСОФОН     " << endl;
							cout << "                  " << endl;
						}break;

						case 0:
						{
							SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
							cout << "у вас есть немецкие корни?" << endl;

							SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
							cin >> z;

							switch (z)
							{
							case 1:
							{
								SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
								cout << "                 " << endl;
								cout << "       ТРУБА     " << endl;
								cout << "                 " << endl;
							}break;

							case 0:
							{
								SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
								cout << "                 " << endl;
								cout << "       ДУДУК     " << endl;
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
					cout << "вы страстная натура?" << endl;

					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
					cin >> z;

					switch (z)
					{
					case 1:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "                   " << endl;
						cout << "     ВИОЛОНЧЕЛЬ    " << endl;
						cout << "                   " << endl;
					}break;

					case 0:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "                " << endl;
						cout << "     ДОМБРА     " << endl;
						cout << "                " << endl;
					}break;
					}
				}break;
				}
			}break;
			case 0:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
				cout << "готовы заниматься по 8 часов в день?" << endl;

				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> z;

				switch (z)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
					cout << "хотите учить детей?" << endl;

					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
					cin >> z;

					switch (z)
					{
					case 1:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "               " << endl;
						cout << "    ФЛЕЙТА     " << endl;
						cout << "               " << endl;
					}break;

					case 0:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "                 " << endl;
						cout << "     СКРИПКА     " << endl;
						cout << "                 " << endl;
					}break;
					}
				}break;

				case 0:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
					cout << "ноты знаете?" << endl;

					SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
					cin >> z;

					switch (z)
					{
					case 1:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "               " << endl;
						cout << "      АРФА     " << endl;
						cout << "               " << endl;
					}break;

					case 0:
					{
						SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
						cout << "               " << endl;
						cout << "      АЛЬТ     " << endl;
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
			cout << "любите деньги?" << endl;

			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			cin >> z;

			switch (z)
			{
			case 1:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((12 << 4) | 15));
				cout << "                 " << endl;
				cout << "ЗАБУДЬТЕ О МУЗЫКЕ" << endl;
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
		cout << "хотите встречаться с девушками?" << endl;

		SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
		cin >> z;

		switch (z)
		{
		case 1:
		{
			SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
			cout << "любите глупышек?" << endl;

			SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
			cin >> z;

			switch (z)
			{
			case 1:
			{
				SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
				cout << "любите выпить?" << endl;

				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> z;

				switch (z)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
					cout << "               " << endl;
					cout << "    ГИТАРА     " << endl;
					cout << "               " << endl;
				}break;

				case 0:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
					cout << "                   " << endl;
					cout << "    ФОРТЕПИАНО     " << endl;
					cout << "                   " << endl;
				}
				}
			}break;

			case 0:
			{
			man:

				SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
				cout << "вы парень?" << endl;
				
				SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
				cin >> z;

				switch (z)
				{
				case 1:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
					cout << "                        " << endl;
					cout << "      ОПЕРНЫЙ ПЕВЕЦ     " << endl;
					cout << "                        " << endl;
				}break;

				case 0:
				{
					SetConsoleTextAttribute(hConsole, (WORD)((62 << 4) | 13));
					cout << "                 " << endl;
					cout << "     УДАРНЫЕ     " << endl;
					cout << "                 " << endl;
				}break;
				}

			}break;
			}
		}break;
		
		case 0:
		{
			SetConsoleTextAttribute(hConsole, (WORD)((21 << 4) | 75));
			cout << "хотите встречаться с парнями?" << endl;

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
				cout << "     ФАГОТ     " << endl;
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
	cout << "Хотите продолжить 1/0?";
	cin >> q;

	switch (q)
	{
	case 1:
		system("cls");
		goto start;
		break;
	default:
	{
		cout << "ошибка" << endl;
	}
	}
	system("pause");
	return 0;
}

