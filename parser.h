#pragma once
#include "stdint.h"

// When true, suppress QU transfer logs with amount=0 to ZERO_IDENTITY.
extern bool gSuppressZeroQuTransfers;

unsigned long long printQubicLog(uint8_t* logBuffer, int bufferSize, uint64_t fromId, uint64_t toId);