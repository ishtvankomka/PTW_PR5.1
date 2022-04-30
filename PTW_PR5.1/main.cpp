#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Functions.hpp"
using namespace std;

int main()
{
    char fname[100];
    char gname[100];
    cout << "enter file name 1: "; cin >> fname;
    CreateBIN(fname);
    PrintBIN(fname);
    cout << "enter file name 2: "; cin >> gname;
    ProcessBIN(fname, gname);
    PrintBIN(gname);
    return 0;
}

// /Users/mac/Desktop/Student/PTW/4/PTW_PR5.1/PTW_PR5.1/t1.txt
// /Users/mac/Desktop/Student/PTW/4/PTW_PR5.1/PTW_PR5.1/t2.txt
