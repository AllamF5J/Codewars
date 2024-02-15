/*
|_______________________________________________________________________________
| @Solver         : GziXnine
| @Link           : https://www.codewars.com/kata/5671d975d81d6c1c87000022
| @description    : In a grid of 4 by 4 squares you want to place a skyscraper
|                   in each square with only some clues:
|                   The height of the skyscrapers is between 1 and 4
|                   No two skyscrapers in a row or column may have the same
|                   number of floors
|                   A clue is the number of skyscrapers that you can see in a
|                   row or column from the outside
|                   Higher skyscrapers block the view of lower skyscrapers
|                   located behind them
|_______________________________________________________________________________
*/
#include <iostream>
#include <vector>

using namespace std;

bool test(int size, int** board, const int* clues, int row, int col) 
{
    for (int i = 0; i < size; i++) 
    {
        if (board[row][i] == board[row][col] && i != col) return false;
        if (board[i][col] == board[row][col] && i != row) return false;
    }
    bool complete;
    int clue;
    int visible;
    int max_height;

    if ((clue = clues[col]) != 0) 
    {
        visible = max_height = 0;
        complete = true;
        for (int i = 0; i < size; i++) 
        {
            if (board[i][col] == 0) complete = false;
            else if (board[i][col] > max_height) 
            {
                visible++;
                if ((max_height = board[i][col]) == size) break;
            }
        }
        if (complete && visible != clue) return false;
    }
    if ((clue = clues[row + size]) != 0) 
    {
        visible = max_height = 0;
        complete = true;
        for (int i = size - 1; i >= 0; i--) 
        {
            if (board[row][i] == 0) complete = false;
            else if (board[row][i] > max_height) 
            {
                visible++;
                if ((max_height = board[row][i]) == size) break;
            }
        }
        if (complete && visible != clue) return false;
    }
    if ((clue = clues[3 * size - col - 1]) != 0) 
    {
        visible = max_height = 0;
        complete = true;
        for (int i = size - 1; i >= 0; i--) 
        {
            if (board[i][col] == 0) complete = false;
            else if (board[i][col] > max_height) 
            {
                visible++;
                if ((max_height = board[i][col]) == size) break;
            }
        }
        if (complete && visible != clue) return false;
    }
    if ((clue = clues[4 * size - row - 1]) != 0) 
    {
        visible = max_height = 0;
        complete = true;
        for (int i = 0; i < size; i++) 
        {
            if (board[row][i] == 0) complete = false;
            else if (board[row][i] > max_height) 
            {
                visible++;
                if ((max_height = board[row][i]) == size) break;
            }
        }
        if (complete && visible != clue) return false;
    }
    return true;
}

int** SolvePuzzle (int *clues) 
{
    int size = 4;
    int** board = new int*[size];
    for (int i = 0; i < size; i++) 
    {
        board[i] = new int[size];
        for (int j = 0; j < size; j++)
            board[i][j] = 0;
    }
    for (int row = 0; row < size; row++) 
    {
        for (int col = 0; col < size; col++) 
        {
            while (++board[row][col] <= size && !test(size, board, clues, row, col));
            if (board[row][col] > size) 
            {
                board[row][col] = 0;
                col -= 2;
                if (col < 0) 
                {
                    col += size;
                    row--;
                }
            }
        }
    }
    return board;
}
