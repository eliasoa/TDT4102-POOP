#include "Cards.h"

int main(){
    Card c{Suit::clubs, Rank::four};
    cout << c.toString() << endl;
    return 0;
}


// Rank r = Rank::king;
// Suit s = Suit::hearts;
// string rank = rankToString(r);
// string suit = suitToString(s);
// cout << "Rank: " << rank << " Suit: " << suit << '\n';

/* Teori
Oppgave 1e)
To fordeler ved å bruke symboler fremfor f.eks. heltall og strenger
-   Universalt
-   Enklere kode?
*/