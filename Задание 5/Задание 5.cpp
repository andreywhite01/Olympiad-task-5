#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("input.txt");
    int n;
    fin >> n;
    fin.close();

    int number = 0;
    for (int i = 1; i <= n; ++i) {
        number += i * i;
    }
    ofstream fout;
    fout.open("output.txt");
    fout << number;
}
