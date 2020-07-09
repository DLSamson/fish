#include<iostream>
#include<windows.h>
#include<string>
#include<fstream>
using namespace std;
//Технические переменные
int loadspeed;
int speedanim;
//Игровые переменные
int health;
int money;
int food;
int extra;
int died;

void animations() {
	//Скорость анимации рыбки
	int speedanim = 300
		//*	//Кадры плавания(влево)
#define frame0l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~_,,,_~ ~\n"; cout << "~ ~ ~ ~ ~<0)(8888><(~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame1l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ _,,,_ ~ ~\n"; cout << "~ ~ ~ ~ <0)(8888><( ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame2l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~_,,,_~ ~ ~\n"; cout << "~ ~ ~ ~<0)(8888><(~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame3l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ _,,,_ ~ ~ ~\n"; cout << "~ ~ ~ <0)(8888><( ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame4l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~_,,,_~ ~ ~ ~\n"; cout << "~ ~ ~<0)(8888><(~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame5l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ _,,,_ ~ ~ ~ ~\n"; cout << "~ ~ <0)(8888><( ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame6l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~_,,,_~ ~ ~ ~ ~\n"; cout << "~ ~<0)(8888><(~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame7l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ _,,,_ ~ ~ ~ ~ ~\n"; cout << "~ <0)(8888><( ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame8l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~_,,,_~ ~ ~ ~ ~ ~\n"; cout << "~<0)(8888><(~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
	//Плывёт(лево)
#define anim1l frame0l; Sleep(speedanim); system("cls"); frame1l; Sleep(speedanim); system("cls"); frame2l; Sleep(speedanim); system("cls"); frame3l; Sleep(speedanim); system("cls"); frame4l; Sleep(speedanim); system("cls");  frame5l; Sleep(speedanim); system("cls"); frame6l; Sleep(speedanim); system("cls"); frame7l; Sleep(speedanim); system("cls"); frame8l; Sleep(speedanim); system("cls");

//*	//Кадры плавания(право)
#define frame0r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~_,,,_~ ~ ~ ~ ~ ~ ~\n"; cout << ")><8888)(0> ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame1r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ _,,,_ ~ ~ ~ ~ ~ ~\n"; cout << "~)><8888)(0>~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame2r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~_,,,_~ ~ ~ ~ ~ ~\n"; cout << "~ )><8888)(0> ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame3r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ _,,,_ ~ ~ ~ ~ ~\n"; cout << "~ ~)><8888)(0>~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame4r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~_,,,_  ~ ~ ~ ~\n"; cout << "~ ~ )><8888)(0> ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame5r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ _,,,_ ~ ~ ~ ~\n"; cout << "~ ~ ~)><8888)(0>~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame6r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~_,,,_~ ~ ~ ~\n"; cout << "~ ~ ~ )><8888)(0> ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame7r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ _,,,_ ~ ~ ~\n"; cout << "~ ~ ~ ~)><8888)(0>~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame8r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~_,,,_~ ~ ~\n"; cout << "~ ~ ~ ~ )><8888)(0> ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
	//Плывёт(право)
#define anim1r frame0r; Sleep(speedanim); system("cls"); frame1r; Sleep(speedanim); system("cls"); frame2r; Sleep(speedanim); system("cls"); frame3r; Sleep(speedanim); system("cls"); frame4r; Sleep(speedanim); system("cls");  frame5r; Sleep(speedanim); system("cls"); frame6r; Sleep(speedanim); system("cls"); frame7r; Sleep(speedanim); system("cls"); frame8r; Sleep(speedanim); system("cls");

//* //Кадры плавания(право)(экстра)
#define frame0re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~_,,,_~ ~ ~ ~ ~ ~ ~\n"; cout << ")><8888)(0> ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame1re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ _,,,_ ~ ~ ~ ~ ~ ~\n"; cout << "~)><8888)(0>~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame2re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~_,,,_~ ~ ~ ~ ~ ~\n"; cout << "~ )><8888)(0> ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame3re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ _,,,_ ~ ~ ~ ~ ~\n"; cout << "~ ~)><8888)(0>~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame4re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~_,,,_  ~ ~ ~ ~\n"; cout << "~ ~ )><8888)(0> ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame5re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ _,,,_ ~ ~ ~ ~\n"; cout << "~ ~ ~)><8888)(0>~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame6re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~_,,,_~ ~ ~ ~\n"; cout << "~ ~ ~ )><8888)(0> ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame7re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ _,,,_ ~ ~ ~\n"; cout << "~ ~ ~ ~)><8888)(0>~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame8re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~_,,,_~ ~ ~\n"; cout << "~ ~ ~ ~ )><8888)(0> ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame9re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ _,,,_ ~ ~\n"; cout << "~ ~ ~ ~ ~)><8888)(0>~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame10re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ _,,,_ ~ ~\n"; cout << "~ ~ ~ ~ ~ )><8888)(0>\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame11re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~_,,,_~ ~\n"; cout << "~ ~ ~ ~ ~ ~)><8888)(0\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame12re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ _,,,_ ~\n"; cout << "~ ~ ~ ~ ~ ~ )><8888)(\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame13re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~_,,,_~\n"; cout << "~ ~ ~ ~ ~ ~ ~)><8888)\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame14re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ _,,,_\n"; cout << "~ ~ ~ ~ ~ ~ ~()><8888\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame15re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~_,,,\n"; cout << "~ ~ ~ ~ ~ ~ ~(Т)><888\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame16re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ _,,\n"; cout << "~ ~ ~ ~ ~ ~ ~(Ты)><88\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame17re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~_,\n"; cout << "~ ~ ~ ~ ~ ~ ~(Ты )><8\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame18re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ _\n"; cout << "~ ~ ~ ~ ~ ~ ~(Ты л)><\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame19re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~(Ты ло)>\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame20re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~(Ты лох)\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame21re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~(Ты лох)\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame22re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~(Ты лох)\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame23re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~(Ты лох)\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";

	//Плывёт(право)(Экстра)
#define anim1re frame0re; Sleep(speedanim); system("cls"); frame1re; Sleep(speedanim); system("cls"); frame2re; Sleep(speedanim); system("cls"); frame3re; Sleep(speedanim); system("cls"); frame4re; Sleep(speedanim); system("cls");  frame5re; Sleep(speedanim); system("cls"); frame6re; Sleep(speedanim); system("cls"); frame7re; Sleep(speedanim); system("cls"); frame8re; Sleep(speedanim); system("cls"); frame9re; Sleep(speedanim); system("cls"); frame10re; Sleep(speedanim); system("cls"); frame11re; Sleep(speedanim); system("cls"); frame12re; Sleep(speedanim); system("cls"); frame13re; Sleep(speedanim); system("cls"); frame14re; Sleep(speedanim); system("cls"); frame15re; Sleep(speedanim); system("cls"); frame16re; Sleep(speedanim); system("cls"); frame17re; Sleep(speedanim); system("cls"); frame18re; Sleep(speedanim); system("cls"); frame19re; Sleep(speedanim); system("cls"); frame20re; Sleep(speedanim); system("cls"); frame21re; Sleep(speedanim); system("cls"); frame22re; Sleep(speedanim); system("cls"); frame23re; Sleep(speedanim); system("cls");
		;
}
void Health() {
	int health = 100;
	int move = 0;
	char died = 0;
#define die if (health <= 0) {anim1re; Sleep(3000); died = 1;}
#define dying if (move >= 1) {health = health - (10*move); move = 0;} die; if(died == 1) {cout << "Рыбка поняла, что тут ей делать нечего.\n Она решила свалить зарубеж."; Sleep(5000); return 0;}

}
void Money() {
	int money = 0;
#define randoming int one = rand(); int two = rand(); int three = one + two; int answer = 0;
#define gaining randoming cout << "Реши пример! " << one << " + " << two << " = ?\n"; cin >> answer; if (three == answer) {money = money + 30; cout << "Правильно! Держи свои щекели!\n Заработано: " << 30 << "$\nТеперь денег всего: " << money << "$ " << endl;} else {system("cls"); cout << "Ты лоханулся\n Твой остаток: " << money << "$" << endl; move = move + 1;} move = move + 1;
}
void Feeding() {
	int food = 0;
	int extra = 0;
#define amountfood cout<<"Осталось еды: "<< food << endl; //колво еды
#define feed if (food > 0) {food = food - 1; health= health + 5; extra++; system("cls"); cout << "Рыбка покормлена.\n";} else {system("cls"); cout << "У тебя еды нет, сходи затарься\n";}
//эволюция
#define evo if (extra >= 25) {cout << "Ваша рыбка эволюционировала и поняла, что вы ей больше не нужны\n"; Sleep(7000); anim1re; return 0;}
}
void Market() {
#define market cout << "Это магазин, здесь вы можете купить еду!\n\n"; cout << "1. Малая еда......................20$\n"; cout << "2. Средняя еда....................30$\n"; cout << "3. Большая еда....................50$\n"; cout << "4. Огромная еда...................100$\n"; cout << "42. Выход\n";
}

