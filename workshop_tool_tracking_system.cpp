#include <iostream>
#include <cstring>
using namespace std;

class Tool 
{
protected:
    int tool_ID;
    char toolName[50];
    bool isAvailable;

public:
    Tool(int id = 0, const char* name = "") {
        toolID = id;
        strncpy(toolName, name, 49);
        toolName[49] = '\0';
        isAvailable = true;
    }

    void issueTool() {
        if (isAvailable) {
            isAvailable = false;
            cout << toolName << " has been issued.\n";
        } else {
            cout << toolName << " is already issued.\n";
        }
    }

    void returnTool() {
        isAvailable = true;
        cout << toolName << " has been returned.\n";
    }

    bool checkAvailability() const {
        return isAvailable;
    }

    int getToolID() const {
        return toolID;
    }

    const char* getToolName() const {
        return toolName;
    }

    virtual void displayToolInfo() const = 0; // Abstraction + Polymorphism
};

// Derived Class 1
class PowerTool : public Tool {
private:
    int batteryLife; // in hours

public:
    PowerTool(int id = 0, const char* name = "", int battery = 0)
        : Tool(id, name), batteryLife(battery) {}

    void displayToolInfo() const override {
        cout << "Power Tool - ID: " << toolID
             << ", Name: " << toolName
             << ", Battery Life: " << batteryLife << " hrs"
             << ", Available: " << (isAvailable ? "Yes" : "No") << endl;
    }
};

// Derived Class 2
class HandTool : public Tool {
private:
    float weight; // in kg

public:
    HandTool(int id = 0, const char* name = "", float w = 0.0)
        : Tool(id, name), weight(w) {}

    void displayToolInfo() const override {
        cout << "Hand Tool - ID: " << toolID
             << ", Name: " << toolName
             << ", Weight: " << weight << " kg"
             << ", Available: " << (isAvailable ? "Yes" : "No") << endl;
    }
};

// Tool inventory manager
class ToolInventory {
private:
    Tool* tools[20];
    int count;

public:
    ToolInventory() {
        count = 0;
        for (int i = 0; i < 20; ++i)
            tools[i] = nullptr;
    }

    void addTool(Tool* t) {
        if (count < 20) {
            tools[count++] = t;
        } else {
            cout << "Inventory full!\n";
        }
    }

    void displayAllTools() const {
        for (int i = 0; i < count; ++i) {
            tools[i]->displayToolInfo();
        }
    }

    void issueToolByID(int id) {
        for (int i = 0; i < count; ++i) {
            if (tools[i]->getToolID() == id) {
                tools[i]->issueTool();
                return;
            }
        }
        cout << "Tool not found!\n";
    }

    void returnToolByID(int id) {
        for (int i = 0; i < count; ++i) {
            if (tools[i]->getToolID() == id) {
                tools[i]->returnTool();
                return;
            }
        }
        cout << "Tool not found!\n";
    }

    ~ToolInventory() {
        for (int i = 0; i < count; ++i) {
            delete tools[i];
        }
    }
};

// Main Function
int main() {
    ToolInventory inventory;

    inventory.addTool(new PowerTool(101, "Drill Machine", 4));
    inventory.addTool(new HandTool(102, "Hammer", 2.5));
    inventory.addTool(new PowerTool(103, "Electric Saw", 3));
    inventory.addTool(new HandTool(104, "Screwdriver", 0.5));

    cout << "---- All Tools ----\n";
    inventory.displayAllTools();

    cout << "\n---- Issuing Tool ID 101 ----\n";
    inventory.issueToolByID(101);

    cout << "\n---- Issuing Tool ID 101 Again ----\n";
    inventory.issueToolByID(101);

    cout << "\n---- Returning Tool ID 101 ----\n";
    inventory.returnToolByID(101);

    cout << "\n---- Final Tool Status ----\n";
    inventory.displayAllTools();

    return 0;
}


---

Would you like a diagram (UML or class structure) to better visualize this system?

