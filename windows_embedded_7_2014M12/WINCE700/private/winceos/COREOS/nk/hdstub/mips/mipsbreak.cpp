//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft shared
// source or premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license agreement,
// you are not authorized to use this source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the SOURCE.RTF on your install media or the root of your tools installation.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//

#include "hdstub_p.h"
#include "hdbreak.h"

const BYTE BreakpointImpl::CpuBreakSize = 4;
const ULONG BreakpointImpl::CpuBreak = 0x0001000D;
const BYTE BreakpointImpl::CpuBreakSize16 = 2;
const ULONG BreakpointImpl::CpuBreak16 = 0xE825;

BOOL Currently16Bit()
{
    return (CONTEXT_TO_PROGRAM_COUNTER(DD_ExceptionState.context) & 1)? TRUE : FALSE;
}