#include "pch.h"
#include <iostream>

using namespace System;
using namespace System::Diagnostics;

int main(array<System::String ^> ^args)
{
    Process::Start("hostname.exe");
    std::cout << '\n' << "Dedicated server for Gossamer. Version 0.9.22.447.\n";
    return 0;
}
