#include "exercise.h"
#include <iostream>
#include <stdexcept>

// Constructor
Exercise::Exercise(const std::string& n, int s, int r)
    : name(nullptr), 
      sets(s),
      reps(r) {

    if (s < 0) {
        std::cerr << "ERROR: number of sets cannot be negative\n";
        throw std::invalid_argument("Invalid number of sets");
    }
    if (r < 0) {
        std::cerr << "ERROR: number of reps cannot be negative\n";
        throw std::invalid_argument("Invalid number of reps");
    }

    try {
        name = new std::string(n);  // Alocăm dinamic memorie pentru numele exercițiului
        std::cout << "Constructor: Exercițiul a fost creat cu numele " << *name 
                  << ", " << sets << " seturi și " << reps << " repetări.\n";
    } catch (const std::bad_alloc& e) {
        std::cerr << "Alocare memorie eșuată: " << e.what() << "\n";
        throw;  // Re-lansează excepția
    }
}

// Destructor
Exercise::~Exercise() {
    // Eliberăm memoria dinamică
    delete name;
    sets=0;
    reps=0;
    std::cout << "Destructor: Memoria pentru obiectul Exercițiu a fost eliberată.\n";
}

// Suprascriere operator de atribuire
Exercise& Exercise::operator=(const Exercise& other) {
    // Verificare auto-atribuire
    if (this == &other) {
        
        std::cout << "Auto-atribuire detectată, nu este necesară copierea.\n";
        return *this;
    }
    
    reps = other.reps;
    sets = other.sets;


    if (name != nullptr) {
        delete name;
    }
    try{
        name = new std::string(*other.name); 
        std::cout << "Operator de atribuire: Memoria pentru nume a fost realocată.\n";

    }catch (const std::bad_alloc& e) {
        std::cerr << "Alocare memorie eșuată: " << e.what() << "\n";
        throw;  // Re-lansează excepția
    }

    return *this;
}


// Setters și Getters
void Exercise::setName(const std::string& n) {
    if (!n.empty()) {
        *name = n;
    } else {
        std::cerr << "Numele exercițiului nu poate fi gol!" << std::endl;
    }
}

std::string Exercise::getName() const {
    return *name;
}

int Exercise::getSets() const {
    return sets;
}

void Exercise::setSets(int s) {
    if (s > 0) {
        sets = s;
    } else {
        std::cerr << "Numărul de seturi trebuie să fie pozitiv!" << std::endl;
    }
}

int Exercise::getReps() const {
    return reps;
}

void Exercise::setReps(int r) {
    if (r > 0) {
        reps = r;
    } else {
        std::cerr << "Numărul de repetări trebuie să fie pozitiv!" << std::endl;
    }
}

std::string Exercise::compareExercises(const Exercise& other) const {
    std::string comparisonResult = "Comparing " + *name + " with " + *other.name + ":\n";

    if (sets == other.sets && reps == other.reps) {
        comparisonResult += "Both exercises have the same number of sets and reps.\n";
    } else {
        if (sets == other.sets) {
            comparisonResult += "Both exercises have the same number of sets.\n";
        } else if (sets > other.sets) {
            comparisonResult += *name + " has more sets than " + *other.name + ".\n";
        } else {
            comparisonResult += *other.name + " has more sets than " + *name + ".\n";
        }

        if (reps == other.reps) {
            comparisonResult += "Both exercises have the same number of reps.\n";
        } else if (reps > other.reps) {
            comparisonResult += *name + " has more reps than " + *other.name + ".\n";
        } else {
            comparisonResult += *other.name + " has more reps than " + *name + ".\n";
        }
    }

    return comparisonResult;
}

// Metodă pentru afișare
void Exercise::display() const {
    std::cout << "Exercise: " << *name << ", Sets: " << sets << ", Reps: " << reps << std::endl;
}
