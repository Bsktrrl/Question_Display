#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <algorithm>
#include <random>
#include <conio.h>
#include <vector>
#include <thread>
#include <fstream> //File handler
#include <time.h>
#include <chrono>
#include <mutex>

#pragma region Namespace
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setw;
using std::vector;
using std::ios;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::streampos;
using std::ostream;
using std::thread;
using std::mutex;

using std::shuffle;

using std::random_device;
using std::mt19937_64;
using std::uniform_int_distribution;
#pragma endregion