#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

istream& read_words(istream& in, vector<string>& words)
{
    if(in)
    {
        words.clear();
        string word;

        while(cin >> word)
            words.push_back(word);
        in.clear();
    }
}

int main()
{
    vector<string> words;

    read_words(cin, words);

    cout<< "The number of words is: "<< words.size() << endl;

    sort(words.begin(), words.end());

    string prev_word = "";
    int count;

    for(vector<string>::size_type i = 0; i != words.size(); ++i)
    {
        if(words[i] != prev_word )
        {
            if(prev_word != "")
                 cout << prev_word << " appeared " << count << " times" << endl;
            prev_word = words[i];
            count = 1;
        }
        else
            count++;
    }
    cout << prev_word << " appeared " << count << " times" << endl;
    return 0;
}
