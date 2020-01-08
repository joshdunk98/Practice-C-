#include <iostream>
#include <string>
using namespace std;

int add(int x, int y){
    return (x+y);
}

int subtract(int x, int y){
    return (x-y);
}


int main(){
    bool check = true;

    while(check){
        cout << "Would you like to add(1), subtract(2), or exit(3)?\n";
        string line;
        getline(cin, line);
        cout << "\n";
        if(line == "1"){
            cout << "Adding 1 plus 2: ";
            cout << add(1,2);
            cout << "\n";
        }else if(line == "2"){
            cout << "Subtracting 2 minus 1: ";
            cout << subtract(2,1);
            cout << "\n";
        }else{ break;}
    }

    return 0;
}
