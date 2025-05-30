#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin("1_file_handiling.txt");
    string line;
    while (getline (fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
}