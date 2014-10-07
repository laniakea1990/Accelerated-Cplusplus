#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int get_width(int n)
{
    return log10(n) + 1;
}
int main()
{
    int flag = 100;
    for(int i = 1; i <= flag; ++i)
        cout<< setw(get_width(flag))
        << i
        << setw(get_width(flag * flag))
        << i*i
        << endl;
    return 0;
}
