#ifndef MODULE_H
#define MODULE_H

#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <msclr\marshal.h>
#include <msclr\marshal_cppstd.h>

using namespace std;
using namespace System;
using namespace msclr::interop;

void sum();
int SaveToFile(bool vip, String^ NamePerStr);
void giveSound();

#endif