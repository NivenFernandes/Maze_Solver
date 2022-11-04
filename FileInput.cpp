//This file contains function that get the input from the file

#include "maze.h"


bool openFile(fstream& fin, string file)
{
    fin.open(file);
    if (!fin.is_open())
    {
        cout << "Unable to open input file: " << file << endl;
        return false;
    }
    return true;
}


void getInput(fstream& fin, vector<int>& vec, vector<int>& pred, vector<int>& position)
{
    int val;
    pred.push_back(-1);
    int size;
    string str;
    queue<int> temp;
    getline(fin, str, '\n');
    size = str.size();
    if (str[size - 1] == '1' && str[size - 2] == '-')
    {
        cleanString(str, temp);
        while (!temp.empty())
        {
            val = temp.front();
            temp.pop();
            vec.push_back(val);
            if (val != -1)
            {
                pred.push_back(-1);
            }
        }
    }
    else
    {
        cleanString(str, temp);
        val = temp.front();
        temp.pop();
        position.push_back(val);
        //
        val = temp.front();
        temp.pop();
        position.push_back(val);
    }


    while (fin >> val)
    {
        vec.push_back(val);
        if (val != -1)
        {
            pred.push_back(-1);
        }
    }


}


void cleanString(string str, queue<int>& temp) {
    int val;
    stringstream sstrm;
    sstrm << str;

    while (!sstrm.eof()) {
        sstrm >> str;
        if (stringstream(str) >> val) {
            temp.push(val);
        }
    }
}