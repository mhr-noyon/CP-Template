#include <iostream>
#include <string>
#include <ctime>

template <typename T>
class HeaderComment {
private:
    std::string author;
    std::string created;

public:
    HeaderComment(const std::string& author) : author(author) {
        // Get current time
        std::time_t now = std::time(0);
        char* timeString = std::ctime(&now);
        created = std::string(timeString);
    }

    void print() {
        std::cout << "/**\n";
        std::cout << " *    author:  " << author << "\n";
        std::cout << " *    created: " << created;
        std::cout << "**/\n";
    }
};

int main() {
    HeaderComment<int> comment("tourist");
    comment.print();
    return 0;
}
