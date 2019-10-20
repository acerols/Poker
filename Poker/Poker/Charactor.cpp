#include <iostream>
#include <vector>
#include <string>
#include "Porker.hpp"

using namespace std;

#define FIRSTDROW	3

Dealer::Dealer()
{

}

void Dealer::Fist(Deck deck)
{
	for (auto i = 0; i < FIRSTDROW; i++) {
		this->Board.push_back(deck.drow());
	}
}

void Dealer::Drow(Deck deck)
{
	this->Board.push_back(deck.drow());
}

void Dealer::show()
{
	string out;

	for (auto i = 0; i < this->Board.size(); i++) {
		switch (this->Board[i].second) {
		case KING: out = 'K'; break;
		case QUEEN: out = 'Q'; break;
		case JACK: out = 'J'; break;
		default:out = to_string(this->Board[i].second);
		}
	
		switch (static_cast<Pettern>(i)) {
		case Spade: out.push_back('s'); break;
		case Club: out.push_back('c'); break;
		case Dia: out.push_back('d'); break;
		case Heart:out.push_back('h'); break;
		default:break;
		}
		cout << out << " ";
	}
	cout << endl;
}

int chara_test()
{
	Deck deck;
	Dealer dealer;
	dealer.Fist(deck);
	dealer.show();
	cout << endl;
	dealer.Drow(deck);
	cout << endl;
	dealer.show();
	return 0;
}
