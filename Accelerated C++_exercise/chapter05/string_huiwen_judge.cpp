//找出一个单词集中的所有回文，并且找出最长的回文

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

bool is_palindrome(const string& str)
{
    string reversed;
    reverse_copy(str.begin(), str.end(), back_inserter(reversed));
    return(str == reversed);
}

int main()
{
    string s;
    string longest_palindrome;
    vector<string> palindromes;

    while(cin >> s)
        if(is_palindrome(s))
         {
             palindromes.push_back(s);

             if(s.length() > longest_palindrome.length() )
                longest_palindrome = s;
         }
    cout << "\nPalindrome:" << endl;
    for(vector<string>::const_iterator i = palindromes.begin(); i != palindromes.end(); ++i)
        cout << *i << endl;
    cout << "Longest palindrome: " << longest_palindrome << endl;

}
