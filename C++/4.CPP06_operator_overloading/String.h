#ifndef STRING_H
#define STRING_H

namespace ca {
    class String {
    private:
        char* str;
        void copy(const String& other);

    public:

        typedef size_t size_type;

        size_type size() const;

        String();
        String(const char* s);
        String& operator=(const String& other);
        String(const String& other);
        ~String();

        const char* c_str() const;
        char& operator[](int c);

        String operator+(const String& other) const;
        String& operator+=(const String& other);
     
        bool operator==(const String& other) const;
        bool operator!=(const String& other) const;
        bool operator>(const String& other) const;
        bool operator>=(const String& other) const;
        bool operator<(const String& other) const;
        bool operator<=(const String& other) const;
    };
}

#endif