int main() {
	int loadspeed = 0;
	int speedanim = 300;
	cout << "Loading"; Sleep(loadspeed); cout << "."; Sleep(loadspeed); cout << "."; Sleep(loadspeed); cout << ".\n"; Sleep(loadspeed);
animations;
Health;
Money;
Feeding;

//system("color 14");
system("color 02");
setlocale(0, "");

int health = 60;
int money = 20;
int move = 0;
int food = 0;
int extra = 0; //эволюция
char died = 0;

	cout << "Игра с рыбкой. Ваша задача: не дать рыбке умереть!\n\n";
for (;;) {
	cout << "1. Заработать денег.             " << "Кол-во денег:" << money << "$\n";
	cout << "2. Покормить рыбку.              " << "Кол-во еды: " << food << "\n";
	cout << "3. Купить еды.                   " << "Кол-во здоровья у Рыбки: " << health << "%\n";
	cout << "99. Выйти из игры.(Не сохраняется)" << "\n";
	int choice;
	cin >> choice;
	switch (choice) {
	case 1: {
		gaining
		dying
		cout << "Здоровья у Рыбки: " << health << "%" << endl;
		break;
	}
	case 2: {
		feed
			evo
			amountfood;
		break;
	}
	case 3: {
#define notmoney cout<<"Ты бомж, сходи заработай денег!\n";
		system("cls");
		cout << "Кол-во денег: " << money << "$" << endl << "Кол-во еды: " << food << endl << "Кол-во здоровья у Рыбки: " << health << "%\n" << endl;
		market
	int buy = 0;
	cin >> buy;
		switch (buy) {
			case 1: {if (money >= 20) { money = money - 20; food++; amountfood} else { notmoney } break; }
			case 2: {if (money >= 20) { money = money - 30; food = food + 2; amountfood} else { notmoney } break; }
			case 3: {if (money >= 20) { money = money - 50; food = food + 5; amountfood} else { notmoney } break; }
			case 4: {if (money >= 20) { money = money - 100; food = food + 10; amountfood} else { notmoney } break; }
			case 42: {break; }
			default: {
				cout << "Вводи номер еды, епта\n";
				return 0;
				break;
			}
			}
		break;
	}
	case 42: {
		health = health - 100;
		die;
		cout << "Пока ты смотрел на рыбу, она сбежала от тебя\n"; Sleep(7000); cout << "Ты лох"; Sleep(1000); cout << "."; Sleep(1000); cout << "."; Sleep(1000); cout << "."; Sleep(5000);
		return 0;
	}
	case 99: {return 0; }
	default: {
		cout << "Ты что то сломал и я не знаю что, пробуй заного\n"; Sleep(5000);
		return 0;
		break;
	}
	}
}
}


