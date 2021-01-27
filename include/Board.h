#include <string>
#include "Battleship.h"

#ifndef BOARD_H
#define BOARD_H

enum class Repeat_reason {
  not_needed ,
  bad_x_coord ,
  bad_y_coord ,
  already_guessed
} ;

class Board {

  public:
    static const int board_size = 16 ;
    Coordinate tiles [board_size] ;
    Battleship ship ;

    void make_board() ;
    Coordinate& get_coord(int x, int y) ;
    void place_ship(Battleship ship, int x, int y) ;
    void show_board(bool hide_ship = true) ;
    Repeat_reason add_guess(int x, int y) ;

} ;

#endif
