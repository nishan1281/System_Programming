//
// Created by nisha on 5/25/2024.
//

#include "iostream"  //for cout, cin
#include "fstream"   //ifstream, ofstream

int main()
{
    unsigned short x = 8675;


    std::fstream fout;
    fout.open("file.dat", std::ios::out | std::ios::binary);
    //above code means we want to open file.dat write and mode will be binary

    if (fout)
    {
        //to write two aregument required. One memory address and other bit size.
        //but first aregument should be charecter pointer and memory address.
        fout.write(reinterpret_cast<char*>(&x), sizeof(unsigned short));
        fout.close();

    }

    else
        std::cout << "Error opening file!";


    fout.open("file.dat", std::ios::in | std::ios::binary);
    //above code means we want to open file.dat write and mode will be binary

    if (fout)
    {
        unsigned short y = 0;
        fout.read(reinterpret_cast<char*>(&y), sizeof(unsigned short));
        fout.close();
        std::cout << y <<std::endl;
    }

}