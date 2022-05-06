#include<iostream>
#include<cstring>
using namespace std;

//Example take from https://www.geeksforgeeks.org/copy-constructor-in-cpp/

class String
{
private:
    char *s;
    int size;
public:
    String(const char *str = NULL); // constructor
    ~String() { delete [] s;  }// destructor
    String(const String&); // copy constructor
    void print() { cout << s << endl; } // Function to print string
    void change(const char *);  // Function to change
};

String::String(const char *str)
{
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}

void String::change(const char *str)
{
    delete [] s;
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}

String::String(const String& old_str)
{
    size = old_str.size;
    s = new char[size+1];
    strcpy(s, old_str.s);
}

int main()
{
    String str1("C++ is fun");
    String str2 = str1;
    String str3;
    str3 = str1;

    str1.print(); // what is printed ?
    str2.print();
    str3.print();

    str2.change("C++ is fun if you understand what is going on");
    str3.change("I live and breath C++");

    str1.print(); // what is printed now ?
    str2.print();
    str3.print();
    return 0;
}