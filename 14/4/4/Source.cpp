#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void main() { setlocale(0,"");

	list<int>l; int user; cin >> user;
 for(int q(1); q < user+1; ++q) { l.push_back(q); cout << q << " ";} 
	
	for (std::list<int>::iterator i = l.begin(); l.size() != 2; ) {
		i++; if (i == l.end()) i = l.begin();
		i++; if (i == l.end()) i = l.begin();
		cout <<" -> "<< *i << endl; i = l.erase(i);
		if (i == l.end()) i = l.begin();
		
		for(auto q : l) cout << q << " ";} 

cout << endl; system("pause");}