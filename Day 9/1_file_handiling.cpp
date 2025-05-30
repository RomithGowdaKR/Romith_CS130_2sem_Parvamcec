#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("1_file_handiling.txt");
    fout<<"hello world\n";
    cout<<"file is closed"<<endl;
}