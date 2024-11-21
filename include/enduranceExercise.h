#ifndef ENDURANCEEXERCISE_H
#define ENDURANCEEXERCISE_H

#include <string>
#include <iostream>
#include "exercise.h"

class EnduranceExercise : public Exercise {
private:
    double duration;

public:
    EnduranceExercise(const std::string& name, int sets, int reps, double duration);
    ~EnduranceExercise();

    // Getter și Setter pentru duration
    double getDuration() const;
    void setDuration(double duration);

    double calculateCalories() const;
    void display() const override;

   
};

#endif