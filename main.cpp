#include <iostream>
#include <string.h>
using namespace std;
class Book {
    string name;
    double price;
public:
    Book()
    {
        price = name[0] = 0;
    }
    void set(char nam[],double pr)
    {
        name = nam;
        price = pr;
    }
    Book(char nam[],double pr)
    {
        name = nam;
        price = pr;
    }
    double getDollPrice(double dollar)
    {
        return price/dollar ;
    }
    void print()
    {
        cout << "\nName of the book: " << name << "  price in rubles: " << price;
    }
};

int main()
{
    int n;
    cout << "How many books: ";
    cin >> n;
    cout << endl;

    double dollar;
    cout << "Kurs dollara: ";
    cin >> dollar;
    cout << endl;

    double SumPrice = 0;
    char S[64];
    double p = 0;

    Book **ppA= new Book*[n];
    for (unsigned int i = 0; i< n; ++i)
    {
        cout << "Name of the book: ";
        cin >> S;
        cout << "Price: ";
        cin >> p;
        ppA[i] = new Book(S, p);
    }
    for (unsigned int i = 0; i< n; ++i) ppA[i]->print();
    for (unsigned int i = 0; i< n; ++i) SumPrice += ppA[i]->getDollPrice(dollar);
    cout << "\nSummary price in dollar: " << SumPrice << endl;
    for (unsigned int i = 0; i< n; ++i) delete[]ppA[i];


    return 0;
}
