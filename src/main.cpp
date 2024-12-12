#include "exercise.h"
#include "enduranceExercise.h"
#include <iostream>
#include <memory>
#include <thread>
#include <mutex>
#include <vector>
#include <chrono>
#include <condition_variable>

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



    Exercise* exercise = new EnduranceExercise("Jogging", 3, 10, 45.0);
    exercise->display();
    delete exercise;

    

   /*---------------------------SHARED_PTR--------------------------------*/

    std::cout << "\n------------------SHARED_PTR-------------------\n";
    std::shared_ptr<EnduranceExercise> sharedExercise1 = std::make_shared<EnduranceExercise>("Cycling", 5, 20, 60.0);
    sharedExercise1->display();
    std::cout << "Calorii calculate: " << sharedExercise1->calculateCalories() << "\n";

    {
        // Cream un alt shared_ptr care partajează resursele
        std::shared_ptr<EnduranceExercise> sharedExercise2 = sharedExercise1;
        std::cout << "Numărul de referințe la obiect: " << sharedExercise1.use_count() << "\n";
        sharedExercise2->setDuration(90.0);
        std::cout << "\nExercițiul după modificare prin sharedExercise2:\n";
        sharedExercise2->display();
    } // anotherSharedExercise este distrus, dar sharedExercise rămâne valid

    std::cout << "Numărul de referințe după ieșirea din scope: " << sharedExercise1.use_count() << "\n";
    



    /*--------------------UNIQUE_PTR---------------------*/

    std::cout << "\n--------------------UNIQUE_PTR---------------------\n";
    std::unique_ptr<EnduranceExercise> uniqueExercise = std::make_unique<EnduranceExercise>("Running", 3, 15, 30.0);

    uniqueExercise->display();
    std::cout << "Calorii calculate: " << uniqueExercise->calculateCalories() << "\n";

    // Mutarea ownership-ului către un alt unique_ptr
    std::unique_ptr<EnduranceExercise> movedExercise = std::move(uniqueExercise);

    if (!uniqueExercise) {
        std::cout << "uniqueExercise a fost mutat și acum este nullptr.\n";
    }

    movedExercise->display();


    return 0;
}
