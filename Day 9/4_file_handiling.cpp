#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    ofstream fout("3_file_handiling.txt");
    fout.put('H');
    fout.close();
    ifstream fin("3_file_handiling.txt");
    char v1;
    fin.get(v1);
    fin.close();
    cout<<"the value is:"<<v1<<endl;
}