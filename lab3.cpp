#include <iostream>
#include <string>

using namespace std; 

class Gene {
private:
    const string organism;  
// const μέλος – απαιτείται αρχικοποίηση μέσω λίστας αρχικοποίησης

    string id;
    string name;
    string chrom;
    int start;
    int end;
    char strand;

public:
    // Default constructor με λίστα αρχικοποίησης
    Gene()
        : organism("Unknown"), id("NA"), name("NA"), chrom("NA"),
          start(0), end(0), strand('+') {
        cout << "[Constructor] Gene created (default)" << endl;
    }

    // Constructor με τιμές
    Gene(string i, string n, string ch, int s, int e, char str, string org)
        : organism(org), id(i), name(n), chrom(ch),
          start(s), end(e), strand(str) {
        cout << "[Constructor] Gene " << name << " from " << organism << " created." << endl;
    }

    // Destructor
    ~Gene() {
        cout << "[Destructor] Gene " << name << " destroyed." << endl;
    }

    // Περιγραφή
    void describe() const {
        cout << "Gene " << id << " (" << name << ") on "
             << chrom << ":" << start << "-" << end
             << " (" << strand << " strand) [" << organism << "]" << endl;
    }

    // Getter για οργανισμό (const member)
    const string& getOrganism() const {
        return organism;
    }
};

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
    Sequence()
        : type("Unknown"), data("Unknown") {
            cout << "Sequence created" << endl;
        }
    

};

int main() {

    cout << "-- Creating Sequence and isoforms --" << endl;

    Gene g1("");

    Isoform i1("");
    Isoform i2("");


    g1.addIsoform(i1);
    g1.addIsoform(i2);

    cout << endl;
    g1.describe();

    cout << "\n --- End of main ---" << endl;
    return 0;
}