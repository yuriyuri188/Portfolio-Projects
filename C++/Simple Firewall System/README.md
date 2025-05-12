# Packet Filtering Firewall

This project implements a simple yet modular packet filtering firewall in C++. It filters network packets based on user-defined rules for source and destination IP addresses and ports.

## Features

- ✅ IP and port-based filtering
- ✅ Modular C++ design using shared libraries
- ✅ Clean and reusable `Ip`, `Port`, and `String` utility classes
- ✅ Command-line processing via `firewall.sh` shell wrapper
- ✅ Automated build system using `makefile`

## Components

### 📁 Source Files

- `main.cpp`  
  Orchestrates the rule processing and packet filtering logic.

- `Ip.cpp`, `Ip.h`  
  Implements IP rule matching and validation.

- `Port.cpp`, `Port.h`  
  Handles port range parsing and matching.

- `String.cpp`, `String.h`  
  Utility functions for string splitting, trimming, and parsing.

### 🧰 Build System

- `makefile`  
  Automates compilation and linking of all components. Generates shared libraries and the final `firewall` executable.

### 🔧 Script

- `firewall.sh`  
  Bash script that wraps the executable to:
  - Preprocess input
  - Invoke the compiled program
  - Format the output

## Usage

1. **Build the project:**

   ```bash
   make
