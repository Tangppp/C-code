#ifndef ___GAME_H_
#define ___GAME_H_
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

void Game_DisplayBoard(char board[ROW][COL], int row, int col);
void Game_Init(char board[ROW][COL], int row, int col);
void Game_Player(char board[ROW][COL], int row, int col);
void Game_Robot(char board[ROW][COL], int row, int col);
int Game_IsWin(char board[ROW][COL], int row, int col);

#endif