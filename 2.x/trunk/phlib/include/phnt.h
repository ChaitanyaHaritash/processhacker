#ifndef PHNT_H
#define PHNT_H

// This header file provides access to NT APIs.

#define PHNT_WIN2K 50
#define PHNT_WINXP 51
#define PHNT_WS03 52
#define PHNT_VISTA 60
#define PHNT_WIN7 61

#ifndef PHNT_VERSION
#define PHNT_VERSION PHNT_WINXP
#endif

// Note: definitions marked with an asterisk have been 
// reverse-engineered.

#include <ntbasic.h>
#include <ntcm.h>
#include <ntdbg.h>
#include <ntexapi.h>
#include <ntioapi.h>
#include <ntkeapi.h>
#include <ntktmapi.h>
#include <ntlpcapi.h>
#include <ntmmapi.h>
#include <ntobapi.h>
#include <ntpnpapi.h>
#include <ntpoapi.h>
#include <ntpsapi.h>
#include <ntregapi.h>
#include <ntrtl.h>
#include <ntseapi.h>
#include <ntxcapi.h>

#include <ntlsa.h>
#include <ntmisc.h>

#include <rev.h>

#endif