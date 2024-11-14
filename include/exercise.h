#ifndef EXERCISE_H
#define EXERCISE_H

#include <string>
#include <iostream>

class Exercise {
private:
    std::string *name;
    int sets;
    int reps;

public:
    //construsctor si destructor
    Exercise(const std::string& exerciseName, int sets, int reps);
    ~Exercise();

    //Operator de atribuire
    Exercise& operator=(const Exercise& other);

    // Gettere și Settere 
    std::string getName() const;
    void setName(const std::string& n);
    int getSets() const;
    void setSets(int s);
    int getReps() const;
    void setReps(int r);

    std::string compareExercises(const Exercise& other) const;
    void display() const;
};

#endif
