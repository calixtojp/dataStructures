#include <iostream>
#include <vector>

using namespace std;

int main(void){
    /*Initially, the vector has a capacity and size equal to 5.*/
    vector <int> example(5, 10);
    for(int i = 0; i < 5; ++i){
        example[i] = i*10;
    }
    cout << "inicial size: " << example.size() << endl;
    cout << "inicial capacity: " << example.capacity() << endl;

    /*When I add an element with a value of 42, the capacity doubles
    and becomes 10, while the size becomes 6.*/
    example.push_back(42);

    cout << "new size: " << example.size() << endl;
    cout << "new capacity: " << example.capacity() << endl;

    for(int i = 0; i < example.size(); ++i){
        cout << "i=" << i << ": " << example[i] << endl;
    }
}