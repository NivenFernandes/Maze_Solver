//contains the include statement and the function prototypes

#ifndef MAZE_PROJECT_MAZE_H
#define MAZE_PROJECT_MAZE_H
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <stack>
#include <sstream>

using namespace std;


/*
 * COMPLETED ALL 5 STEPS OF THE PROGRAMMING ASSIGNMENT
 * THE MAZE.TXT FILES ARE COMMENTED IN main() FROM LINE 50 ONWARDS. PLEASE UNCOMMENT THE APPROPRIATE MAZE FILES
 * TO RUN IT.
 *
 *        ---------------------------------------------------------------------------------------------------
 * --------THE PROGRAM WILL RUN maze4Reverse.txt BY DEFAULT. TO RUN ANY OTHER FILE, PLEASE COMMENT THIS FIRST------------
 *        --------------------------------------------------------------------------------------------------
 * THE FILES ARE STORED IN cmake-build-debug
 *
 */



void getInput(fstream& fin, vector<int>& vec, vector<int>& pred, vector<int>& position);
bool openFile(fstream& fin, string file);
void solve(vector<int>& vec, vector<int>& pred, vector<int>& position);
void printQueue(queue<int> myQueue);
void printVector(vector<int> pred);
void printPath(vector<int>path);
void setPred(vector<int> pred, vector<int>& path, vector<int>position);
void cleanString(string str, queue<int>& temp);
//void solvePosition(queue<int> myQueue, vector<int>& pred, queue<int>& loc, queue<int>& frw, vector<int>position);
int find(vector<int> vec, int num);

#endif //MAZE_PROJECT_MAZE_H