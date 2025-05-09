#include <iostream>
#include <cstring>
using namespace std;
class Tool
 {
protected:
    int tool_ID;
    char tool_Name[50];
    bool is_Available;

public:
    Tool(int id = 0, const char* name = "")
    {
        tool_ID = id;
        strncpy(tool_Name, name, 49);
        tool_Name[49] = '\0';
        is_Available = true;
    }

    void issueTool()
    {
        if (is_Available)
        {
            is_Available = false;
            cout << tool_Name << " has been issued.\n";
        }
         else 
        {
            cout << tool_Name << " is already issued.\n";
        }
    }

    void returnTool()
    {
        is_Available = true;
        cout << tool_Name << " has been returned.\n";
    }

    bool checkAvailability() const 
    {
        return is_Available;
    }

    int getToolID() const 
    {
        return tool_ID;
    }

    const char* getToolName() const
    {
        return tool_Name;
    }

    virtual void displayToolInfo() const = 0; // pure virtual function
};

class PowerTool : public Tool
{
private:
    int batteryLife; // hrs

public:
    PowerTool(int id = 0, const char* name = "", int battery = 0):Tool(id, name), batteryLife(battery) {}

    void displayToolInfo() const override
    {
        cout << "Power Tool - ID: " << tool_ID
             << ", Name: " << tool_Name
             << ", Battery Life: " << batteryLife << " hrs"
             << ", Available: " << (is_Available ? "Yes" : "No") << endl;
    }
};


class HandTool : public Tool
{
private:
    float weight; // in kg

public:
    HandTool(int id = 0, const char* name = "", float w = 0.0):Tool(id, name), weight(w) {}

    void displayToolInfo() const override 
    {
        cout << "Hand Tool - ID: " << tool_ID
             << ", Name: " << tool_Name
             << ", Weight: " << weight <<" kg"
             << ", Available: " << (is_Available ? "Yes" : "No") << endl;
    }
};

// Tool inventory manager
class ToolInventory 
{
private:
    Tool* tools[20];
    int count;

public:
    ToolInventory() 
    {
        count = 0;
        for (int i = 0; i < 20; ++i)
            tools[i] = nullptr;
    }

    void addTool(Tool* t)
    {
        if (count < 20)
        {
            tools[count++] = t;
        }
         else 
        {
            cout << "Inventory full!\n";
        }
    }

    void displayAllTools() const
    {
        for (int i = 0; i < count; ++i)
        {
            tools[i]->displayToolInfo();
        }
    }

    void issueToolByID(int id) 
    {
        for (int i = 0; i < count; ++i)
        {
            if (tools[i]->getToolID() == id)
            {
                tools[i]->issueTool();
                return;
            }
        }
        cout << "Tool not found!"<<endl;
    }

    void returnToolByID(int id) 
    {
        for (int i = 0; i < count; ++i) 
        {
            if (tools[i]->getToolID() == id) 
            {
                tools[i]->returnTool();
                return;
            }
        }
        cout << "Tool not found!\n";
    }

    ~ToolInventory()
    {
        for (int i = 0; i < count; ++i) 
        {
            delete tools[i];
        }
    }
};

// Main Function
int main()
 {
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
