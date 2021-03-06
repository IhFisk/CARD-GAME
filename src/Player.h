/******************************************
*
* File Name: Player.h
*
* Author: IhFisk <ihfisk42@gmail.com>
*
* Description: Player.cpp header
*
*******************************************
*
* Last Correction:
* 	Author: IhFisk <ihfisk42@gmail.com>
*
*	Date: 21/09/2015
*
******************************************/


#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include "Deck.h"

class Player
{
	public :
	
	Player();
	~Player();
	
	Card getCard(int);

	private :
	
	std::deque <Card> playerDeck;
};


#endif
