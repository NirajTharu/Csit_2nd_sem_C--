#include <iostream>
using namespace std;
class TriangularPattern 
{
    public:
    TriangularPattern(int rows) : rows_(rows) {}

    void print() {
        for (int i = 1; i <= rows_; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout<<endl;
        }
    }

private:
    int rows_;
};

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    TriangularPattern pattern(rows);
    pattern.print();

    return 0;
}
