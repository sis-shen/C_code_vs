#pragma once
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>


#define Row 9
#define Col 9
#define PlaceHolder ' '
#define PlayerMark 'O'
#define ComputerMark 'X'
#define Num 5 //��������


//��ʼ������
void InitBoard(char baord[Row][Col], int row, int col);
//չʾ����
void DisplayBoard(char board[Row][Col], int row, int col);

//�������
void PlayerMove(char board[Row][Col], int row, int col);
//��������
void ComputerMove(char board[Row][Col], int row, int col);

//�ж���Ӯ 
#define PW 'O' //���Ӯ
#define CW 'X' //����Ӯ
#define NW 'Q' //ƽ��
#define CT 'C' //����
char IsWin(char board[Row][Col], int row, int col,int num);
