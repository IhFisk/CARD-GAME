/******************************************
*
* File Name: Deck.cpp
*
* Author: IhFisk <ihfisk42@gmail.com>
*
* Description: The Deck class is create the deck, with 52 cards, and offer the possiblility to shuffle them, deal them, and add a card to the deck
*
*******************************************
*
* Last Correction:
* 	Author: IhFisk <ihfisk42@gmail.com>
*
*	Date: 17/09/2015
*
******************************************/


#include "Deck.h"



// Constructor

Deck::Deck()
{
	srand(time(nullptr));

	for(std::string family : {"Heart", "Diamond", "Club", "Spade"})
	{
		for(int cdNumber {1}; cdNumber <= 13; cdNumber++)
		{
			deck.push_back(Card {cdNumber, family});
			//R.I.P index
		}
	}
}


// Destructor

Deck::~Deck()
{
	// Hello, i'm a destructor, don't hit me please <3
}


// Shuffle card

void Deck::shuffleCards()
{
	
	bool randTest [52] {false};

	std::deque <Card> temporaryDeck {52};	// shuffleCards is a function who shuffle the cards, using a boolean spreadsheet
	temporaryDeck = deck;			// to see if a card is already in the deck, if she's already in the deck, shuffleCard
						// give a new random card to test, else shuffleCard put the card in the deck.
	
	for(int i {51}; i >= 0; i--)
	{
		int random {};
		
		do
		{
			random = rand() % 52;
		}
		while(randTest [random]);
		
		deck[random] = temporaryDeck[i];
		randTest [random] = true;
	}	
	
}




// Display

void Deck::display()
{
	for(int i{0}; i < 52; i++)
	{
		std::cout << deck[i].getCdNumber() << " " << deck[i].getFamily() << std::endl;
	}
}


// Deal

Card Deck::deal()
{
	Card dealedCard {deck[51]};
	deck.pop_back();

	return dealedCard;
}


// Put a card in the deck

void Deck::putCard(Card card)
{
	deck.push_front(card);
}
