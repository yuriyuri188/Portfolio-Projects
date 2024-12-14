#include "port.h"

// Constants and Helper Functions
String** packet_field_extractor_port(const String& packet, size_t *size_of_rows) { ... }

// Class Member Definitions
Port::Port(String pattern) : min_value(0), max_value(0), pattern(pattern) {}
Port::~Port() {}

bool Port::set_value(String val) { ... }
bool Port::match(String value) { ... }
