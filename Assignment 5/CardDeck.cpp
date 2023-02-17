#include "CardDeck.h"

CardDeck::CardDeck(){
    for (const auto& suit: suitStringMap)
    {
        for (const auto& rank: rankStringMap)
        {   
            Card c{suit.first, rank.first};
            cards.push_back(c);
        }
    }
}

void CardDeck::swap(int pos1, int pos2){

}