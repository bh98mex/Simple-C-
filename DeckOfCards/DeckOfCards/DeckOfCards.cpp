// DeckOfCards.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <array>
#include<iomanip>
#include "Header1.h"
//# define SIZE 52

using namespace std;


class deckOfCards
{
public:
	// Default constructor: assigns the 52 cards to deck
	deckOfCards();
	//shuffles the deck once all the cards are assigned
	void shuffle();
	//deals out one card from the deck of 52, refrences class card
	card dealCard();
	//variable card with a pointer to deck
	//card deck[52]; // an array of cards of size SIZE
				   //keep track of what card you are dealing with
	void printDeck()const;
private:
	card *deck;
	int currentCard;
};

/////////////////////////////////////////////////////////////////////////////

void deckOfCards::printDeck() const
{
	cout << left;
	for (int i = 0; i < SIZE; i++) {
		cout << setw(19) << deck[i].print();
		if ((i + 1) % 4 == 0)
			cout << " " << endl;
	}
}
//assigns the 52 cards to deck

////////////////////////////////////////////////////////////////////////////

deckOfCards::deckOfCards()
{
	//put all the face values in an array as strings
	string faces[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
	//put all the suit values in an array as strings
	string suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	//initilize deck from the card class to a new array using the word "new"

	deck = new card[SIZE];
	currentCard = 0;
	//current card is equal to zero

	//create a for loop to literally place each card into the new array
	for (int count = 0; count < SIZE; count++)
	{
		//deck at postion count will be equal to card, each with a different face and suit
		deck[count] = card(faces[count % 13], suits[count / 13]);
	}

}

/////////////////////////////////////////////////////////////////////////

//shuffles the deck once all the cards are assigned
void deckOfCards::shuffle()
{
	//start at current card
	currentCard = 0;
	//create a for loop so all 52 cards will be shuffled
	for (int first = 0; first < SIZE; first++)
	{
		//create an int called second and set it equal to the random operator
		int second = (rand() + time(0)) % SIZE;
		//create an int called temp and set it equal to the deck at the first postiion
		card temp = deck[first];
		//swap deck at first and second postion
		deck[first] = deck[second];
		//swap deck and temp
		deck[second] = temp;
	}
}

//////////////////////////////////////////////////////////////////////

card deckOfCards::dealCard()
{
	//if we are out of cards
	if (currentCard > SIZE)
	{
		//shuffle
		shuffle();
	}
	//if we are not out of cards
	if (currentCard < SIZE)
	{
		//return deck at that current card and then increment
		return (deck[currentCard++]);
	}
	//return the first card in the deck that we just found
	return (deck[0]);
}

//////////////////////////////////////////////////////////////////////
int main()
{

	//declare deckofcards(from class) called deck
	deckOfCards deck;
	card currentCard;
	deck.printDeck();
	deck.shuffle();
	cout << " " << endl;
	deck.printDeck();
	deck.shuffle();
	cout << " " << endl;
	//declate car called(from class) current card
	//currentCard.print();
	//shuffle the deck that you just initalized


	//determine how many cards you want to print out to the user
	//right now it is two because we decided that each player will get two cards when they start
	cout << "Player 1:\n";
	cout << " " << endl;
	for (int i = 0; i <= 1; i++)
	{
		//set current card equal to deck.dealcard
		//the return value will replace it

		currentCard = deck.dealCard();
		//include to actually print out current card in the format we want
		cout << setw(19) << currentCard.print() << "-" << endl;

	}
	cout << " " << endl;

	for (int i = 0; i <= 1; i++)
	{
		//set current card equal to deck.dealcard
		//the return value will replace it

		currentCard = deck.dealCard();
		//include to actually print out current card in the format we want
		cout << setw(19) << currentCard.print() << "-" << endl;

	}
	cout << " " << endl;
	for (int i = 0; i <= 1; i++)
	{
		//set current card equal to deck.dealcard
		//the return value will replace it

		currentCard = deck.dealCard();
		//include to actually print out current card in the format we want
		cout << setw(19) << currentCard.print() << "-" << endl;

	}
	cout << " " << endl;

	for (int i = 0; i <= 1; i++)
	{
		//set current card equal to deck.dealcard
		//the return value will replace it

		currentCard = deck.dealCard();
		//include to actually print out current card in the format we want
		cout << setw(19) << currentCard.print() << "-" << endl;

	}
	cout << " " << endl;

	for (int i = 0; i <= 1; i++)
	{
		//set current card equal to deck.dealcard
		//the return value will replace it

		currentCard = deck.dealCard();
		//include to actually print out current card in the format we want
		cout << setw(19) << currentCard.print() << "-" << endl;

	}
	cout << " " << endl;

	system("pause");
	return 0;
}