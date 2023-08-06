#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//��ʾ����
#define ROW 9
#define COL 9

//ʵ�������С
#define ROWS ROW+2
#define COLS COL + 2

//������Ϣ
#define Bomb '*'
#define Blank ' '

//�Ѷ�
#define EZ_RANK 10
#define HD_RANK 15

//��ʾ��
#define UN ''
#define Flag '!'


void Menu();

//��ʼ������
void InitBoard(char board[ROWS][COLS], char sign);

void DisplayBoard(char board[ROWS][COLS]);

void InitCheck(char check[ROWS][COLS]);

void SetMine(char board[ROWS][COLS]);
void SetNum(char board[ROWS][COLS]);

void OPMine(char mine[ROWS][COLS],char show[ROWS][COLS],char check[ROWS][COLS]);