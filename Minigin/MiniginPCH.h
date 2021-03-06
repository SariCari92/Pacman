#pragma once

#include "targetver.h"

#include <stdio.h>
#include <iostream> // std::cout
#include <sstream> // stringstream
#include <tchar.h>
#include <memory> // smart pointers
#include <vector>


#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "Log.h" // Various logging functions
#pragma warning(disable : 4201)
#pragma warning(disable : 4100) // Don't show Unreferenced Parameter Error