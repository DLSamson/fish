#include<iostream>
#include<windows.h>
#include<string>
#include<fstream>
#include<math.h>
using namespace std;
//����������� ����������
int loadspeed;
int speedanim;

int one = 0;
int two = 0;
int minimum = 0;
int maximum = 50;
int answer = 0;


//�������  ����������
int health;
int money;
int food;
int extra;
int move;
char died;
int difficult;


void data() {

#define save ofstream out("data.txt"); out << health << "\n" << food << "\n" << money << "\n" << extra; out.close();
#define load ifstream in("data.txt"); in >> health >> food >> money >> extra; in.close();

}
void animations() {
	//�������� �������� �����
	int speedanim = 300
		//*	//���� ��������(�����)
#define frame0l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~_,,,_~ ~\n"; cout << "~ ~ ~ ~ ~<0)(8888><(~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame1l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ _,,,_ ~ ~\n"; cout << "~ ~ ~ ~ <0)(8888><( ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame2l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~_,,,_~ ~ ~\n"; cout << "~ ~ ~ ~<0)(8888><(~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame3l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ _,,,_ ~ ~ ~\n"; cout << "~ ~ ~ <0)(8888><( ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame4l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~_,,,_~ ~ ~ ~\n"; cout << "~ ~ ~<0)(8888><(~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame5l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ _,,,_ ~ ~ ~ ~\n"; cout << "~ ~ <0)(8888><( ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame6l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~_,,,_~ ~ ~ ~ ~\n"; cout << "~ ~<0)(8888><(~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame7l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ _,,,_ ~ ~ ~ ~ ~\n"; cout << "~ <0)(8888><( ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame8l cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~_,,,_~ ~ ~ ~ ~ ~\n"; cout << "~<0)(8888><(~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
	//������(����)
#define anim1l frame0l; Sleep(speedanim); system("cls"); frame1l; Sleep(speedanim); system("cls"); frame2l; Sleep(speedanim); system("cls"); frame3l; Sleep(speedanim); system("cls"); frame4l; Sleep(speedanim); system("cls");  frame5l; Sleep(speedanim); system("cls"); frame6l; Sleep(speedanim); system("cls"); frame7l; Sleep(speedanim); system("cls"); frame8l; Sleep(speedanim); system("cls");

//*	//���� ��������(�����)
#define frame0r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~_,,,_~ ~ ~ ~ ~ ~ ~\n"; cout << ")><8888)(0> ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame1r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ _,,,_ ~ ~ ~ ~ ~ ~\n"; cout << "~)><8888)(0>~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame2r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~_,,,_~ ~ ~ ~ ~ ~\n"; cout << "~ )><8888)(0> ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame3r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ _,,,_ ~ ~ ~ ~ ~\n"; cout << "~ ~)><8888)(0>~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame4r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~_,,,_  ~ ~ ~ ~\n"; cout << "~ ~ )><8888)(0> ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame5r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ _,,,_ ~ ~ ~ ~\n"; cout << "~ ~ ~)><8888)(0>~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame6r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~_,,,_~ ~ ~ ~\n"; cout << "~ ~ ~ )><8888)(0> ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame7r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ _,,,_ ~ ~ ~\n"; cout << "~ ~ ~ ~)><8888)(0>~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame8r cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~_,,,_~ ~ ~\n"; cout << "~ ~ ~ ~ )><8888)(0> ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
	//������(�����)
#define anim1r frame0r; Sleep(speedanim); system("cls"); frame1r; Sleep(speedanim); system("cls"); frame2r; Sleep(speedanim); system("cls"); frame3r; Sleep(speedanim); system("cls"); frame4r; Sleep(speedanim); system("cls");  frame5r; Sleep(speedanim); system("cls"); frame6r; Sleep(speedanim); system("cls"); frame7r; Sleep(speedanim); system("cls"); frame8r; Sleep(speedanim); system("cls");

//* //����� ��������(�����)(������)
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
#define frame15re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~_,,,\n"; cout << "~ ~ ~ ~ ~ ~ ~(�)><888\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame16re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ _,,\n"; cout << "~ ~ ~ ~ ~ ~ ~(��)><88\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame17re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~_,\n"; cout << "~ ~ ~ ~ ~ ~ ~(�� )><8\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame18re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ _\n"; cout << "~ ~ ~ ~ ~ ~ ~(�� �)><\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame19re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~(�� ��)>\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame20re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~(�� ���)\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame21re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~(�� ���)\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame22re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~(�� ���)\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";
#define frame23re cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~(�� ���)\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n"; cout << "~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n";

	//������ (�����)(������)
#define anim1re frame0re; Sleep(speedanim); system("cls"); frame1re; Sleep(speedanim); system("cls"); frame2re; Sleep(speedanim); system("cls"); frame3re; Sleep(speedanim); system("cls"); frame4re; Sleep(speedanim); system("cls");  frame5re; Sleep(speedanim); system("cls"); frame6re; Sleep(speedanim); system("cls"); frame7re; Sleep(speedanim); system("cls"); frame8re; Sleep(speedanim); system("cls"); frame9re; Sleep(speedanim); system("cls"); frame10re; Sleep(speedanim); system("cls"); frame11re; Sleep(speedanim); system("cls"); frame12re; Sleep(speedanim); system("cls"); frame13re; Sleep(speedanim); system("cls"); frame14re; Sleep(speedanim); system("cls"); frame15re; Sleep(speedanim); system("cls"); frame16re; Sleep(speedanim); system("cls"); frame17re; Sleep(speedanim); system("cls"); frame18re; Sleep(speedanim); system("cls"); frame19re; Sleep(speedanim); system("cls"); frame20re; Sleep(speedanim); system("cls"); frame21re; Sleep(speedanim); system("cls"); frame22re; Sleep(speedanim); system("cls"); frame23re; Sleep(speedanim); system("cls");
		;
}
void Health() {
	health = 100;
	int move = 0;
	char died = 0;
#define die if (health <= 0) {system("cls"); anim1re; Sleep(3000); died = 1;}
#define dying if (move >= 1) {health = health - (10*move); move = 0;} die; if(died == 1) {cout << "����� �� �������� �������� �����.\n����� ������, ��� ��� �� ������ ������.\n����� ������ ������� �������."; Sleep(5000); return 0;}

}
void Money() {
	int money = 0;
	int difficult = 0; //0 - easy, 1 - middle, 2 - hard, 3 - ultrahard
	int move = 0;
#define randoming switch (difficult) {case 0: {minimum = 1; maximum = 50;} case 1: {minimum = 1; maximum = 5000;} case 2: { minimum = 1;  maximum = 50000; } case 3: { minimum = 1;  maximum = 500000;} default: { minimum = 1;  maximum = 50; difficult = 0; break;}} one = minimum + rand() % (maximum - minimum + 1); two = minimum + rand() % (maximum - minimum + 1); three = one + two; answer = 0;
#define gaining randoming cout << "���� ������! " << one << " + " << two << " = ?\n"; cin >> answer; if (three == answer) {money = money + (10*difficult+15); cout << "���������! ����� ���� ������!\n ����������: " << (10*difficult+10) << "$\n������ ����� �����: " << money << "$ " << endl;} else {system("cls"); cout << "�� ���������\n ���� �������: " << money << "$" << endl; move = move + 1;} move = move + 1;
}
void Feeding() {
	food = 0;
	extra = 0;
#define amountfood cout<<"�������� ���: "<< food << endl; //���������� ���
#define feed if (food > 0) {food = food - 1; health= health + 5; extra++; system("cls"); cout << "����� ����������.\n";} else {system("cls"); cout << "� ���� ��� ���, ����� ��������\n";}
	//��������
#define evo if (extra >= 25) {cout << "���� ����� ���������������� � ������, ��� �� �� ������ �� �����\n"; Sleep(7000); anim1re; return 0;}
}
void Market() {
#define market cout << "��� �������, ����� �� ������ ������ ���!\n\n"; cout << "1. ����� ���......................20$\n"; cout << "2. ������� ���....................30$\n"; cout << "3. ������� ���....................50$\n"; cout << "4. �������� ���...................100$\n"; cout << "42. �����\n";
}

