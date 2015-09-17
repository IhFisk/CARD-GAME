#include "Board.h"


// Constructor

Board::Board()
{
	
}


// Destructor

Board::~Board()
{
	
}


// Add Card

void Board::addCard(Card putCard)
{
	boardDeck.push_front(putCard);
}


// Remove card

Card Board::removeCard()
{
	Card removedCard {boardDeck[51]};
	boardDeck.pop_back();

	return removedCard;
}


// Get card

Card Board::getCard(int cardNumber)
{
	return boardDeck[cardNumber];
}
