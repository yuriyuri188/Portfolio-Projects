#include <cstring>
#include "string.h"

// Class Definitions
String::String() : data(new char[1]{EMPTY_CHAR}), length(0) {}
String::String(const String& str) : data(strcpy(new char[str.length + 1], str.data)), length(str.length) {}
String::String(const char* str) : data(strcpy(new char[strlen(str) + 1], str)), length(strlen(str)) {}
String::~String() { delete[] data; }

String& String::operator=(const String& rhs) { ... }
String& String::operator=(const char* str) { ... }
bool String::equals(const String& rhs) const { ... }
bool String::equals(const char* rhs) const { ... }
void String::split(const char *delimiters, String **output, size_t *size) const { ... }
int String::to_integer() const { return atoi(this->data); }
String String::trim() const { ... }
