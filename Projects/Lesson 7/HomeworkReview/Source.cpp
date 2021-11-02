// Տպել [1, N-1] միջակայքում ընկած բնական թվերի քանակը, որոնք բաժավնում են իրենց թվանշանների գումարին։
// Տպել [N+1, 1000] միջակայքում ընկած բնական թվերի քանակը, որոնք բաժավնում են իրենց թվանշանների գումարին։
// Այդ քանակները հաշվելու համար կազմել առանձին ֆունկցիաներ։

#include <iostream>
using namespace std;



// 83476893687


// 253
// 
// 253 % 10 = 3
// 253 / 10 = 25
// 25 % 10 = 5
// 25 / 10 = 2
// 2 % 10 = 2
// 2 / 10 = 0

int check(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        sum /= 10;
    }
    return sum;


    int  h, d, u;
    h = num / 100;
    num = num - h * 100;
    d = num / 10;
    num = num - d * 10;
    u = num % 10;
    return  h + d + u;
}
void from1(int num)
{
    for (int i = 1; i < num; i++)
    {
        if (i % check(i) == 0)
        {
            cout << i << endl;
        }
    }
}
void to1000(int num)
{
    for (int j = num + 1; j < 1000; j++)
    {
        if (j % check(j) == 0)
        {
            cout << j << endl;
        }
    }
}

void inRange(int min, int max)
{
    for (int i = min; i < max; i++)
    {
        if (i % check(i) == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int N;
    cin >> N;
    inRange(1, N);
    cout << '\n';
    inRange(N + 1, 1000);
}