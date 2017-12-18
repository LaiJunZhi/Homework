#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define CARDS 52
#define FACES 13
typedef struct card
{
	const char *face;
	const char *suit;
} Card;

void fillDeck(Card * const wDeck, const char * wFace[],
				const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

int main(void)
{
	Card deck[CARDS];

	const char *suit[] = { "Hearts","Diamonds","Clubs","Spades" };

	const char *face[] =
	{ "Ace", "Deuce", "Three", "Four",
		"Five", "Six", "Seven", "Eight",
		"Nine", "Ten", "Jack", "Queen", "King" };

	srand(time(NULL));

	fillDeck(deck, face, suit);
	shuffle(deck);
	deal(deck);

	system("pause");
	return 0;
}

void fillDeck(Card * const wDeck, const char * wFace[],
	const char * wSuit[])
{
	size_t i;
	
	for (i = 0; i < CARDS; ++i)
	{
		wDeck[i].face = wFace[i%FACES];
		wDeck[i].suit = wSuit[i/FACES];
	}
}

void shuffle(Card * const wDeck)
{

	size_t i;
	size_t j;
	Card temp;

	for (i = 0; i < CARDS; ++i)
	{
		j = rand() % CARDS;
		temp = wDeck[i];
		wDeck[i] = wDeck[j];
		wDeck[j] = temp;
	}
}

void deal(const Card * const wDeck)
{
	size_t i;

	for (i = 0; i < CARDS; i++)
	{
		printf("%5s of %-8s%s", wDeck[i].face, wDeck[i].suit,
			(i + 1) % 4 ? " " : "\n");
	}
}