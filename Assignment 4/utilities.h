#pragma once
#include "std_lib_facilities.h"

/// @brief Function that increments startValue by incremet numTimes
/// @param startValue int
/// @param increment int
/// @param numTimes int
/// @return startValue
int incrementByValueNumTimes(int startValue, int increment, int numTimes);

/// @brief Function that increments startValue by incremet numTimes, but takes a reference as the argument
/// @param startValue 
/// @param increment 
/// @param numTimes 
void incrementByValueNumTimesRef(int& startValue, int& increment, int& numTimes);

/// @brief Function that swaps the value of two numbers
/// @param a int
/// @param b int
void swapNumbers(int& a, int& b);

/// @brief Struct containing info about Student
struct Student
{
    string name;
    string studyProgram;
    int age;
};

/// @brief Function that prints the info in the Student struct in a "nice" way
/// @param student Struct of type Student
void printStudent(Student student);

/// @brief Function that checks if a student is enrolled in a study programme
/// @param student Struct of type Student
/// @param studyProgram String with study programme
/// @return true or false
bool isInProgram(Student student, string studyProgram);