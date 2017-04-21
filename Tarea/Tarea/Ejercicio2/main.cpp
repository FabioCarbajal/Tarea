#include <iostream>

using namespace std;

int main()
{
    double far;
    for(int cel=0;cel<=300;cel+=20)
    {
        far=(cel-32)/1.8;
        cout << far << "\t.........." << cel << endl;
    }
    return 0;
}
