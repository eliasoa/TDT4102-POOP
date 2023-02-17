#include "Cards.h"
#include "CardDeck.h"

int main(){
    cout << "/////////////////// NEW RUN /////////////////////" << endl;
    // Card c{Suit::clubs, Rank::four};
    CardDeck deck;
    
    deck.shuffle();
    deck.print();

    return 0;
}



/* Teori
Oppgave 1e)
To fordeler ved å bruke symboler fremfor f.eks. heltall og strenger
-   Universalt
-   Enklere å se symboler istendefor farge gitt som tall etc
*/