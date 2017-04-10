#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <List>
#include <iterator>

using namespace std;

void main() { setlocale(0,""); srand(time(NULL));

	cout << "Размер списка -> "; int user; cin >> user;  
	list<int> arr; for (int q(0); q < user; q++) arr.push_back(rand() % 100);
	 cout << "\nСписок -> "; for(auto q : arr) cout << q << " ";
	do { cout << "\nУдалить узел 0 - или добавить 1 ? ->"; cin >> user; 
		if(user == 0) { cout << "Какой узел удалить ? ->"; cin >> user; arr.remove(user);
			}else{ cout << "Добавить узел -> "; cin >> user; arr.push_back(user); }
	cout << "\nСписок -> "; for (auto q : arr) cout << q << " ";} while(user != 3);

cout << endl; system("pause");}