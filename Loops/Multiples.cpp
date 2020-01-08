#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double multiple_of_sixteen = 16;

    for(unsigned int i = 1; i <= 100; i++){
        if(i == 100){
            cout << (multiple_of_sixteen * i) << endl;
            break;
        }
        cout << (multiple_of_sixteen * i) << ", ";
    }

    return 0;
}