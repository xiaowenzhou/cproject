#include <stdio.h>
#include <cctype>
#include "include/test.h"
using namespace std;

using ii = int;

int foo()
{
    return 45;
}

int main()
{
    // test();
    // bookSale();
    // useString();
    hexChange();
    system("pause");
    return 0;
}

void test()
{
    int *val1, *val2 = nullptr;
    const int ival = 42;
    ii a = 5;
    constexpr int buf = ival;
    constexpr int conval = buf + 1;
    decltype(buf) sum = buf;
    val2 = &a;
    cout << "val1 = " << val1 << "*val1 =" << *val1 << endl;
}

int bookSale()
{
    Sales_data data1, data2;
    double price = 0;
    cin >> data1.bookNo >> data1.units_sold >> price;
    // 计算销售收入1
    data1.revenue = data1.units_sold * price;

    cin >> data2.bookNo >> data2.units_sold >> price;
    // 计算销售收入2
    data2.revenue = data2.units_sold * price;
    if (data1.bookNo == data2.bookNo)
    {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        cout << data1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
        if (totalCnt != 0)
        {
            cout << totalRevenue / totalCnt << endl;
        }
        else
        {
            cout << "(no sales)" << endl;
        }
        return 0;
    }
    else
    {
        cerr << "Data must refer to the same ISBN" << endl;
        return -1;
    }
}

void useString()
{
    string s1 = "hello";
    string s2("world");
    string s3(3, 'c');
    string s4 = s1 + ",";
    cout << "s1= " << s1 << " s2 = " << s2 << " s3= " << s3 << " s4= " << s4 << endl;

    string s("Hello World!!!");
    decltype(s.size()) punct_cnt = 0;
    for (auto &c : s)
    {
        c = toupper(c);
    }
    cout << s << endl;
    // cout << punct_cnt << " punctuation characters in " << s << endl;
}

void hexChange()
{
    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by spaces. Hit ENTER when finished: " << endl;
    string result;
    string::size_type n;
    while (cin >> n && cin.get()!='\n') //cin>>n 只会在输入非int型的字符才会终止，按enter键并不会终止 所以需要添加 &&cin.get()!='\n' 来判断是否输入了 enter键
    {
        if (n < hexdigits.size())
        {
            result += hexdigits[n];
        }
    }
    cout << "Your hex number is : " << result << endl;
}