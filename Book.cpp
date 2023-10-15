#include "libraries.h"
#include "Book.h"


Book::Book(const std::string& title, const std::string& author): authorName(author), title(title){} 
const void Book::printDescription()const{
    std::cout<<"Title: "<< title <<std::endl;
    std::cout<< "Author: "<< authorName << std::endl;
}

const std::string& Book::getTitle()const{
    return title;
}

void Book::setTitle(const std::string& newTitle){
    title=newTitle;
}
const std::string& Book::getAuthor() const{
    return authorName;
}

void Book::setAuthor(const std::string& newAuthor){
    authorName= newAuthor;
}

AudioBook::AudioBook(const std::string& title, const std::string& author, const std::string& voiceActor): Book(title,author),voiceActor(voiceActor){

}

void AudioBook::printDescription() const{
    Book::printDescription();
    std::cout<<"Narrator: "<<voiceActor<<std::endl;
}

const std::string& AudioBook::getNarrator(){
    return voiceActor;
}

void AudioBook::setNarrator(const std::string& newNarrator){
    voiceActor=newNarrator;
}
BookShop::BookShop(int maxBooks):maxBooks(maxBooks){
    bookCollection=new Book*[maxBooks];
}
BookShop::~BookShop(){
    for(int i=0; i< noOfBooksAdded; i++){
        delete bookCollection;
    }


}

void BookShop::addBook(const Book& book){

}

void BookShop::addBook(const AudioBook& audioBook){
    
}
void BookShop::displayBooks()const{
    
}