#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
using namespace std;
int delay(int millisecond)
{
    clock_t gole = millisecond + clock();
    while (gole > clock())
        ;
    return 1;
}
int main()
{
    string str = "ABCDEEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string name, res;
    cout << "Enter word :- ";
    getline(cin, name);

    for (int i = 0; name[i] >= str.size(); i++)
    {
        for (int j = 0; name[i] >= str[j]; j++)
        {
            cout << res << str[j] << endl;
            delay(2 * 100);
        }
        res += name[i];
    }
    getch();

    return 0;
}