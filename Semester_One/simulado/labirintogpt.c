typedef struct mark {
    int x, y, z;
} mark_t;

void display_mark(mark_t *);

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "maze_stack.h"

//An X_DIM x Y_DIM matrix for representing a maze
#define X_DIM 5
#define Y_DIM 5

//Cell types in the maze matrix. 
#define BLOCK  88 // cannot move 
#define FREE   32 // can move
#define VISIT  46 // visit mark
#define ORIGIN 79 // starting cell
#define DEST   64 // destination cell

#define ALLOWED_MOVES 4
enum {DEADEND , DOWN, RIGHT, LEFT, UP};

char maze[X_DIM][Y_DIM];

char mazeCell[] = {BLOCK,FREE};

mark_t newMaze() {

  mark_t origin;

  srand((unsigned) time(0));

  for (int i = 0; i < X_DIM; i++)
    for (int j = 0; j < Y_DIM; j++)
  maze[i][j] = mazeCell[rand() % 2]; 

  origin.x = rand() % X_DIM;
  origin.y = rand() % Y_DIM;
  origin.z = ALLOWED_MOVES; 
  maze[origin.x][origin.y] = ORIGIN;

  maze[rand() % X_DIM][rand() % Y_DIM] = DEST;

  return (origin);
}

