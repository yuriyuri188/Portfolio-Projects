#ifndef IP_H
#define IP_H

#include "generic-field.h"

class Ip : public GenericField {
private:
    unsigned int ip;
    unsigned int subnet;
    unsigned int network_prefix;
    String pattern;

public:
    Ip(String pattern);
    ~Ip();
    bool set_value(String val);
    bool match(String value);
};

#endif
