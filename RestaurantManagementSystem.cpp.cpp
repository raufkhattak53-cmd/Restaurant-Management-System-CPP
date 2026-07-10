#include <iostream>
#include <string>

using namespace std;

//======================== ABSTRACT CLASS ========================

class Person
{
protected:
    string name;
    int age;

public:
    Person()
    {
        name = "";
        age = 0;
    }

    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    // Abstraction
    virtual void displayInfo() = 0;
};

//======================== EMPLOYEE CLASS ========================

class Employee : public Person
{
protected:
    int employeeID;
    double salary;

public:
    Employee()
    {
        employeeID = 0;
        salary = 0;
    }

    Employee(string n, int a, int id, double s)
        : Person(n, a)
    {
        employeeID = id;
        salary = s;
    }

    void displayInfo()
    {
        cout << "\nEmployee Information";
        cout << "\n-----------------------";
        cout << "\nName : " << name;
        cout << "\nAge : " << age;
        cout << "\nEmployee ID : " << employeeID;
        cout << "\nSalary : Rs. " << salary << endl;
    }
};

//======================== MANAGER CLASS ========================

class Manager : public Employee
{
private:
    string department;

public:
    Manager()
    {
        department = "";
    }

    Manager(string n, int a, int id, double s, string d)
        : Employee(n, a, id, s)
    {
        department = d;
    }

    // Polymorphism
    void displayInfo()
    {
        cout << "\nManager Information";
        cout << "\n-----------------------";
        cout << "\nName : " << name;
        cout << "\nAge : " << age;
        cout << "\nEmployee ID : " << employeeID;
        cout << "\nDepartment : " << department;
        cout << "\nSalary : Rs. " << salary << endl;
    }
};

//======================== MENU CLASS ========================

class Menu
{
private:
    string itemName[10];
    double itemPrice[10];

public:
    Menu()
    {
        itemName[0] = "Chicken Biryani";
        itemPrice[0] = 350;

        itemName[1] = "Chicken Karahi";
        itemPrice[1] = 900;

        itemName[2] = "Seekh Kabab";
        itemPrice[2] = 450;

        itemName[3] = "Chicken Tikka";
        itemPrice[3] = 500;

        itemName[4] = "Garlic Naan";
        itemPrice[4] = 60;

        itemName[5] = "Raita";
        itemPrice[5] = 80;

        itemName[6] = "Lassi";
        itemPrice[6] = 150;

        itemName[7] = "Cold Drink";
        itemPrice[7] = 120;

        itemName[8] = "Kheer";
        itemPrice[8] = 140;

        itemName[9] = "Gulab Jamun";
        itemPrice[9] = 100;
    }

    void displayMenu()
    {
        cout << "\n========== RESTAURANT MENU ==========\n";

        for (int i = 0; i < 10; i++)
        {
            cout << i + 1 << ". "
                 << itemName[i]
                 << "  Rs." << itemPrice[i] << endl;
        }
    }

    string getItemName(int index)
    {
        return itemName[index];
    }

    double getItemPrice(int index)
    {
        return itemPrice[index];
    }
};

//======================== ORDER CLASS ========================

class Order
{
private:
    string customerName;
    int choice;
    int quantity;
    double totalBill;

public:
    Order()
    {
        customerName = "";
        choice = 0;
        quantity = 0;
        totalBill = 0;
    }

    void takeOrder(Menu menu)
    {
        cout << "\nEnter Customer Name : ";
        cin.ignore();
        getline(cin, customerName);

        menu.displayMenu();

        cout << "\nEnter Item Number : ";
        cin >> choice;

        cout << "Enter Quantity : ";
        cin >> quantity;

        totalBill = menu.getItemPrice(choice - 1) * quantity;

        cout << "\nOrder Placed Successfully.\n";
    }

    void generateBill(Menu menu)
    {
        cout << "\n=========== BILL ===========";

        cout << "\nCustomer : " << customerName;
        cout << "\nItem : " << menu.getItemName(choice - 1);
        cout << "\nQuantity : " << quantity;
        cout << "\nTotal Bill : Rs. " << totalBill;

        cout << "\n=============================\n";
    }
};
//======================== RESTAURANT CLASS ========================

class Restaurant
{
private:
    string restaurantName;
    string location;
    Menu menu;

public:
    Restaurant()
    {
        restaurantName = "Lahori Dhabba";
        location = "Lahore";
    }

    void showRestaurantInfo()
    {
        cout << "\n====================================";
        cout << "\n      " << restaurantName;
        cout << "\nLocation : " << location;
        cout << "\n====================================\n";
    }

    void showMenu()
    {
        menu.displayMenu();
    }

    Menu getMenu()
    {
        return menu;
    }
};

//======================== MAIN FUNCTION ========================

int main()
{
    Restaurant restaurant;
    Menu menu;
    Order order;

    Employee employee("Ali Hassan", 30, 101, 45000);
    Manager manager("Sara Malik", 40, 201, 75000, "Operations");

    int choice;

    do
    {
        cout << "\n====================================";
        cout << "\n RESTAURANT MANAGEMENT SYSTEM";
        cout << "\n====================================";
        cout << "\n1. Restaurant Information";
        cout << "\n2. Display Menu";
        cout << "\n3. Place Order";
        cout << "\n4. Generate Bill";
        cout << "\n5. Employee Information";
        cout << "\n6. Manager Information";
        cout << "\n7. Exit";
        cout << "\n====================================";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            restaurant.showRestaurantInfo();
            break;

        case 2:
            restaurant.showMenu();
            break;

        case 3:
            order.takeOrder(menu);
            break;

        case 4:
            order.generateBill(menu);
            break;

        case 5:
            employee.displayInfo();
            break;

        case 6:
            manager.displayInfo();
            break;

        case 7:
            cout << "\nThank you for using the Restaurant Management System.\n";
            break;

        default:
            cout << "\nInvalid Choice! Please try again.\n";
        }

    } while(choice != 7);

    return 0;
}
