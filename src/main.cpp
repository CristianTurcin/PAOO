#include "exercise.h"
#include <iostream>

int main() {
    Exercise exercise1("Push-Ups", 3, 15);
    Exercise exercise2("Squats", 4, 18);
    

    exercise1.display();
    exercise2.display();

   // Afișează comparația între cele două exerciții
    std::cout << exercise1.compareExercises(exercise2) << std::endl;
   

    // Testăm operatorul de atribuire
    exercise2 = exercise1;

    exercise1.display();
    exercise2.display();
    return 0;
}
