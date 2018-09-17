/* This program 'Coin Flip' generates a random number, either zero and one,
and announces winner based of which side reaches 50 first, heads or tails*/

#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int heads = 0;
    int tails = 0;


    while ( heads != 50 && tails != 50){

        int flip = rand() % 2;

        if (flip == 0)
        {
            heads ++;
        }
        else if (flip == 1)
        {
            tails ++;
        }
    }

    if (heads == 50){
        std::cout<< heads << " heads, "<< tails << " tails.";
        std::cout<< "The heads won!";
    }
    else if (tails == 50)
    {
        std::cout<< heads << " heads, "<< tails << " tails.";
        std::cout<< "The tails won!";
    }

}