/** The coordinates class. It stores pairs of ints which 
 * correspond to the x and y compontents of a coordinate system.
 */
class Coordinate { 

  public:  
  /** x-coordinate
   */
  int x_coord ; 

  /** y-coordinate
   */
  int y_coord ; 

  Coordinate (int c1 ,int c2) { 
    x_coord = c1 ;
    y_coord = c2 ;
  }



  /** Return Coordinate that is n places
   * to the left
   */
  Coordinate move_left(int) ; 
  /** Return Coordinate that is n places
   * to the right
   */
  Coordinate move_right(int) ; 
  /** Return Coordinate that is n places
   * up
   */
  Coordinate move_down(int) ; 
  /** Return Coordinate that is n places
   * down
   */
  Coordinate move_up(int) ; 

  friend bool operator== (const Coordinate &c1, const Coordinate &c2) ;
  friend bool operator!= (const Coordinate &c1, const Coordinate &c2) ; 

} ;

bool operator== (const Coordinate &c1, const Coordinate &c2) {
  return c1.x_coord == c2.x_coord && c1.y_coord == c2.y_coord ; 
}

bool operator!= (const Coordinate &c1, const Coordinate &c2) { 
  return c1.x_coord != c2.x_coord || c1.y_coord != c2.y_coord ;
}
