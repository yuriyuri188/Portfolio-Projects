#include "ip.h"

const char* COMMA = ",";
const char* EQUAL = "=";
const char* EMPTY_STR_I = "";
const int SIZE_OF_FIELD_ITEM = 2;
const int FIELD_INDEX = 0;
const int DATA_INDEX_P = 1;
const int CARE_INDEX = 1;
const int DATA_INDEX = 0;
const size_t NUMBER_OF_VARIABLES_FROM_DATA = 2;
const size_t NUMBER_OF_EXPECTED_BYTES_FROM_DATA = 4;
const int ERROR = -1;
const int SIZE_OF_BYTE_IN_BITS = 8;
const int SIZE_OF_IP_WORD_IN_BITS = 32;
const char* SLASH = "/";
const char* DOT = ".";

// Helper Functions and Class Implementation
String** packet_field_extractor(const String& packet, size_t *size_of_rows) { ... }
unsigned int subnet_mask_generator(int subnet_num_bits) { ... }
int ip_from_String(const String& ip_string) { ... }

// Class Member Definitions
Ip::Ip(String pattern) : ip(0), subnet(0), network_prefix(0), pattern(pattern) {}
Ip::~Ip() {}

bool Ip::set_value(String val) { ... }
bool Ip::match(String value) { ... }
