#ifndef GRAHAM_H
#define GRAHAM_H

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stack>
#include <stdlib.h>

using namespace cv;
using namespace std;

Point nextToTop(stack<Point> &S);
int swap(Point &p1, Point &p2);
int distSq(Point p1, Point p2);
int orientation(Point p, Point q, Point r);
int compare(const void *vp1, const void *vp2);
vector<Point> convexHull_(vector<Point> points, int n);

#endif

