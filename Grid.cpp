#include "Grid.h"

Grid::Grid()
{
    for (int i = 0; i < MaxGrid; i++)
    {
        for (int j = 0; j < MaxGrid; j++)
        {
            cells[i][j] = '~';
        }
    }
}

void Grid::PrintGrid(){
    for (int i = 0; i<MaxGrid ; i++){
        for (int j = 0; j<MaxGrid; j++){
            std::cout << cells[i][j];
        }
        std::cout << std::endl;
    }
}
char Grid::getCell(int row, int col) const{
    return cells[row][col];
}