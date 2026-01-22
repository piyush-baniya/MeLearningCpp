#pragma once // prevents duplication of #include "same header file". It's a preprocessor statement

// #ifndef _LOG_H // older way of doing #pragma once
// #define _LOG_H

void Log(const char *message);
void InitLog();

// #endif