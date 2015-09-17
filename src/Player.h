#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Deck.h"

class Player
{
	public :
	
	Player();
	~Player();
	
	void changeChips(int);
	int bet();
	Card getCard(int);

	private :
	
	int chips {};
	int changedChips {};
	std::deque <Card> playerDeck;
};


#endif
