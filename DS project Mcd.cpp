#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct McDonaldsDeal {
    string name;
    string description;
    double price;
};

void printDeal(const McDonaldsDeal& deal) {
    cout << deal.name << ": " << deal.description << " - Rs." << fixed << setprecision(2) << deal.price << endl;
}

int main() {
    // Define the McDonald's deals in rupees
    McDonaldsDeal deals[5] = {
        {"Deal 1", "Big Mac Meal", 2200.00},
        {"Deal 2", "Chicken McNuggets Meal", 1700.00},
        {"Deal 3", "Quarter Pounder Meal", 1450.00},
        {"Deal 4", "Filet-O-Fish Meal", 1100.00},
        {"Deal 5", "2 hot chocolate sundaes", 980.00}
    };

    // Print the deals
    cout << "Welcome to McDonald's!\n";
    cout << "Here are today's deals:\n";
    for (int i = 0; i < 5; ++i) {
        printDeal(deals[i]);
    }

    // Order system
    int choice;
    cout << "Enter the number of the deal you want to order (1-5): ";
    cin >> choice;

    if (choice >= 1 && choice <= 5) {
        McDonaldsDeal selectedDeal = deals[choice - 1];
        int quantity;
        cout << "How many " << selectedDeal.name << " would you like to order? ";
        cin >> quantity;

        if (quantity > 0) {
            double total = selectedDeal.price * quantity;
            cout << "You ordered " << quantity << " " << selectedDeal.name << " for a total of Rs." << total << endl;
            cout << "Thank you for visiting McDonald's! Have a great day!\n"; // Thank you message
        } else {
            cout << "Invalid quantity.\n";
        }
    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}

