#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
//Function Declarations
// @desc: Function will give the quadrant location using points location
int findQuadrant(double x_coordinate, double y_coordinate);
// @desc: Function will give distance between two points
double findDistance(int x1_coordinate, int y1_coordinate, int x2_coordinate, int y2_coordinate);
double findSlope(double A, double B);
void midpoint_of_line(double x1_coordinate, double y1_coordinate, double x2_coordinate, double y2_coordinate);
// @desc: Function will calculate angle between two lines, given both the slopes.
double find_angle(double slope_1, double slope_2);
int checkPerpendicular(double slope_1, double slope_2);
void section_formula(double x1_coordinate, double y1_coordinate, double x2_coordinate, double y2_coordinate, int m, int n, int mode);
double area_of_triangle(double x1, double y1, double x2, double y2, double x3, double y3);
#endif // LIBRARY_H_INCLUDED