#pragma once
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>


#define Row 5
#define Col 5
#define PlaceHolder ' '
#define PlayerMark 'O'
#define ComputerMark 'X'


//初始化棋盘
void InitBoard(char baord[Row][Col], int row, int col);
//展示棋盘
void DisplayBoard(char board[Row][Col], int row, int col);

//玩家下棋
void PlayerMove(char board[Row][Col], int row, int col);
//电脑下棋
void ComputerMove(char board[Row][Col], int row, int col);

//判断输赢 
#define PW 'O' //玩家赢
#define CW 'X' //电脑赢
#define NW 'Q' //平局
#define CT 'C' //继续
char IsWin(char board[Row][Col], int row, int col);
