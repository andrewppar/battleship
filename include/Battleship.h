#ifndef BATTLESHIP_H
#define BATTLESHIP_H
#include "Coordinate.h"

class Battleship {

  private:
    Coordinate bow ;
    Coordinate stern ;


  public:
   void place(Coordinate &bow_location) ;
   Coordinate& bow_location() ;

} ;

#endif
