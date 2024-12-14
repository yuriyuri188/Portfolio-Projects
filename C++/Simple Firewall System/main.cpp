#include <iostream>
#include "input.h"
#include "ip.h"
#include "port.h"

// Helper Functions
PatternIndex getPatternIndex(const String& pattern) { ... }
void processRule(const String& rule) { ... }

// Main Function
int main(int argc, char** argv) {
    if (check_args(argc, argv) != 0) {
        return EXIT_ERROR;
    }
    String rule(argv[RULE_ARGV_INDEX]);
    processRule(rule);
    return 0;
}
