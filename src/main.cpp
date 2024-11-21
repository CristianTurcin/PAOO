#include "exercise.h"
#include "enduranceExercise.h"
#include <iostream>

int main() {
    Exercise ex1("Push-Ups", 3, 15);
    ex1.display();
    Exercise ex2("Squats", 4, 20);
    ex2.display();
    // Afișează comparația între cele două exerciții
    std::cout << ex1.compareExercises(ex2) << std::endl;

    
    // Testăm operatorul de atribuire
    ex2 = ex1;
    ex1.display();
    ex2.display();

    EnduranceExercise ee3("Burpee",2,10,30.2);
    ee3.display();
    // Calculăm și afișăm Caloriile arse in urma exercitiului
    std::cout << "Calculated Burned Calories: " << ee3.calculateCalories() << std::endl;



    // Testăm move constructor
    Exercise ex3(std::move(ex1));
    ex3.display();

    // Testăm move assignment operator
    Exercise ex4("Squats", 4, 12);
    ex4 = std::move(ex3);
    ex4.display();

    return 0;
}
