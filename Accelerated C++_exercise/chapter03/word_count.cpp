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
    cout << "Please enter some words: " << endl;
    vector<string> vec_str;
    vector<int> count;
    typedef vector<string>::size_type str_sz;
    string str;
    while(cin >> str)
    {
        bool found = false;
        for(str_sz i = 0; i < vec_str.size(); ++i)
        {
            if(str == vec_str[i])
            {
                ++count[i];
                found = true;
            }
        }
        if(!found)
        {
            vec_str.push_back(str);
            count.push_back(1);
        }
    }
    for(str_sz i =0; i < vec_str.size(); ++i)
        cout << vec_str[i] << " appears " << count[i] << "times" << endl;


    return 0;

}
