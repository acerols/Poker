#include <iostream>
#include <vector>
#include "Porker.hpp"

using namespace std;

int main()
{
	return chara_test();
}

int Game()
{
	uint32_t players;
	cout << "Please input number of players" << endl;
	cin >> players;
	while(players < 1 || players > 9) {
		cout << "retry please" << endl;
		cin >> players;
	}


	return 0;
}