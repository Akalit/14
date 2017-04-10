#include <iostream>
#include <list>

int main() {setlocale(0,"");

		std::list<int> arr; int user,vsp; std::cout << "Введите список -> ";
			do { std::cin >> user; arr.push_back(user);} while (user != 333); arr.pop_back();
		system("cls"); std::cout << "Введённый список \t"<< std::endl; for(auto q : arr) std::cout << q << " "; std::cout << "\n\nС какого элемента вывести в обратном направлении? -> "; std::cin >> user;
			for (auto q : arr)std::cout << q << " "; for(auto i = arr.rbegin(); *i!= user-1; i++)  std::cout << *i << " "; std::cout << std::endl;

std::cout << std::endl; system("pause");}