


#include <iostream>

using namespace std;

#define MAX 1000

int main()
{
    int count[MAX + 1];
    for (int i = 0; i <= MAX; i++) count[i] = 0;

    while(!cin.eof())
    {
        int number = 0;
        cin >> number;
        if (!cin.bad())
        {
            count[number]++;
        }

    }
    for (int i = 0; i < Max; i++) {
        if (count[i] != 0) cout << i  << ':' << count[i] << endl;
     }

    return 0;
}

