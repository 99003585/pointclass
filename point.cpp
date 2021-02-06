/**
 * @file point.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-02-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "point.h"
Point::Point():m_x(0),m_y(0){

}
Point::Point(int x,int y):m_x(m_x),m_y(m_y) {

}
Point::Point(const Point& ref):m_x(ref.m_x),m_y(ref.m_y){

}

/**
 * @brief To calculate distance from origin
 * 
 * @return double 
 */
double Point::distanceFromOrigin(){
    return int(sqrt(pow(m_x,2)+pow(m_y,2)));

}

/**
 * @brief To check the quadrant in which point lies
 * 
 * @return Quadrant 
 */
Quadrant Point::quadrant() const{
    if(m_x>0 && m_y>0)
       return Q1;

    if(m_x<0 && m_y>0)
       return Q2;

    if(m_x<0 && m_y<0)
       return Q3;

    if(m_x>0 && m_y<0)
        return Q4;
}

/**
 * @brief To check wheather point lies on origin
 * 
 * @return true 
 * @return false 
 */
bool Point::isOnOrigin() const{
    if(m_x==0 && m_y==0)  
       return true;
}

/**
 * @brief To check wheather point lies on x-axis
 * 
 * @return true 
 * @return false 
 */
bool Point::isOnXAxis() const{
    if(m_y==0){
        if(m_x!=0)
          return true;
    }

}

/**
 * @brief To check wheather point lies on x-axis
 * 
 * @return true 
 * @return false 
 */
bool Point::isOnYAxis() const{
    if(m_x==0){
        if(m_y!=0)
          return true;
    }


}
/**
 * @brief To display the x & ypoints
 * 
 */
void Point::display() const{
    std::cout<<"x val is "<<m_x<<"y val is"<<m_y;
}