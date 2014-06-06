#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{   ifstream xin;
    xin.open("input2.txt");
    int base, n1, n2, n3;
    while(!xin.eof()){
        xin>>base>>n1>>n2>>n3;
        cout<<"Base: "<<base<<": ";
        if((n1+n2+n3)%9==0)
           cout<<"Missing is 9 or 0"<<endl;
        else
           cout<<"Missing is: "<<9-(n1+n2+n3)%9<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
