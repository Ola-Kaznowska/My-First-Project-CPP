#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main (){

    srand(time(NULL));
    cout << rand()%49 + 1 << endl; 

    return 0;
}