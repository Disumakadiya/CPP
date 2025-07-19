#include <iostream>
#include <string>
#include <exception>
using namespace std;

void lowlevelfunction()
{
    try
    {
        throw runtime_error("an error occured in low level function");
    }
    catch (const runtime_error &e)
    {
        cout << "low level function caught exception:" << e.what() << endl;
        cout << "logging the error..." << endl;
        throw; // rethrow the exception
    }
}

void highlevelfunction()
{
    try
    {
        lowlevelfunction();
    }
    catch (const runtime_error &e)
    {
        cout << "high level function caught exception" << e.what() << endl;
        cout << "taking corrective action.." << endl;
        throw;
    }
}

int main()
{
    try
    {
        highlevelfunction();
    }
    catch (const exception &e)
    {
        cout << "main caught exception" << e.what() << endl;
    }

    catch (...)
    {
        cout << "main function caught an unknown exception" << endl;
    }

    return 0;
}