#include "exercise.h"
#include "enduranceExercise.h"
#include <iostream>
#include <stdexcept>


//Constructor

EnduranceExercise::EnduranceExercise(const std::string& name, int sets, int reps, double duration)
    : Exercise(name, sets, reps), duration(duration) {

    if (duration <= 0) {
        std::cerr << "ERROR: Durata trebuie sa fie un numar pozitiv.\n";
        throw std::invalid_argument("Invalid duration");
    }

    std::cout << "Constructor EnduranceExercise:  " << name << ", Durata: " << duration << " minute.\n";
}
//Destructor
EnduranceExercise:: ~EnduranceExercise(){
    duration = 0;
    std::cout << "Destructor EnduranceExercise: Memoria pentru obiectul enduranceExercise a fost eliberata.\n";
}



// Getter pentru duration
double EnduranceExercise::getDuration() const {
    return duration;
}

// Setter pentru duration
void EnduranceExercise::setDuration(double duration) {
    if (duration <= 0) {
        std::cerr << "ERROR: Durata trebuie sa fie un numar pozitiv.\n";
        throw std::invalid_argument("Invalid duration");
    }
    this->duration = duration;
}

// Suprascrierea metodei display
void EnduranceExercise::display() const {
    // Afișăm informațiile de la clasa de bază (Exercise)
    Exercise::display();
    // Afișăm și durata specifică pentru EnduranceExercise
    std::cout << "Durata: " << duration << " minute\n";
}


// Metodă pentru calcularea Caloriilor
double EnduranceExercise::calculateCalories() const {

    const double intensity = 8.0; 
    return duration * intensity;
}
