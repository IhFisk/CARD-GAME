#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include "Deck.h"

class Board
{
	public :
	
	Board();
	~Board();
	
	void addCard(Card);
	Card removeCard();
	Card getCard(int);

	private :

	std::deque <Card> boardDeck;
	Card putCard;
};



#endif