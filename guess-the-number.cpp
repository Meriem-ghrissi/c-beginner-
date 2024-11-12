#include<iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;
void guess_the_number() {
    int a;
    int b;
    srand(static_cast<unsigned int>(time(0)));
    a = rand() % 100 + 1; // Random number between 1 and 100

    std::cout << "Guess the number between 1 and 100" << std::endl;

    while (true) {
        std::cin >> b;
        if (a == b) {
            std::cout << "Great job!" << std::endl;
            break; // Exit the loop if guessed correctly
        }
        if (a < b) {
            std::cout << "Choose a smaller number" << std::endl;
        } else {
            std::cout << "Choose a greater number" << std::endl;
        }
    }
}
int main (){
    guess_the_number();
    return 0;
}5