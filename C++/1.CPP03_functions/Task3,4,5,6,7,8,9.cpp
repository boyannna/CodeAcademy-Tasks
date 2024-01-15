#include<iostream>
#include<string>
#include<vector>

class BookInfo {
private:
    std::string ISBN;
    std::string title;
    int editionNumber;
    std::string authors;
    std::string genres;
    int userRating;
    std::vector<std::string> collections;

public:
    BookInfo(std::string ISBN, std::string title, int editionNumber, std::string authors, std::string genres, int userRating) {
        this->ISBN = ISBN;
        this->title = title;
        this->editionNumber = editionNumber;
        this->authors = authors;
        this->genres = genres;
        this->userRating = userRating;
    }
       
    std::string getISBN() const { return ISBN; }
    std::string getTitle() const { return title; }
    int getEditionNumber() const { return editionNumber; }
    std::string getAuthors() const { return authors; }
    std::string getGenres() const { return genres; }
    int getUserRating() const { return userRating; }
    std::vector<std::string> getCollections() const { return collections; }
    
    void addCollection(std::string collectionName) { 
        collections.push_back(collectionName); 
    }

    void setUserRating(int userRating) { 
        this->userRating = userRating;
    }
};


class BookCollection {
private:
    std::vector<BookInfo> books;
    std::string collectionName;

public:
    BookCollection(std::string collectionName) {
        this->collectionName = collectionName;
    }

    void addBook(const BookInfo& book) { 
        books.push_back(book); 
    }
    
    std::vector<BookInfo> getBooks() const { return books; }

    std::string getCollectionName() const { return collectionName; }
};

class BookInfoManager {
private:
    std::vector<BookInfo> books;

public:
    void addBook(const BookInfo& book) {
        books.push_back(book);
    }

    std::vector<BookInfo> getBooks() const { return books; }
};

class BookSeriesInfoManager {
private:
    std::vector<BookCollection> bookSeries;

public:
    void addBookSeries(const BookCollection& series) {
        bookSeries.push_back(series);
    }

    std::vector<BookCollection> getBookSeries() const { return bookSeries; }
};

class BookManager {
private:
    std::vector<BookInfo> books;
    std::vector<BookCollection> bookSeries;
    int votes;
    int sumOfRatings;
    int avgRating;

public:
    BookManager() {
        votes = 0;
        sumOfRatings = 0;
        avgRating = 0;
    }

    void addBook(const BookInfo& book) {
        books.push_back(book);
        votes += book.getUserRating();
        sumOfRatings += book.getUserRating();
    }

    void addBookSeries(const BookCollection& series) {
        bookSeries.push_back(series);
    }

    std::vector<BookInfo> getBooks() const { return books; }
    std::vector<BookCollection> getBookSeries() const { return bookSeries; }

    void averageRating() {
        avgRating = sumOfRatings / votes;
    }

    int getAvgRating() const { return avgRating; }
};


int main() {
    BookManager library;

    BookInfo book1("9789542841531", "How to make good things happen to us?", 1, "Marian Rojas Estape", "Popular Psychology", 4);
    BookInfo book2("9789543994687", "Your magic", 2, "Joanna Lindsay", "Romance", 3);

    library.addBook(book1);
    library.addBook(book2);

    std::cout << "Books in library:" << std::endl;
    std::vector<BookInfo> books = library.getBooks();
    for (const BookInfo& book : books) {
        std::cout << "ISBN: " << book.getISBN() << std::endl;
        std::cout << "Title: " << book.getTitle() << std::endl;
        std::cout << "Edition Number: " << book.getEditionNumber() << std::endl;
        std::cout << "Authors: " << book.getAuthors() << std::endl;
        std::cout << "Genres: " << book.getGenres() << std::endl;
        std::cout << "User Rating: " << book.getUserRating() << std::endl;
    }

    return 0;
}
