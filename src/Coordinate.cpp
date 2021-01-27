#include "Coordinate.h"

void Coordinate::create_coord(int x_coord, int y_coord) {
  x = x_coord ;
  y = y_coord ;
  status = Coord_status::open ;
}

void Coordinate::set_occupied() {
  status = Coord_status::occupied ;
}

void Coordinate::set_hit() {
  status = Coord_status::hit ;
}

void Coordinate::set_miss() {
  status = Coord_status::miss ;
}

int& Coordinate::x_coord() {
  return x ;
}

int& Coordinate::y_coord() {
  return y ;
}

Coord_status Coordinate::get_status() {
  return status ;
}

std::string Coordinate::show_coord() {

  if (status == Coord_status::occupied) {
    return "S" ;
  } else if (status == Coord_status::open) {
    return "O" ;
  } else if (status == Coord_status::hit) {
    return "X" ;
  } else if (status == Coord_status::miss) {
    return "M" ;
  } else {
    throw (status) ;
  }
}
