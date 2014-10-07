//统计输入中每个单词所出现的次数
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sort;

int main()
{
    typedef vector<string>::size_type str_sz;

    string longest;
    str_sz longest_len = 0;
    string shortest;
    str_sz shortest_len = 0;

    cout << "Please enter some words: " << endl;
    string s;
    while(cin >> s)
    {
        if(longest_len == 0 || s.size() > longest_len)
        {
            longest = s;
            longest_len = s.size();
        }
        if(shortest_len == 0 || s.size() < shortest_len)
        {
            shortest = s;
            shortest_len = s.size();
        }
    }
    cout << "The longest word is: " << longest << endl;
    cout << "The shortest word is: " << shortest << endl;
    return 0;

}
