#include "Game.h" 
#include <stdlib.h>
#include <iostream>
#include <thread>

void Game::init_game() {
  //Setup Board
  Board starting_board ; 
  starting_board.make_board() ;
  board = starting_board ; 
  Battleship game_ship ; 
  ship = game_ship ;


  // Initialize rand
  srand(time(NULL));

  //Get random x and y coordinates

  int mod_number = ((board.board_size / 4) + 1) - 1 ;
  int ship_x = rand() % mod_number ;
  int ship_y = rand() % mod_number ; 

  board.place_ship(ship, ship_x, ship_y) ; 


  //Set Game Status 
  status = Game_status::in_progress ;
} 

void Game::play() {
  while ( status == Game_status::in_progress ) {
    board.show_board() ;
    this->next_turn(true) ;
  }
  if ( status == Game_status::win ) {
    std::cout << "Victory!!!\n" ;
  } else {
    std::cout << "Defeat...\n\n" ;
    board.show_board(false) ;
  }
}

void Game::next_turn(bool increment_turn) {
 
  //I don't like that I have to go through the ship 
  //to get the coordinate status
  Coordinate& ship_coordinate = board.ship.bow_location() ;
  int x = ship_coordinate.x_coord() ;
  int y = ship_coordinate.y_coord() ; 

  Coordinate& board_coordinate = board.get_coord(x, y) ;

  if ( board_coordinate.get_status() == Coord_status::hit ) {
    status = Game_status::win ;
  } else if ( turn_number == max_turns) { 
    status = Game_status::loss ;
  } else { 
    std::cout << "Turn " << (turn_number + 1) << "/" << max_turns << "\n" ;
    int x_guess ; 
    int y_guess ; 
    std::cout << "Enter an X coordinate: " ;
    std::cin >> x_guess ;
    std::cout << "Enter a Y coordinate: " ;
    std::cin >> y_guess ; 
    Repeat_reason repeat_reason = board.add_guess(x_guess, y_guess) ;

    if ( repeat_reason == Repeat_reason::bad_x_coord ) { 
      std::cout << x_guess << " is not a valid X coordinate. \n" ;
      this->next_turn(false) ;
    } else if (repeat_reason == Repeat_reason::bad_y_coord ) { 
      std::cout << y_guess << " is not a valud Y coordinate. \n" ;
      this->next_turn(false) ;
    } else if (repeat_reason == Repeat_reason::already_guessed ) {
      std::cout << "The coordinate (" << x_guess << ", " << y_guess << ") has already been fired on.\n" ;
      this-> next_turn(false) ;
    }
  }
  if (increment_turn) {
    if (status == Game_status::in_progress ) {
      std::cout << "Firing...\n\n" ;
      std::this_thread::sleep_for (std::chrono::seconds(1));
    }
    turn_number += 1 ;
  }
}

