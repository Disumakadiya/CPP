#include <iostream>
#include <string>
using namespace std;

class Gadget//base class
{
private:
    string serialNumber;
    string secretFeature;

protected:
    string modelName;

public:
    Gadget(string model, string serial, string secret) : modelName(model), serialNumber(serial), secretFeature(secret) {}

    void showBasicInfo()
    {
        cout << "Model: " << modelName << endl;
    }

    friend class Engineer;
};

class Smartphone : public Gadget 
{
private:
    string OS;

public:
    Smartphone(string model, string serial, string secret, string os)
        : Gadget(model, serial, secret), OS(os) {}

    void showSmartphoneDetails()
    {
        showBasicInfo();
        cout << "Operating System: " << OS << endl;
    }
};

class Engineer 
{
public:
    void hackGadget(Gadget& g) 
    {
        cout << "\n[👨 ENGINEER MODE ACTIVATED ]" << endl;
        cout << "Accessing secret internal data..." << endl;
        cout << "Serial Number: " << g.serialNumber << endl;
        cout << "Secret Feature: " << g.secretFeature << endl;
    }
};

int main() 
{
    Smartphone phone("ZetaPhone X", "ZX-998877", "Self-destruct mode", "NeonOS");
    phone.showSmartphoneDetails();

    Engineer e;
    e.hackGadget(phone);

    return 0;
}
