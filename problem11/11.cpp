#include <iostream>
#include <fstream>

using namespace std;

int** readFile()
{
    ifstream fin("11.txt");
    int** grid = new int*[20];

    int i,j = 0;

    for (int i=0; i<20; i++)
    {
       grid[i] = new int[20];
    }

    while(!fin.eof())
    {
        for(int i=0; i<20; i++)
            fin >> grid[i][j];

        j++;
    }

    fin.clear();
    fin.close();

    return grid;
}

void printGrid(int **grid)
{
    for(int j=0; j<20; j++)
    {
        for(int i=0; i<20; i++)
        {
            cout<<grid[i][j] << " ";
        }
        cout << endl;
    }
}

int multiplyRow(int **grid, int x, int y)
{
    if( grid[x][y]>=0 && grid[x][y]<20 &&
        grid[x+1][y]>=0 && grid[x+1][y]<20 &&
        grid[x+2][y]>=0 && grid[x+2][y]<20 &&
        grid[x+3][y]>=0 && grid[x+3][y]<20 )
    {
        return grid[x][y] * grid[x+1][y] * grid[x+2][y] * grid[x+3][y];
    }
}

int multiplyColumn(int **grid, int x, int y)
{
    if( grid[x][y]>=0 && grid[x][y]<20 &&
        grid[x][y+1]>=0 && grid[x][y+1]<20 &&
        grid[x][y+2]>=0 && grid[x][y+2]<20 &&
        grid[x][y+3]>=0 && grid[x][y+3]<20 )
    {
        return grid[x][y] * grid[x][y+1] * grid[x][y+2] * grid[x][y+3];
    }
}

int multiplyForwardDiagonal(int **grid, int x, int y)
{
    if( grid[x][y]>=0 && grid[x][y]<20 &&
        grid[x+1][y+1]>=0 && grid[x+1][y+1]<20 &&
        grid[x+2][y+2]>=0 && grid[x+2][y+2]<20 &&
        grid[x+3][y+3]>=0 && grid[x+3][y+3]<20 )
    {
        return grid[x][y] * grid[x+1][y+1] * grid[x+2][y+2] * grid[x+3][y+3];
    }
}

int multiplyBackwardsDiagonal(int **grid, int x, int y)
{
    if( grid[x][y]>=0 && grid[x][y]<20 &&
        grid[x-1][y-1]>=0 && grid[x-1][y-1]<20 &&
        grid[x-2][y-2]>=0 && grid[x-2][y-2]<20 &&
        grid[x-3][y-3]>=0 && grid[x-3][y-3]<20 )
    {
        return grid[x][y] * grid[x-1][y-1] * grid[x-2][y-2] * grid[x-3][y-3];
    }
}

int main()
{
    int** grid = readFile();

    int greatest_product = 0;

    for(int i=0; i<20; i++)
    {
        for(int j=0; j<20; j++)
        {
            if( multiplyRow(grid,i,j)>greatest_product )
                greatest_product = multiplyRow(grid,i,j);
            else if( multiplyColumn(grid,i,j)>greatest_product )
                greatest_product = multiplyColumn(grid,i,j);
            else if( multiplyForwardDiagonal(grid,i,j)>greatest_product )
                greatest_product = multiplyForwardDiagonal(grid,i,j);
            else if( multiplyBackwardsDiagonal(grid,i,j)>greatest_product )
                greatest_product = multiplyBackwardsDiagonal(grid,i,j);
        }
    }

    cout << greatest_product << endl;

//    printGrid(grid);

    return 0;
}
