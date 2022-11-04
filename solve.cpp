//This file contains function that solve the maze

#include "maze.h"



void setPred(vector<int> pred, vector<int>& path, vector<int>position) {
    int size = pred.size();
    int i = size - 1;
    bool found = true;
    int last;

    if (position.empty())
    {
        while (i > 0 && found) {
            if (pred[i] != -1) {
                found = false;
            }
            i--;
        }
        i++;
        last = 0;
    }
    else {
        i = position[1];
        last = position[0];
    }


    while (i != last) {
        path.push_back(i);
        i = pred[i];
    }

    if (!position.empty())
    {
        path.push_back(last);
    }
}




void solve(vector<int>& vec, vector<int>& pred, vector<int>& position)
{
    queue<int>wo;
    int i = 0;
    int final = position[1];
    int loc = 0;
    int frw = position[0];
    int temp;
    int tmp1, tmp2;

    while(frw!=final)
    {
        pred[frw] = loc;
        temp = find(vec, frw);
        if (frw == vec[0])
        {
            temp = 0;
        }
        temp = temp + 1;
        while (vec[temp] != -1)
        {
            wo.push(frw);
            wo.push(vec[temp]);
            temp++;
        }

        tmp1 = wo.front();
        wo.pop();
        tmp2 = wo.front();
        wo.pop();

        while (pred[tmp2] != -1)
        {
            tmp1 = wo.front();
            wo.pop();
            tmp2 = wo.front();
            wo.pop();
        }

        frw = tmp2;
        loc = tmp1;

    }
    pred[frw] = loc;
}

int find(vector<int> vec, int num)
{
    int size = vec.size();
    int i;
    for (i = 1; i < size; i++)
    {
        if (vec[i] == num && vec[i - 1] == -1)
        {
            return i;
        }
    }
    return -1;
}