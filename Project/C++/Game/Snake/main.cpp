#include <iostream>
#include <conio.h>

using namespace std;

bool gameOver;
const int width = 40;
const int height = 20;
int x, y, fruitX, fruitY, score;

enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};
eDirection dir;

int tailX[100], tailY[100];
int nTail;

void newFruit()
{
    fruitX = rand() % width;
    fruitY = rand() % height;
}

void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    newFruit();
    score = 0;
}

void Draw()
{
    system("clear");
    for (size_t i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (size_t j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";

            if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "o";
            else
            {
                bool print = false;
                for (size_t k = 0; k < nTail; k++)
                    if (j == tailX[k] && i == tailY[k])
                    {
                        cout << "o";
                        print = true;
                    }

                if (!print)
                    cout << " ";
            }

            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (size_t i = 0; i < width + 2; i++)
        cout << "#";

    cout << endl
         << "Score: " << score << endl;
}

void Input()
{
    if (_kbhit())
    {
        switch (getch())
        {

        case 'w':
            dir = UP;
            break;

        case 'a':
            dir = LEFT;
            break;

        case 'd':
            dir = RIGHT;
            break;

        case 's':
            dir = DOWN;
            break;

        case 'x':
            gameOver = true;
            break;
        }
    }
}

void Logic()
{
    int prevX = tailX[0], prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (size_t i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    for (size_t i = 1; i < nTail; i++)
    {
        if (x == tailX[i] && y == tailY[i])
            gameOver = true;
    }

    switch (dir)
    {
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    }

    // if (x >= width || y >= height || x < 0 || y < 0)
    //     gameOver = true;

    if (x >= width)
        x = 0;
    else if (x < 0)
        x = width - 1;

    if (y >= height)
        y = 0;
    else if (y < 0)
        y = height - 1;

    if (x == fruitX && y == fruitY)
    {
        score += 10;
        newFruit();
        nTail++;
    }
}

int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        system("sleep .2");
    }

    return 0;
}
