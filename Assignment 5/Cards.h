#pragma once

#include "std_lib_facilities.h"

enum class Suit {clubs = 1, diamonds, hearts, spades};

enum class Rank {two = 2, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace};

/// @brief Function that returns the Suit as a string
/// @param  enum class Suit
/// @return string of element in enum
string suitToString(enum suit);