// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H

// TODO: add headers that you want to pre-compile here
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <condition_variable>
#include <mutex>
#include <atomic>
#include <iostream>
#include <queue>
#include <sstream>
#include <winsock2.h>
#include <windows.h> 
#include <openssl/sha.h>
#include <openssl/md5.h>
#include <iomanip>
#include <memory>

#include "HashAlgorithm.h"
#include "MD5Algorithm.h"
#include "SHA1Algorithm.h"
#include "SHA256Algorithm.h"
#include "Cracker.h"

#endif //PCH_H
