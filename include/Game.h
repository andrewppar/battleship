#include "Board.h"

#ifndef GAME_H
#define GAME_H

enum class Game_status {
  win ,
  loss ,
  in_progress
} ;

class Game {

  private:
    const int max_turns = 5 ;
    int turn_number = 0 ;
    Game_status status ;
    Battleship ship ;
    Board board  ;
    void next_turn(bool increment_turn) ;


 public:
    void init_game() ;
    void play () ;
} ;
#endif
