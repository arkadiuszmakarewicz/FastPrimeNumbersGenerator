#include <iostream>

using namespace std;

int main()
{
    unsigned long long prime = 2;

    cout << "Start value (from 2 to 18446744073709551615)" << endl;
    cin >> prime;
    cout << "Prime numbers:" << endl;

    while (true)
    {
        bool isDevider = false;
        unsigned long long lastInForLoop = 0;


        for (unsigned long long i = 2; isDevider == false; i++)
        {
            if (prime % i == 0)
            {
                isDevider = true;
                lastInForLoop = i;
            }
        }

        if (isDevider == true && lastInForLoop == prime)
        {
            cout << prime << endl;
        }

        prime++;
    }

    return 0;
}