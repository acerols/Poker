#pragma once
#ifndef __POKER_H__
#define __POKER_H__

#include <iostream>
#include <vector>

using namespace std;

#define Patterns	4
#define NUM			13

#define KING	13
#define	QUEEN	12
#define JACK	11

enum Pettern {
	Spade = 0,
	Club = 1,
	Dia = 2,
	Heart = 3,
};

class Deck {
private:
	uint32_t Cards[Patterns][NUM];
public:
	Deck();
	pair<uint32_t, uint32_t> drow(void);
};

class Dealer {
private:
	vector<pair<uint32_t, uint32_t>> Board;

public:
	Dealer();
	void Fist(Deck deck);
	void Drow(Deck deck);
	void show();
};

class Player {
private:
	vector<pair<uint32_t, uint32_t>> Hands;
public:
	Player();
};

int chara_test();

#endif