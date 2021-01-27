#include "Board.h"
#include <iostream>


void Board::make_board() {

  int side_length = board_size / 4 ;
  int index = 0 ;

  for (int x_coord = 0 ; x_coord < side_length ; x_coord++) {
    for (int y_coord = 0 ; y_coord < side_length ; y_coord++) {
      Coordinate new_coord ;
      new_coord.create_coord(x_coord, y_coord) ;
      tiles[index] = new_coord ;
      index++ ;
    }
  }
}

Coordinate& Board::get_coord(int x, int y) {
  int index = (x * 4) + y ;
  return tiles[index] ;

}

void Board::place_ship(Battleship battleship, int x, int y) {
  Coordinate& coord = get_coord(x, y) ;
  ship  = battleship ;
  ship.place(coord) ;
}

void Board::show_board(bool hide_ship) {
  int side_length = board_size / 4 ;
  for (int x = side_length ; x --> 0; ) {
    for (int y = 0 ; y < side_length ; y++) {
      int index = (y * 4) + x ;
      Coordinate coord = tiles[index] ;
      if (hide_ship) {
        if (coord.get_status() == Coord_status::occupied) {
          std::cout << " O " ;
        } else  {
          std::cout << " " << coord.show_coord() << " " ;
        }
      } else {
          std::cout << " " << coord.show_coord() << " " ;
      }
    }
    std::cout << "\n\n" ;
  }
}

Repeat_reason Board::add_guess(int x, int y) {
  Repeat_reason repeat ;
  Coordinate& coord  = get_coord(x, y) ;
  Coord_status status = coord.get_status() ;
  if ( x > (board_size / 4) - 1 ) {
    repeat = Repeat_reason::bad_x_coord ;
  } else if ( y > (board_size / 4) - 1) {
    repeat = Repeat_reason::bad_y_coord ;
  } else if ( status == Coord_status::occupied ) {
    coord.set_hit() ;
    repeat = Repeat_reason::not_needed ;
  } else if ( status == Coord_status::open ) {
    coord.set_miss() ;
    repeat = Repeat_reason::not_needed ;
  } else if ( status == Coord_status::miss ) {
    repeat = Repeat_reason::already_guessed ;
  }  else {
    throw (coord) ;
  }
  return repeat ;
}
