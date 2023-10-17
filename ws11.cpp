#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept> // Include for std::runtime_error
using namespace std;

// Vector of int, used to store the records
typedef vector<int> Records;

class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}

    void read(Records &records) {
        try {
            _file.open(_filename, ios::in);
            if (!_file.is_open()) {
                throw runtime_error("Failed to open the file: " + _filename);
            }

            string line;
            while (std::getline(_file, line)) {
                try {
                    int record = stoi(line);
                    records.push_back(record);
                } catch (invalid_argument &e) {
                    throw runtime_error("Wrong argument when reading the file: " + _filename);
                } catch (out_of_range &e) {
                    throw runtime_error("Out of range when reading the file: " + _filename);
                }
            }

            _file.close();
        } catch (runtime_error &e) {
            _file.close();
            throw;
        }
    }
};

int main() {
    RecordsManager recordM("test_clean.txt");
    // RecordsManager recordM("test_corrupt1.txt");
    // RecordsManager recordM("test_corrupt2.txt");
    Records myRecords;

    try {
        recordM.read(myRecords);
        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }
        cout << sum << endl;
    } catch (runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
