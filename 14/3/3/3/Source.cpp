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
cout << "Фрукт\t    Количество  Цена    Номер  Стоемость  Место" << endl << endl;

sklad.push_back({ "Яблоко" , 12 , 13 , 533, 156,"1->Полочка" });
sklad.push_back({ "Клубника" , 22 , 30 , 361, 660,"2->Полочка" });
sklad.push_back({ "Апельсин" , 20 , 26 , 481, 520,"3->Полочка" });
sklad.push_back({ "Мандарины" , 10 , 50 , 121, 500,"4->Полочка" });
sklad.push_back({ "Бананы" , 10 , 65 , 451, 650,"5->Полочка" });


for (auto q : sklad) cout << q.name << ". \t[" << q.kolvo << "]\t[" << q.kesh << "]\t[" << q.artik << "]\t[" << q.sum << "]\t " << q.mesto << endl;
cout << "\n\nДобавить -> 1\tИзменить -> 2\tУдалить -> 3\tВывод склада -> ... - > "; int vibor; cin >> vibor;


switch (vibor) {

case 1:	cout << "\nДобавить\n\nФрукт\t    Количество  Цена    Номер   Место" << endl << endl;
	cin >> o.name >> o.kolvo >> o.kesh >> o.artik >> o.mesto;  sklad.push_back({ o.name , o.kolvo , o.kesh , o.artik, o.sum = o.kolvo * o.kesh,o.mesto }); break;

case 2:	cout << "\n\tИзменить\n\nИмя -> 1\tКоличество -> 2\t	Цену -> 3\tНомер -> 4\tМесто -> 5\n";
	int vsp; cout << "\nВыберете метод -> "; cin >> vsp; cout << "Введите название фрукта -> "; cin >> o.name; cout << "Введите новое значение -> ";

	switch (vsp) {
	case 1: cin >> o.name;  for (auto &q : sklad) if (q.name == o.name)	q.name = o.name; break;
	case 2: cin >> o.kolvo; for (auto &q : sklad) if (q.name == o.name) { q.kolvo = o.kolvo;  q.sum = o.kolvo * q.kesh; }break;
	case 3: cin >> o.kesh; 	for (auto &q : sklad) if (q.name == o.name) { q.kesh = o.kesh; q.sum = q.kolvo * o.kesh; }break;
	case 4: cin >> o.artik;	for (auto &q : sklad) if (q.name == o.name) q.artik = o.artik; break;
	case 5: cin >> o.mesto; for (auto &q : sklad) if (q.name == o.name) q.mesto = o.mesto; break;
	} break;

case 3: string nm; cout << "Какой фрукт удалить -> "; cin >> nm; sklad.remove_if([nm](const MyClass &i) { return i.name == nm; });
}

for (auto q : sklad) cout << q.name << ". \t[" << q.kolvo << "]\t[" << q.kesh << "]\t[" << q.artik << "]\t[" << q.sum << "]\t " << q.mesto << endl;

cout << endl; system("pause"); }

