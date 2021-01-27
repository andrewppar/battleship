#include <string>

#ifndef COORDINATE_H
#define COORDINATE_H

enum class Coord_status {
  occupied ,
  open ,
  hit ,
  miss
} ;



class Coordinate {

  private:
    int x ;
    int y ;
    Coord_status status  ;

  public:
    void create_coord(int x_coord, int y_coord) ;
    void set_occupied() ;
    void set_hit();
    void set_miss();
    int& x_coord() ;
    int& y_coord() ;
    Coord_status get_status();
    std::string show_coord();
};

#endif
