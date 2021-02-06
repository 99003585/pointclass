/**
 * @file point.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-02-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<math.h>

enum Quadrant {
Q1,
Q2,
Q3,
Q4
};
class Point {
int m_x;
int m_y;
public:
Point();
Point(int,int);
Point(const Point&);
double distanceFromOrigin();
Quadrant quadrant() const;
bool isOnOrigin() const;
bool isOnXAxis() const;
bool isOnYAxis() const;
void display() const;
};