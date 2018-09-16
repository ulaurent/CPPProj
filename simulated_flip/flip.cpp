#include <iostream>
#include <stdlib.h>

int main (){
    
    int heads = 0;
    int tails = 0;
    

    while ( heads != 50 || tails != 50){
        
        int flip = rand() % 1;
            
        if (flip == 0)
        {
            heads ++;
        }
        else if (flip == 1)
        {
            tails ++;
        }
    }
    
    if (heads = 50){
        std::cout<< heads << " heads, "<< tails << " tails.";
        std::cout<< "The heads won!";
    }
    else if (tails = 50){
        std::cout<< heads << " heads, "<< tails << " tails.";
        std::cout<< "The tails won!";
    }
}