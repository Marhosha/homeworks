#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <conio.h>
using namespace std;

void press_enter() {
	cout << "Нажмите Enter, чтобы сделать бросок ";
	getchar();
}

void show_stats(int user, int bot, int user_score, int bot_score)
{
	cout << "\nВам выпало число: " << user;
	cout << "\nБоту выпало число: " << bot << endl << endl;
	cout << "Вы: " << user_score << " Бот: " << bot_score << endl << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int user_score = 0;
	int bot_score = 0;

	press_enter();
	int user1 = 1 + rand() % 6;
	int bot1 = 1 + rand() % 6;
	user_score = user_score + user1;
	bot_score = user_score + bot1;
	show_stats(user1, bot1, user_score, bot_score);

	press_enter();
	int user2 = 1 + rand() % 6;
	int bot2 = 1 + rand() % 6;
	user_score = user_score + user2;
	bot_score = bot_score + bot2;
	show_stats(user2, bot2, user_score, bot_score);

	press_enter();
	int user3 = 1 + rand() % 6;
	int bot3 = 1 + rand() % 6;
	user_score = user_score + user3;
	bot_score = bot_score + bot3;
	show_stats(user3, bot3, user_score, bot_score);

	press_enter();
	int user4 = 1 + rand() % 6;
	int bot4 = 1 + rand() % 6;
	user_score = user_score + user4;
	bot_score = bot_score + bot4;
	show_stats(user4, bot4, user_score, bot_score);

	if (user_score > bot_score) {
		cout << "Вы победили !!!";
	} 
	else if (user_score == bot_score) {
		cout << "Ничья !!!";
	}
	else { 
		cout << "Вы проиграли";
	}

	cout << "\n\nНажмите любую клавишу, чтобы продолжить или q, чтобы закончить\n\n";

	if (_getch() != 169) {
		main();
	}
}
	



