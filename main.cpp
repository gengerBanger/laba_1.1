#include <iostream>
using namespace std;
int main()
{
    cout << "int" << " " << sizeof(int) << endl << "short int" << " " << sizeof(short int) << endl << "long int" << " " << sizeof(long int) << endl
    << "float" << " " << sizeof(float) << endl << "double" << " " << sizeof(double) << endl << "long double" << " " << sizeof(long double) << endl
    << "char" << " " << sizeof(char) << endl << "bool" << " " << sizeof(bool) << endl;
    bool g = true;
    while (g == 1)
    {
        int  mask , value_1, count = 2;
        cout << "enter a number to get a binary representation in memory of the \"int\" type" << endl ;
        cin >> value_1;
        mask = 1 << (sizeof(int) * 8 - 1);
        if (cin)
        {
            for (int i = 0; i < sizeof(int) * 8; i++ )
            {
                if (i == 1 || i % 8 == 0 && i != 0)
                {
                    putchar(' ');
                }
                putchar(value_1 & mask   ? '1' : '0');
                mask = 1 << (sizeof(int) * 8 - count) ;
                count ++;
            }
            cout << endl;
        }
        else
        {
            g = false;
        }
    }
    union
    {
        float value_2_1;
        int value_2;
    };
    g = true;
    cin.clear();
    while(cin.get() != '\n');
    while (g == 1)
    {
        int mask, count = 2;
        cout << "enter a number to get a binary representation in memory of the \"float\" type" << endl;
        cin >> value_2_1 ;
        mask = 1 << (sizeof(float) * 8 - 1);
        if (cin)
        {
            for (int i = 0; i < sizeof(float) * 8; i++)
            {
                if (i == 1 || i % 8 == 0 && i != 0)
                {
                    putchar(' ');
                }
                putchar(value_2 & mask ? '1' : '0');
                mask = 1 << (sizeof(float) * 8 - count);
                count++;
            }
            cout << endl;
        }
        else
        {
            g = false;
        }
    }
    union
    {
        double value_3_1;
        int value_3[2] ;
    };
    g = true;
    cin.clear();
    while(cin.get() != '\n');
    while (g == 1)
    {
        int  count = 2;
        int  mask ;
        cout << "enter a number to get a binary representation in memory of the \"double\" type" << endl;
        cin >> value_3_1 ;
        mask = 1 << (sizeof(int) * 8 - 1);
        if (cin)
        {
            for (int j = 1; j >= 0 ; j--)
            {
                for (int i = 0; i < sizeof(float) * 8; i++)
                {
                    if ((i == 1 && j == 1) || i % 8 == 0 && i != 0)
                    {
                        putchar(' ');
                    }
                    putchar(value_3[j] & mask ? '1' : '0');
                    mask = 1 << (sizeof(float) * 16 - count);
                    count++;
                }
                cout << ' ';
            }
            cout << endl;
        }
        else
            {
                g = false;
            }
    }
    return 0;
    }


// mask 1 0000000 00000000 00000000 00000000/00000000 00000000 00000000 00000000
// chis 0 0000000 00000000 00000000 10000000/00000000 00000000 00000000 00000000