#include "battleship.h"

//Battleship::Battleship (Coordinate c1, Coordinate c2) : bow(c1.x_coord, c1.y_coord), stern(c2.x_coord, c2.y_coord) { 
//
//}

void Battleship:move_left(int n) { 
  Coordinate new_bow = bow.move_left(n) ; 
  Coordinate new_stern = sterm.move_left(n) ; 
  bow = new_bow ; 
  stern = new_stern ; 
}

void Battleship:move_right(int n) { 
  Coordinate new_bow = bow.move_right(n) ; 
  Coordinate new_stern = sterm.move_right(n) ; 
  bow = new_bow ; 
  stern = new_stern ; 
}

void Battleship:move_down(int n) { 
  Coordinate new_bow = bow.move_down(n) ; 
  Coordinate new_stern = sterm.move_down(n) ; 
  bow = new_bow ; 
  stern = new_stern ; 
}

void Battleship:move_up(int n) { 
  Coordinate new_bow = bow.move_up(n) ; 
  Coordinate new_stern = sterm.move_up(n) ; 
  bow = new_bow ; 
  stern = new_stern ; 
}
