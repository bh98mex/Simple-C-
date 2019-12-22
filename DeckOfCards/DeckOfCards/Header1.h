#pragma once

#pragma once
//always include iostream
#include <iostream>
//random number generator
#include <cstdlib>
//random number generator
#include <ctime>



using namespace std;

//Initilize constant variables
const int SIZE = 52;

//create a class called card
class card
{
public:
	//default constructer
	card();
	//constructer with parameters
	card(string cardFace, string cardSuit);
	//print function
	string print() const;

private:
	//create two card variables face and suit
	string face;
	string suit;

};
card::card() {

}
card::card(string cardFace, string cardSuit) {
	face = cardFace;
	suit = cardSuit;
}
string card::print() const
{
	return(face + " of " + suit);
}

//create a class for deckOfCards
