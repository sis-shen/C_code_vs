#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//显示行列
#define ROW 9
#define COL 9

//实际数组大小
#define ROWS ROW+2
#define COLS COL + 2

//地雷信息
#define Bomb '*'
#define Blank ' '

//难度
#define EZ_RANK 10
#define HD_RANK 15

//显示区
#define UN ''
#define Flag '!'


void Menu();

//初始化棋盘
void InitBoard(char board[ROWS][COLS], char sign);

void DisplayBoard(char board[ROWS][COLS]);

void InitCheck(char check[ROWS][COLS]);

void SetMine(char board[ROWS][COLS]);
void SetNum(char board[ROWS][COLS]);

void OPMine(char mine[ROWS][COLS],char show[ROWS][COLS],char check[ROWS][COLS]);