// Implementation of Bentley Ottman Algorithm in C++ (/ sweep-line algo)
// @author: Kushashwa Ravi Shrimali
// @reference: geomalgorithms.com/a09-_intersect-3.html
// To Do: 
// 1. Applications and OpenCV Implementation
// 2. Add functions for BBT

typedef struct _BBTnode Tnode; // Tree node
struct _BBTnode {
  void* val; // contains node value
};

typedef struct Point Point;
struct Point {
  int x;
  int y;
};

class BBT {
  Tnode *root;
public:
  // constructor
  BBT() {
    root = (Tnode*)0;
  }
  // destructor
  ~BBT() {
    freetree();
  }
  
  // TO DO
  Tnode* insert(void*) {}; // insert data into the tree
  Tnode* find(void*) {}; // find data from the tree
  Tnode* next(Tnode*) {}; // get next tree node
  Tnode* prev(Tnode*) {}; // get node from the tree
  void remove(Tnode*) {}; // remove node from the tree
  void freetree() {}; // free all tree data structs
};

#define FALSE 0
#define TRUE 1
#define LEFT 0
#define RIGHT 0

// required for sorting end points of segments
extern void qsort(void*, unsigned, unsigned, int(*)(const void*, const void*));

// xyorder(p1, p2) :
// return  1 if p1 > p2
// return -1 if p1 < p2
// return  0 if p1 = p2
int xyorder(Point* p1, Point* p2) {
  // test the x coord first
  if(p1->x > p2->x) return 1;  // p1 > p2
  if(p1->x < p2->x) return -1; // p1 < p2

  // test y coordinates
  if(p1->y > p2->y) return 1;   // p1 > p2
  if(p1->y < p2->y) return -1;  // p1 < p2
  
  // else return 0 (p1 = p2)
  return 0;
}

// to be continued
