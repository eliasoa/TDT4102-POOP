#include "utilities.h"


int incrementByValueNumTimes(int startValue, int increment, int numTimes){
    for (int i = 0; i < numTimes; i++) {
        startValue += increment;
    }
    return startValue;
}

void incrementByValueNumTimesRef(int& startValue, int& increment, int& numTimes){
        for (int i = 0; i < numTimes; i++) {
        startValue += increment;
    }
}

void swapNumbers(int& a, int& b){
    int valueHolder = b;
    b = a;
    a = valueHolder;
}

void printStudent(Student student){
    cout << student.name 
    <<  " is studying " << student.studyProgram
    << " and is " << student.age << " years old."
    << endl;
}

bool isInProgram(Student student, string studyProgram){
    if (student.studyProgram == studyProgram) return true;
    else return false;    
}