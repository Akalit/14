#include <iostream>
#include <list>
#include <iterator>
#include <string>
#include <conio.h>
#include <algorithm>

using namespace std;

class MyClass {
	public:
	string name;   float kolvo;   double kesh;   int artik;   double sum;   string mesto; };


void main() { setlocale(0, ""); system("chcp 1251"); system("cls");

list<MyClass>sklad; MyClass o;
cout << "�����\t    ����������  ����    �����  ���������  �����" << endl << endl;

sklad.push_back({ "������" , 12 , 13 , 533, 156,"1->�������" });
sklad.push_back({ "��������" , 22 , 30 , 361, 660,"2->�������" });
sklad.push_back({ "��������" , 20 , 26 , 481, 520,"3->�������" });
sklad.push_back({ "���������" , 10 , 50 , 121, 500,"4->�������" });
sklad.push_back({ "������" , 10 , 65 , 451, 650,"5->�������" });


for (auto q : sklad) cout << q.name << ". \t[" << q.kolvo << "]\t[" << q.kesh << "]\t[" << q.artik << "]\t[" << q.sum << "]\t " << q.mesto << endl;
cout << "\n\n�������� -> 1\t�������� -> 2\t������� -> 3\t����� ������ -> ... - > "; int vibor; cin >> vibor;


switch (vibor) {

case 1:	cout << "\n��������\n\n�����\t    ����������  ����    �����   �����" << endl << endl;
	cin >> o.name >> o.kolvo >> o.kesh >> o.artik >> o.mesto;  sklad.push_back({ o.name , o.kolvo , o.kesh , o.artik, o.sum = o.kolvo * o.kesh,o.mesto }); break;

case 2:	cout << "\n\t��������\n\n��� -> 1\t���������� -> 2\t	���� -> 3\t����� -> 4\t����� -> 5\n";
	int vsp; cout << "\n�������� ����� -> "; cin >> vsp; cout << "������� �������� ������ -> "; cin >> o.name; cout << "������� ����� �������� -> ";

	switch (vsp) {
	case 1: cin >> o.name;  for (auto &q : sklad) if (q.name == o.name)	q.name = o.name; break;
	case 2: cin >> o.kolvo; for (auto &q : sklad) if (q.name == o.name) { q.kolvo = o.kolvo;  q.sum = o.kolvo * q.kesh; }break;
	case 3: cin >> o.kesh; 	for (auto &q : sklad) if (q.name == o.name) { q.kesh = o.kesh; q.sum = q.kolvo * o.kesh; }break;
	case 4: cin >> o.artik;	for (auto &q : sklad) if (q.name == o.name) q.artik = o.artik; break;
	case 5: cin >> o.mesto; for (auto &q : sklad) if (q.name == o.name) q.mesto = o.mesto; break;
	} break;

case 3: string nm; cout << "����� ����� ������� -> "; cin >> nm; sklad.remove_if([nm](const MyClass &i) { return i.name == nm; });
}

for (auto q : sklad) cout << q.name << ". \t[" << q.kolvo << "]\t[" << q.kesh << "]\t[" << q.artik << "]\t[" << q.sum << "]\t " << q.mesto << endl;

cout << endl; system("pause"); }

