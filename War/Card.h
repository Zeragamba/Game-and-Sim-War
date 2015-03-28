#ifndef __CARD_H__
#define __CARD_H__

#include <string>

#include "Suit.h"

class Card {
private:
  int _value;
  Suit _suit;

public:
  static const int MAX_VALUE = 14;
  static const int MIN_VALUE = 2;

  Card(int value, Suit suit);

  Suit suit();
  int value();
  std::string suitName();
  std::string valueName();
  std::string toString();
};

#endif