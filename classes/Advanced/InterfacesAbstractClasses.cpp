#include <iostream>
#include <vector>
#include <memory>

// Interface using an Abstract Class
class IPrintable {
public:
    virtual void print() const = 0; // Pure virtual function
    virtual ~IPrintable() {} // Virtual destructor
};

// Class implementing the IPrintable interface
class Document : public IPrintable {
private:
    std::string content;

public:
    Document(const std::string& text) : content(text) {}

    void print() const override {
        std::cout << "Document Content: " << content << std::endl;
    }
};

// Another class implementing the IPrintable interface
class Image : public IPrintable {
private:
    std::string filename;

public:
    Image(const std::string& file) : filename(file) {}

    void print() const override {
        std::cout << "Displaying Image: " << filename << std::endl;
    }
};

int main() {
    std::vector<std::shared_ptr<IPrintable>> printables;
    printables.push_back(std::make_shared<Document>("Hello, World!"));
    printables.push_back(std::make_shared<Image>("photo.jpg"));

    for (const auto& item : printables) {
        item->print();
    }
    // Output:
    // Document Content: Hello, World!
    // Displaying Image: photo.jpg

    return 0;
}

/*
Explanation:
- **Interface via Abstract Class:** C++ does not have a dedicated `interface` keyword, but interfaces can be implemented using abstract classes with pure virtual functions. Here, `IPrintable` serves as an interface.
- **Implementing Classes:** Both `Document` and `Image` classes implement the `IPrintable` interface by providing concrete implementations of the `print()` method.
- **Polymorphic Usage:** In `main`, a vector of `shared_ptr<IPrintable>` holds objects of different types (`Document` and `Image`). Calling `print()` on each invokes the appropriate method based on the actual object type.
- **Output:**
    Document Content: Hello, World!
    Displaying Image: photo.jpg
*/
