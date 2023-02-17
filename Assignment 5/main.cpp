#include "Cards.h"
#include "CardDeck.h"

int main(){
    cout << "////////////////////// NEW /////////////////////////" << endl;
    CardDeck deck;
    // deck.shuffle();
    for (int i = 0; i < 48; i++)
    {
        deck.drawCard();
    }
    
    deck.print();
    return 0;
}



/* Teori
Oppgave 1e)
To fordeler ved å bruke symboler fremfor f.eks. heltall og strenger
-   Universalt
-   Enklere å se symboler istendefor farge gitt som tall etc
*/