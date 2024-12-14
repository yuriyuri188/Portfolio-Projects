#ifndef PORT_H
#define PORT_H

#include "generic-field.h"

class Port : public GenericField {
private:
    int min_value;
    int max_value;
    String pattern;

public:
    Port(String pattern);
    ~Port();
    bool set_value(String val);
    bool match(String value);
};

#endif
