//
// Created by nisha on 5/25/2024.
//

#include "iostream"  //for cout, cin
#include "fstream"   //ifstream, ofstream

int main()
{
    unsigned short x = 8675;

    std::fstream fout;
    fout.open("files.dat", std::ios::out);
    //above code means we want to open file.dat to write and mode will be text

    if (fout)
    {
       fout << x;
        fout.close();
    }

    else
        std::cout << "Error opening file!";

}