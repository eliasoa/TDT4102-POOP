#include "includes.h"



int main(){
    cout << "////////////////////// NEW /////////////////////////" << endl;
    // Card card{Suit::spades,Rank::ace};
    // Card c2{Suit::diamonds,Rank::ace};
    // vector<Card> hand{card, c2};
    BlackJack b;
    // // cout << b.getHandScore(hand) << endl;
    
    // // cout << b.askPlayerDrawCard() << endl;
    b.playGame();
    return 0;
}













    // 
    // Card c2{Suit::diamonds,Rank::two};
    // vector<Card> playerHand{c1, c2};
    // int firstCard{0};
    // int lastCard{2};    
    // int sum{0};
    // for (int cardNumber = firstCard; cardNumber < lastCard; cardNumber++)
    // {
    //     Card card = playerHand.at(cardNumber);
    //     Rank rank = card.getRank();
    //     if (rank == Rank::king || rank == Rank::queen || rank == Rank::jack)
    //     {
    //         sum += 10;
    //     }
    //     else if (isAce(card))
    //     {
    //         sum += 11;
    //     }
    //     else
    //     {
    //         sum += static_cast<int>(rank);
    //     }
    // }
    // cout << sum << endl;
    

/* Teori
Oppgave 1e)
To fordeler ved å bruke symboler fremfor f.eks. heltall og strenger
-   Universalt
-   Enklere å se symboler istendefor farge gitt som tall etc
*/