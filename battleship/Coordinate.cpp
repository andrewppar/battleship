#include "Coordinate.h"

//Coordinate::Coordinate (int &c1 ,int &c2) { 
//  x_coord = c1 ; 
//  y_coord = c2 ;
//  }

Coordinate Coordinate::move_left(int spaces) {
  if (spaces > x_coord) { 
    throw std::invalid_argument( "There is no coordinate that far to the left." );
  }
  int new_x_coord = x_coord - spaces ; 
  Coordinate new_coord =  Coordinate(new_x_coord, y_coord); 
  return new_coord ;
}

Coordinate Coordinate::move_right(int spaces) {
  int new_x_coord = x_coord + spaces ; 
  Coordinate new_coord =  Coordinate(new_x_coord, y_coord); 
  return new_coord ;
}

Coordinate Coordinate::move_down(int spaces) {
  if (spaces > y_coord) { 
    throw std::invalid_argument( "There is no coordinate that far to the left." );
  }
  int new_y_coord = y_coord - spaces ; 
  Coordinate new_coord =  Coordinate(x_coord, new_y_coord); 
  return new_coord ;
}

Coordinate Coordinate::move_up(int spaces) {
  int new_y_coord = y_coord + spaces ; 
  Coordinate new_coord = Coordinate(x_coord, new_y_coord); 
  return new_coord ;
}
