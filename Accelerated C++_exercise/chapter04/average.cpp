//求vector<double>向量中的平均值
#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main()
{
    vector<double> nums;
    double num;
    while(cin >> num)
        nums.push_back(num);
    cout << accumulate(nums.begin(), nums.end(), 0.0) / nums.size() << endl;
}
