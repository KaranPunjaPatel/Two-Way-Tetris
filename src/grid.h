#pragma once
#include <vector>
#include <raylib.h>
#include "macros.h"

class Grid
{
public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    bool IsCellOutside(int row, int column);
    bool IsCellOutside2(int row, int column);
    bool IsCellEmpty(int row, int column);
    int ClearFullRows();
    int ClearFullRowsBottom();
    int grid[NUM_ROWS][NUM_COLS];

private:
    bool IsRowFull(int row);
    void ClearRow(int row);
    void MoveRowDown(int row, int numRows);
    void MoveRowUp(int row, int numRows);
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;
};