int main() {
	loadspeed = 100;
	speedanim = 300;
	cout << "Loading"; Sleep(loadspeed); cout << "."; Sleep(loadspeed); cout << "."; Sleep(loadspeed); cout << ".\n"; Sleep(loadspeed);
	animations;
	Health;
	Money;
	Feeding;


	//system("color 14");
	system("color 02");
	setlocale(0, "");

	//������� ��������
	health = 60;
	money = 20;
	int move = 0;
	food = 0;
	extra = 0; //Evolution
	died = 0;
	difficult = 1; //���������

	//Delete below?
	int three = 0;


    int gamestart = 0;
	cout << "���� � ������. ���� ������: �� ���� ����� �������!\n\n";
	cout << "1. ����� ����." << endl << "2. ���������� ����." << endl;
	cin >> gamestart;
    cout << endl << endl;
	switch(gamestart) {
        case 1: {
            system("cls");
            break;
        }
        case 2: {
            load;
            system("cls");
            break;
        }
        default: {
            cout << "� ���� �� �����, �� ���� ����� ����������.\n\n";
            system("pause");
            system("cls");
            break;

        }
	}

	for (;;) {
		cout << "1. ���������� �����.             " << "� �������:      " << money << "$\n";
		cout << "2. ��������� �����.              " << "� ������������: " << food << "\n";
		cout << "3. ������ ���.                   " << "�������� �����: " << health << "%\n";
		cout << "\n99. ����� �� ����." << "\n";
		int choice;
		cin >> choice;
		switch (choice) {
		case 1: {
			cin >> difficult;
			cout << difficult << endl << minimum << endl << maximum << endl; // delete this
			gaining
				dying
				cout << "�������� �����: " << health << "%" << endl;
			break;
		}
		case 2: {
			feed
				evo
				amountfood;
			break;
		}
		case 3: {
#define notmoney cout<<"�� ����, ����� ��������� �����!\n";
			system("cls");
			cout << "� �������: " << money << "$" << endl << "� ������������ : " << food << endl << "�������� �����: " << health << "%\n" << endl;
			market
				int buy = 0;
			cin >> buy;
			switch (buy) {
			case 1: {if (money >= 20) { money = money - 20; food++; amountfood } else { notmoney } break; }
			case 2: {if (money >= 20) { money = money - 30; food = food + 2; amountfood } else { notmoney } break; }
			case 3: {if (money >= 20) { money = money - 50; food = food + 5; amountfood } else { notmoney } break; }
			case 4: {if (money >= 20) { money = money - 100; food = food + 10; amountfood } else { notmoney } break; }
			case 42: {break; }
			default: {
				cout << "����� ����� ���, ����\n";
				return 0;
				break;
			}
			}
			break;
		}
		case 42: {
			health = health - 100;
			die;
			cout << "���� �� ������� �� �����, ��� ������� �� ����\n"; Sleep(7000); cout << "�� ���"; Sleep(1000); cout << "."; Sleep(1000); cout << "."; Sleep(1000); cout << ".\n"; Sleep(5000);
			system("pause");

		}
		case 99: { save; return 0; }
		default: {
			cout << "������� �� �������� ���������������...\n"; Sleep(5000);
			return 0;
			break;
		}
		}
	}
}
