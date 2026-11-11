#include <iostream>
#include <string>

using namespace std; 

class Sequence {

    public:

    string type;
    string data;

    void describe() {
        cout <<"The type is" << type << "and the sequence is" << data << enld;
    }

    int length() {
        return data.length(); 
    }
};

class Isoform {

    public:

    Sequence sequence;
    string

};

int main() {

    cout << "-- Creating Sequence and isoforms --" << endl;


    return 0;
}