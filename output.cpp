//This file contains functions that prints data

#include "maze.h"


void printPath(vector<int>path)
{
    int size = path.size();
    int count = 0;
    int i = size - 1;
    cout << "Start";
    count += 1;
    while (i >= 0)
    {
        cout << " -> ";
        cout << path[i];
        i--;
        count += 1;
    }
    cout << " -> Exit" << endl;
    cout << "Total cost: " << count;

}


void printVector(vector<int> pred)
{
    int size = pred.size();
    int i;
    for (i = 0; i < size; i++)
    {
        cout << i << "   " << pred[i] << endl;
    }
}


void printQueue(queue<int> myQueue)
{
    int val;
    int i = 0;
    while (i < myQueue.size())
    {
        val = myQueue.front();
        cout << val << " ";
        myQueue.pop();
        myQueue.push(val);
        i++;
    }
}