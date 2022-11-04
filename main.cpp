//Contains Main function
#include "maze.h"


int main() {
    fstream fin;
    vector<int> myvector;
    vector<int> vec;
    queue<int> loc;
    queue<int> frw;
    vector<int> pred;
    vector<int>path;
    vector<int>position;

    /*                            PLEASE UNCOMMENT THE APPROPRIATE MAZE FILE BELOW TO RUN.
    *        ---------------------------------------------------------------------------------------------------
    * --------THE PROGRAM WILL RUN maze4Reverse.txt BY DEFAULT. TO RUN ANY OTHER FILE, PLEASE COMMENT THIS FIRST------------
    *        --------------------------------------------------------------------------------------------------
    */

    //-------TEST MAZE----------
    //string file = "test.txt";

    //---------MAZE 1-----------
    //string file = "maze1.txt";

    //---------MAZE 2------------
    //string file = "maze2.txt";

    //---------MAZE 3----------
    //string file = "maze3.txt";

    //-------TEST MAZE 2------
    //string file = "test-maze2.txt";

    //------MAZE 4-----------
    string file="maze4.txt";

    //================================
    //----------REVERSED MAZE---------
    //================================

    //-------TEST MAZE 2 REVERSE--------
    //string file = "test-maze2Reverse.txt";

    //------------MAZE 4 REVERSE---------
    //string file="maze4Reverse.txt";


    openFile(fin, file);

    getInput(fin, vec, pred, position);
    if (position.empty())
    {
        position.push_back(vec[0]);
        position.push_back(vec[vec.size()-2]);
    }
    solve(vec, pred, position);

    // printVector(pred);

    setPred(pred, path, position);

    printPath(path);
    fin.close();
    return 0;
}
