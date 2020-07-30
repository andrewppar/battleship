#pragma once
#include "Coordinate.h"

/** 
 A powerful battleship
 */
class Battleship { 
  /** Bow Coordinates
   */
  Coordinate bow ;
  /** Stern Coordinates 
   */
  Coordinate stern ; 

  public: 
  /** Construct a ship
   */
  Battleship(Coordinate c1, Coordinate c2) : bow(c1.x_coord, c1.y_coord), stern (c2.x_coord, c2.y_coord) {

  }
//  Battleship (Coordinate bow_coord, Coordinate stern_coord) {
//    bow = bow_coord ; 
//    stern = stern_coord ;
/**    if (bow == stern) { 
      throw std::invalid_argument( "The bow and stern of a ship cannot be the same" ); 
    }
    if (bow.x_coord != stern.x_coord && bow.y_coord != stern.y_coord) { 
      throw std::invalid_argument( "The bow and stern cannot be diagonal to one another");
    }
    */
  //}

 /**
  * Move the battleship to the left 
  */
  void move_left(int); 
  /**
   * Move the battleship to the right 
   */
  void move_right(int); 
  /**
   * Move the battleship up
   */
  void move_down(int); 
  /**
   * Move the battleship down
   */
  void move_up(int); 
} ;
