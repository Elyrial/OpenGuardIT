#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Function declarations
void showHelp();
void addItem(const std::string& item);
void removeItem(const std::string& item);
void listItems();

// Global variable to store items
std::vector<std::string> items;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error: No command provided.\n";
        showHelp();
        return 1;
    }

    std::string command = argv[1];

    if (command == "help") {
        showHelp();
    } else if (command == "add") {
        if (argc < 3) {
            std::cerr << "Error: No item provided to add.\n";
            return 1;
        }
        addItem(argv[2]);
    } else if (command == "remove") {
        if (argc < 3) {
            std::cerr << "Error: No item provided to remove.\n";
            return 1;
        }
        removeItem(argv[2]);
    } else if (command == "list") {
        listItems();
    } else {
        std::cerr << "Error: Unknown command '" << command << "'.\n";
        showHelp();
        return 1;
    }

    return 0;
}

void showHelp() {
    std::cout << "Usage: app [command] [arguments]\n";
    std::cout << "Commands:\n";
    std::cout << "  help           Show this help message\n";
    std::cout << "  add [item]     Add an item\n";
    std::cout << "  remove [item]  Remove an item\n";
    std::cout << "  list           List all items\n";
}

void addItem(const std::string& item) {
    items.push_back(item);
    std::cout << "Added item: " << item << "\n";
}

void removeItem(const std::string& item) {
    auto it = std::find(items.begin(), items.end(), item);
    if (it != items.end()) {
        items.erase(it);
        std::cout << "Removed item: " << item << "\n";
    } else {
        std::cerr << "Error: Item not found\n";
    }
}

void listItems() {
    if (items.empty()) {
        std::cout << "No items to list.\n";
    } else {
        std::cout << "Items:\n";
        for (const auto& item : items) {
            std::cout << "  " << item << "\n";
        }
    }
}

