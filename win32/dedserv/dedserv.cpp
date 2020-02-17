#include "sysreq.h"
#include <iostream>

int main () {
    Process::Start("hostname.exe");
    std::cout << '\n' << "Dedicated server for Gossamer. Version 0.9.22.447.\n";
    return 0;
}
