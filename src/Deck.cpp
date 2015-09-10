#include <cstdlib>
#include <ctime>
#include "Card.h"
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

	std::deque <Card> temporaryDeck {52};
	temporaryDeck = deck;

	
	for(int i {51}; i >= 0; i--)
	{
		int random {};
		
		do
		{
			random = rand() % 52;
		}while(randTest [random]);
		
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