#include "libraries.h"

class Book{
    private:
        std::string title;
        std::string authorName;

    public:
        Book(const std::string& title, const std::string& author);
        
        const void printDescription() const;
        const std::string& getTitle() const;
        void setTitle(const std::string& newTitle);
        const std::string& getAuthor() const;
        void setAuthor (const std::string& newAuthor);



};
class AudioBook : public Book{
    private:
        std::string voiceActor;
    
    public:
        AudioBook(const std::string& title, const std::string& author, const std::string& voiceActor);
        void printDescription() const;
        const  std::string& getNarrator();
        void setNarrator(const std::string& newNarrator);
};

class BookShop{
    private:
        int maxBooks;
        Book** bookCollection;
        int noOfBooksAdded =0;

    public:
        BookShop(int maxBooks);
        ~BookShop();

        void addBook(const Book& book);
        void addBook(const AudioBook& audioBook);
        void displayBooks() const;
        



};