#include <iostream>
#include <string>

using namespace std;

int main() {
    string dataType;

    getline(cin >> ws, dataType);

    if(dataType == "int")
        cout << sizeof(int) << endl;
    
    if(dataType == "char")
        cout << sizeof(char) << endl;
    
    if(dataType == "short")
        cout << sizeof(short) << endl;
    
    if(dataType == "long")
        cout << sizeof(long) << endl;

    if(dataType == "float")
        cout << sizeof(float) << endl;

    if(dataType == "double")
        cout << sizeof(double) << endl;
    

    return 0;
}