#pragma once

enum E_BookGenre {
	E_BookGenreDrama,
	E_BookGenreComedy
};

class BookProduct : Product {
private:
	E_BookGenre m_genre;
	std::string m_author;
	std::string m_title;
public:
	virtual E_ProductType getType();
};