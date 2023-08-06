#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Row 9  //ºá×Ý×ø±ê
#define Col 9

#define Rows Row + 2
#define Cols Col + 2

//mine
#define Bomb '1'
#define NonBomb '0'
//show
#define PlaceHolder '#'
#define Blank ' '

#define EASY_COUNT 10


void InitBoard(char board[Rows][Cols], int rows, int cols,char sign);
void DisplayBoard(char board[Rows][Cols], int row, int col);

void SetMine(char board[Rows][Cols], int row, int col, char bomb);

//ÅÅÀ×
void FindMine(char mine[Rows][Cols], char show[Rows][Cols], int row, int col);

