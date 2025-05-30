#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    int res=a+b;
    ofstream fout("6_file_handling.txt");
    fout<< " the sum of" << a << " and "<< b << " is: " <<res;
    fout.close();
    ifstream fin("6_file_handling.txt");
    string line;

    while (getline(fin,line))
    {
        cout<<line<<endl;
    }
    fin.close();
    cout<<line<<endl;
}