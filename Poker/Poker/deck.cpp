#include <iostream>
#include <vector>
#include <random>

#include "Porker.hpp"

using namespace std;

Deck::Deck()
{
	for (auto j = 0; j < Patterns; j++) {
		for (auto i = 0; i < NUM; i++) {
			if (i == 0)this->Cards[j][i] = 1;
			else this->Cards[j][i] = 0;
		}
	}
}

pair<uint32_t, uint32_t> Deck::drow(void)
{
	random_device rnd;
	mt19937	rd(rnd());

	bool flag = false;

	uint32_t pat, number;

	while (!flag) {
		pat = static_cast<uint32_t>(rd()) % Patterns;
		number = static_cast<uint32_t>(rd()) % NUM;
		if (!this->Cards[pat][number]) {
			this->Cards[pat][number] = 1;
			flag = true;
		}
	}
	return make_pair(pat, number);
}

int deck_test()
{
	pair<uint32_t, uint32_t> ret;

	Deck deck1;
	ret = deck1.drow();
	string output;
	//Deck::Pettern pats = static_cast<Deck::Pettern>(ret.first);

	switch (static_cast<Pettern>(ret.first)) {
	case Spade: output = "Spade";
	case Club: output = "Club";
	case Dia: output = "Dia";
	case Heart: output = "heart";
	}

	cout << output << " " << ret.second << endl;
	return 0;
}