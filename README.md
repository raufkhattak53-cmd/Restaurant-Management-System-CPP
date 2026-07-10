# Restaurant-Management-System-CPP
A console based Restaurant Management System developed in C++ using the four pillars of Object-Oriented Programming.
# 🍽️ Restaurant Management System (C++)

A console-based **Restaurant Management System** developed in **C++** as an **Object-Oriented Programming (OOP) Semester Project**. This project demonstrates the implementation of the four fundamental pillars of OOP while simulating basic restaurant operations such as displaying menus, placing orders, generating bills, and managing employee information.

---

## 📌 Project Overview

The Restaurant Management System is designed to provide a simple simulation of restaurant operations. It allows users to:

- View restaurant information
- Display the restaurant menu
- Place customer orders
- Generate customer bills
- Display employee information
- Display manager information

The primary objective of this project is to demonstrate the practical implementation of Object-Oriented Programming concepts in C++.

---

## ✨ Features

- 🏢 Display Restaurant Information
- 🍽️ Display Food Menu
- 🛒 Place Customer Orders
- 🧾 Generate Customer Bills
- 👨‍💼 Employee Information
- 👩‍💼 Manager Information
- 📋 Menu-Driven Console Interface
- 💻 Object-Oriented Design

---

## 🛠 Technologies Used

- Language: **C++**
- Libraries:
  - `<iostream>`
  - `<string>`

---

## 🧱 Classes Used

### 1. Person (Abstract Class)
- Stores name and age
- Demonstrates **Abstraction**
- Contains a pure virtual function:
```cpp
virtual void displayInfo() = 0;
```

### 2. Employee
- Inherits from `Person`
- Stores employee ID and salary
- Demonstrates **Inheritance** and **Encapsulation**

### 3. Manager
- Inherits from `Employee`
- Stores department information
- Overrides `displayInfo()` to demonstrate **Polymorphism**

### 4. Menu
- Stores food names and prices
- Displays the restaurant menu
- Returns item names and prices

### 5. Order
- Takes customer orders
- Calculates total bill
- Generates customer bill

### 6. Restaurant
- Stores restaurant information
- Displays restaurant details
- Provides access to the menu

---

# 🎯 OOP Concepts Implemented

## ✅ Abstraction

Implemented using the abstract class `Person`.

```cpp
virtual void displayInfo() = 0;
```

---

## ✅ Encapsulation

Data members are declared as `private` or `protected` and accessed through member functions.

Example:

```cpp
private:
    string customerName;
```

---

## ✅ Inheritance

```cpp
Person
   ↑
Employee
   ↑
Manager
```

This allows code reusability and better organization.

---

## ✅ Polymorphism

The `displayInfo()` function is overridden in both `Employee` and `Manager` classes.

This allows different classes to provide their own implementation of the same function.

---

# ▶️ Program Flow

1. Program starts.
2. Restaurant object is created.
3. Employee and Manager objects are initialized.
4. Main menu is displayed.
5. User selects an option.
6. According to the selected option, the program:
   - Displays restaurant information
   - Displays menu
   - Takes order
   - Generates bill
   - Displays employee information
   - Displays manager information
7. Program continues until the user selects **Exit**.

---

# 📋 Main Menu

```
1. Restaurant Information
2. Display Menu
3. Place Order
4. Generate Bill
5. Employee Information
6. Manager Information
7. Exit
```

---

# 📂 Project Structure

```
Restaurant-Management-System-CPP/
│
├── RestaurantManagementSystem.cpp
├── README.md
└── screenshots/
```

---

# 🚀 How to Run

### Compile

```bash
g++ RestaurantManagementSystem.cpp -o RestaurantManagementSystem
```

### Run

```bash
./RestaurantManagementSystem
```

---

# 📸 Sample Output

```
====================================
 RESTAURANT MANAGEMENT SYSTEM
====================================
1. Restaurant Information
2. Display Menu
3. Place Order
4. Generate Bill
5. Employee Information
6. Manager Information
7. Exit
====================================
```

---

# 🔮 Future Improvements

- File Handling
- Database Integration
- Login Authentication
- Admin Panel
- Inventory Management
- Multiple Orders
- Payment Methods
- Discount System
- Receipt Printing

---

# 📚 Learning Outcomes

Through this project, I learned:

- Object-Oriented Programming Concepts
- Class and Object Design
- Inheritance
- Polymorphism
- Abstraction
- Encapsulation
- Menu-Driven Programming
- Console-Based Application Development

---

# 👨‍💻 Author

**Abdur Rauf**

BS Computer Science Student

---

## ⭐ If you found this project helpful, don't forget to Star the repository!
