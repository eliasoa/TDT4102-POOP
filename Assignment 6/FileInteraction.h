#pragma once
#include "includes.h"


/// @brief Function that lets the user write strings to a file
void userWriteToFile();

/// @brief Function that reads from a text file, creates a new files, writes the same as in the old text file, only with line numbers
void readFromFileAndCreatNewOneWithLineNumbers(const string& fileToCopy);