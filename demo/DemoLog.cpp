//============================================================================
// Name        : DemoLog.cpp
// Author      : chuanjiang.zh@qq.com
// Version     :
// Copyright   : all right reserved.
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "CLog.h"
#include <string.h>


int main(void)
{
    const char* logConfigPath = "CLog.ini"; /// ""

    CLog::startup(logConfigPath);

    if (strlen(logConfigPath) == 0)
    {
        CLog::setFileParam("log/sub/demo.log", 5, 2);

        CLog::setLogger(CLog::COUT, CLog::DATETIME);
        CLog::setLogger(CLog::FILE);
    }

    CLog::info("demo begin.\n");

    CLog::debug("%s %s\n", CLog::getShortTime(), "some ...");

    CLog::info("demo done.\n");

    std::cin.get();

    CLog::cleanup();


    return EXIT_SUCCESS;
}
