#include "Battleship.h"

void Battleship::place(Coordinate &bow_location) {
  bow_location.set_occupied() ;
  bow = bow_location ;

}

Coordinate& Battleship::bow_location() {
  return bow ;
}
