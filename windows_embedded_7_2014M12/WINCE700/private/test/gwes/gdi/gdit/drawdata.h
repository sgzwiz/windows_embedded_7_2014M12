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
/**************************************************************************


Module Name:

   drawData.h 

Abstract:

   Code used by region tests

***************************************************************************/
#ifndef __DRAWDATA_H__
#define __DRAWDATA_H__

static UINT curves[][6] = {
   {200,168,100,140,200,168},{200,169, 99,140,200,168},{200,169, 98,140,200,169},{200,170, 97,140,200,169},
   {200,171, 96,140,200,170},{200,171, 95,140,200,171},{200,172, 94,140,200,171},{200,172, 93,140,200,172},
   {200,173, 92,140,200,172},{200,174, 91,140,200,173},{200,174, 90,140,200,174},{200,175, 89,140,200,174},
   {200,175, 88,140,200,175},{200,176, 87,140,200,175},{200,177, 86,140,200,176},{200,177, 85,140,200,177},
   {200,178, 84,140,200,177},{200,178, 83,140,200,178},{200,179, 82,140,200,178},{200,180, 81,140,200,179},
   {200,180, 80,140,200,180},{200,181, 79,140,200,180},{200,181, 78,140,200,181},{200,182, 77,140,200,181},
   {200,183, 76,140,200,182},{200,183, 75,140,200,183},{200,184, 74,140,200,183},{200,184, 73,140,200,184},
   {200,185, 72,140,200,184},{200,186, 71,140,200,185},{200,186, 70,140,200,186},{200,187, 69,140,200,186},
   {200,187, 68,140,200,187},{200,188, 67,140,200,187},{200,189, 66,140,200,188},{200,189, 65,140,200,189},
   {200,190, 64,140,200,189},{200,190, 63,140,200,190},{200,191, 62,140,200,190},{200,192, 61,140,200,191},
   {200,192, 60,140,200,192},{200,193, 59,140,200,192},{200,193, 58,140,200,193},{200,194, 57,140,200,193},
   {200,195, 56,140,200,194},{200,195, 55,140,200,195},{200,196, 54,140,200,195},{200,196, 53,140,200,196},
   {200,197, 52,140,200,196},{200,198, 51,140,200,197},{200,198, 50,140,200,198},{200,199, 49,140,200,198},
   {200,199, 48,140,200,199},{200,200, 47,140,200,199},{200,201, 46,140,200,200},{200,201, 45,140,200,201},
   {200,202, 44,140,200,201},{200,202, 43,140,200,202},{200,203, 42,140,200,202},{200,204, 41,140,200,203},
   {200,204, 40,140,200,204},{200,205, 39,140,200,204},{200,205, 38,140,200,205},{200,206, 37,140,200,205},
   {200,207, 36,140,200,206},{200,207, 35,140,200,207},{200,208, 34,140,200,207},{200,208, 33,140,200,208},
   {200,209, 32,140,200,208},{200,210, 31,140,200,209},{200,210, 30,140,200,210},{200,211, 29,140,200,210},
   {200,211, 28,140,200,211},{200,212, 27,140,200,211},{200,213, 26,140,200,212},{200,213, 25,140,200,213},
   {200,214, 24,140,200,213},{200,214, 23,140,200,214},{200,215, 22,140,200,214},{200,216, 21,140,200,215},
   {200,216, 20,140,200,216},{200,217, 19,140,200,216},{200,217, 18,140,200,217},{200,218, 17,140,200,217},
   {200,219, 16,140,200,218},{200,219, 15,140,200,219},{200,220, 14,140,200,219},{200,220, 13,140,200,220},
   {200,221, 12,140,200,220},{200,222, 11,140,200,221},{200,222, 10,140,200,222},{200,223,  9,140,200,222},
   {200,223,  8,140,200,223},{200,224,  7,140,200,223},{200,225,  6,140,200,224},{200,225,  5,140,200,225},
   {200,226,  4,140,200,225},{200,226,  3,140,200,226},{200,227,  2,140,200,226},{200,169, 20,250,200,170},
   {200,168, 20,250,200,169},{200,167, 20,250,200,168},{200,166, 20,250,200,167},{200,165, 20,250,200,166},
   {200,164, 20,250,200,165},{200,163, 20,250,200,164},{200,162, 20,250,200,163},{200,161, 20,250,200,162},
   {200,160, 20,250,200,161},{200,159, 20,250,200,160},{200,158, 20,250,200,159},{200,157, 20,250,200,158},
   {200,156, 20,250,200,157},{200,155, 20,250,200,156},{200,154, 20,250,200,155},{200,153, 20,250,200,154},
   {200,152, 20,250,200,153},{200,151, 20,250,200,152},{200,150, 20,250,200,151},{200,149, 20,250,200,150},
   {200,148, 20,250,200,149},{200,147, 20,250,200,148},{200,146, 20,250,200,147},{200,145, 20,250,200,146},
   {200,144, 20,250,200,145},{200,143, 20,250,200,144},{200,142, 20,250,200,143},{200,141, 20,250,200,142},
   {200,140, 20,250,200,141},{200,139, 20,250,200,140},{200,138, 20,250,200,139},{200,137, 20,250,200,138},
   {200,136, 20,250,200,137},{200,135, 20,250,200,136},{200,134, 20,250,200,135},{200,133, 20,250,200,134},
   {200,132, 20,250,200,133},{200,131, 20,250,200,132},{200,130, 20,250,200,131},{200,129, 20,250,200,130},
   {200,128, 20,250,200,129},{200,127, 20,250,200,128},{200,126, 20,250,200,127},{200,125, 20,250,200,126},
   {200,124, 20,250,200,125},{200,123, 20,250,200,124},{200,122, 20,250,200,123},{200,121, 20,250,200,122},
   {200,120, 20,250,200,121},{200,119, 20,250,200,120},{200,118, 20,250,200,119},{200,117, 20,250,200,118},
   {200,116, 20,250,200,117},{200,115, 20,250,200,116},{200,114, 20,250,200,115},{200,113, 20,250,200,114},
   {200,112, 20,250,200,113},{200,111, 20,250,200,112},{200,110, 20,250,200,111},{200,109, 20,250,200,110},
   {200,108, 20,250,200,109},{200,107, 20,250,200,108},{200,106, 20,250,200,107},{200,105, 20,250,200,106},
   {220,169, 20,250,220,170},{220,168, 20,250,220,169},{220,167, 20,250,220,168},{220,166, 20,250,220,167},
   {220,165, 20,250,220,166},{220,164, 20,250,220,165},{220,163, 20,250,220,164},{220,162, 20,250,220,163},
   {220,161, 20,250,220,162},{220,160, 20,250,220,161},{220,159, 20,250,220,160},{220,158, 20,250,220,159},
   {220,157, 20,250,220,158},{220,156, 20,250,220,157},{220,155, 20,250,220,156},{220,154, 20,250,220,155},
   {220,153, 20,250,220,154},{220,152, 20,250,220,153},{220,151, 20,250,220,152},{220,150, 20,250,220,151},
   {220,149, 20,250,220,150},{220,148, 20,250,220,149},{220,147, 20,250,220,148},{220,146, 20,250,220,147},
   {220,145, 20,250,220,146},{220,144, 20,250,220,145},{220,143, 20,250,220,144},{220,142, 20,250,220,143},
   {220,141, 20,250,220,142},{220,140, 20,250,220,141},{220,139, 20,250,220,140},{220,138, 20,250,220,139},
   {220,137, 20,250,220,138},{220,136, 20,250,220,137},{220,135, 20,250,220,136},{220,134, 20,250,220,135},
   {220,133, 20,250,220,134},{220,132, 20,250,220,133},{220,131, 20,250,220,132},{220,130, 20,250,220,131},
   {220,129, 20,250,220,130},{220,128, 20,250,220,129},{220,127, 20,250,220,128},{220,126, 20,250,220,127},
   {240,169, 20,250,240,170},{240,168, 20,250,240,169},{240,167, 20,250,240,168},{240,166, 20,250,240,167},
   {240,165, 20,250,240,166},{240,164, 20,250,240,165},{240,163, 20,250,240,164},{240,162, 20,250,240,163},
   {240,161, 20,250,240,162},{240,160, 20,250,240,161},{240,159, 20,250,240,160},{240,158, 20,250,240,159},
   {240,157, 20,250,240,158},{240,156, 20,250,240,157},{240,155, 20,250,240,156},{240,154, 20,250,240,155},
   {240,153, 20,250,240,154},{240,152, 20,250,240,153},{240,151, 20,250,240,152},{240,150, 20,250,240,151},
   {240,149, 20,250,240,150},{240,148, 20,250,240,149},{240,147, 20,250,240,148},{240,146, 20,250,240,147},
   {240,145, 20,250,240,146},{240,144, 20,250,240,145},{240,143, 20,250,240,144},{260,169, 20,250,260,170},
   {260,168, 20,250,260,169},{260,167, 20,250,260,168},{260,166, 20,250,260,167},{260,165, 20,250,260,166},
   {260,164, 20,250,260,165},{260,163, 20,250,260,164},{260,162, 20,250,260,163},{260,161, 20,250,260,162},
   {260,160, 20,250,260,161},{260,159, 20,250,260,160},{260,158, 20,250,260,159},{260,157, 20,250,260,158},
   {260,156, 20,250,260,157},{280,169, 20,250,280,170},{280,168, 20,250,280,169},{280,167, 20,250,280,168},
   {280,166, 20,250,280,167},{280,165, 20,250,280,166},{300,169,140,144,300,170},{301,168,138,144,301,169},
   {302,168,136,144,302,168},{303,167,134,144,303,168},{304,167,132,144,304,167},{305,166,130,144,305,167},
   {306,166,128,144,306,166},{307,165,126,144,307,166},{308,165,124,144,308,165},{309,164,122,144,309,165},
   {310,164,120,144,310,164},{311,164,118,144,311,164},{312,163,116,144,312,164},{313,163,114,144,313,163},
   {314,162,112,144,314,163},{315,162,110,144,315,162},{316,162,108,144,316,162},{317,161,106,144,317,162},
   {318,161,104,144,318,161},{319,161,102,144,319,161},{320,160,100,144,320,161},{321,160, 98,144,321,160},
   {322,160, 96,144,322,160},{323,160, 94,144,323,160},{324,159, 92,144,324,160},{325,159, 90,144,325,159},
   {326,159, 88,144,326,159},{327,159, 86,144,327,159},{328,158, 84,144,328,159},{329,158, 82,144,329,158},
   {330,158, 80,144,330,158},{331,158, 78,144,331,158},{332,158, 76,144,332,158},{333,157, 74,144,333,158},
   {334,157, 72,144,334,157},{335,157, 70,144,335,157},{336,157, 68,144,336,157},{337,157, 66,144,337,157},
   {338,157, 64,144,338,157},{339,156, 62,144,339,157},{340,156, 60,144,340,156},{341,156, 58,144,341,156},
   {342,156, 56,144,342,156},{343,156, 54,144,343,156},{344,156, 52,144,344,156},{345,156, 50,144,345,156},
   {346,156, 48,144,346,156},{347,155, 46,144,347,156},{348,155, 44,144,348,155},{349,155, 42,144,349,155},
   {350,155, 40,144,350,155},{351,155, 38,144,351,155},{352,155, 36,144,352,155},{353,155, 34,144,353,155},
   {354,155, 32,144,354,155},{355,155, 30,144,355,155},{356,155, 28,144,356,155},{357,155, 26,144,357,155},
   {358,154, 24,144,358,155},{359,154, 22,144,359,154},{360,154, 20,144,360,154},{361,154, 18,144,361,154},
   {362,154, 16,144,362,154},{363,154, 14,144,363,154},{364,154, 12,144,364,154},{365,154, 10,144,365,154},
   {366,154,  8,144,366,154},{367,154,  6,144,367,154},{368,154,  4,144,368,154},{369,154,  2,144,369,154},
};

static int curveSize = sizeof(curves)/(sizeof(int)*6);

#define locRed		RGB(255,0,0)     
#define locGreen	RGB(0,255,0)
#define locYellow RGB(255,255,0)    
#define locBlue	RGB(0,0,255)      


static UINT blocks[][5] = {
   {200,170, 10,  6,        0},
   {200,190, 10,  6,   locRed},
   {200,210, 10,  6,   locRed},
   {200,230, 10,  6,        0},
   {200,250, 10,  6,  locBlue},
   {200,270, 10,  6,  locBlue},
   {200,290, 10,  6,        0},
   {220,170, 11,  7,        0},
   {220,190, 11,  7,   locRed},
   {220,210, 11,  7,   locRed},
   {220,230, 11,  7,        0},
   {220,250, 11,  7,  locBlue},
   {220,270, 11,  7,  locBlue},
   {220,290, 11,  7,        0},
   {240,170, 12,  9,        0},
   {240,190, 12,  9,   locRed},
   {240,210, 12,  9,   locRed},
   {240,230, 12,  9,        0},
   {240,250, 12,  9,  locBlue},
   {240,270, 12,  9,  locBlue},
   {240,290, 12,  9,        0},
   {260,170, 14, 11,        0},
   {260,190, 14, 11,   locRed},
   {260,210, 14, 11,   locRed},
   {260,230, 14, 11,        0},
   {260,250, 14, 11,  locBlue},
   {260,270, 14, 11,  locBlue},
   {260,290, 14, 11,        0},
   {280,170, 16, 14,        0},
   {280,190, 16, 14,   locRed},
   {280,210, 16, 14,   locRed},
   {280,230, 16, 14,        0},
   {280,250, 16, 14,  locBlue},
   {280,270, 16, 14,  locBlue},
   {280,290, 16, 14,        0},
   {300,170, 19, 18,        0},
   {300,190, 19, 18,        0},
   {300,210, 19, 18,        0},
   {300,230, 19, 18,        0},
   {300,250, 19, 18,        0},
   {300,270, 19, 18,        0},
   {300,290, 19, 18,        0},
   {320,170, 20, 20,        0},
   {320,190, 20, 20,        0},
   {320,210, 20, 20,        0},
   {320,230, 20, 20,        0},
   {320,250, 20, 20,        0},
   {320,270, 20, 20,        0},
   {320,290, 20, 20,        0},
   {340,170, 20, 20,        0},
   {340,190, 20, 20,        0},
   {340,210, 20, 20,        0},
   {340,230, 20, 20,        0},
   {340,250, 20, 20,        0},
   {340,270, 20, 20,        0},
   {340,290, 20, 20,        0},
   {360,170, 20, 20,        0},
   {360,190, 20, 20,        0},
   {360,210, 20, 20,        0},
   {360,230, 20, 20,        0},
   {360,250, 20, 20,        0},
   {360,270, 20, 20,        0},
   {360,290, 20, 20,        0},
   {380,170, 20, 20,        0},
   {380,190, 20, 20,        0},
   {380,210, 20, 20,        0},
   {380,230, 20, 20,        0},
   {380,250, 20, 20,        0},
   {380,270, 20, 20,        0},
   {380,290, 20, 20,        0},
   {400,170, 20, 20,        0},
   {400,190, 20, 20,        0},
   {400,210, 20, 20,        0},
   {400,230, 20, 20,        0},
   {400,250, 20, 20,        0},
   {400,270, 20, 20,        0},
   {400,290, 20, 20,        0},
   {420,170, 20, 20,        0},
   {420,190, 20, 20,        0},
   {420,210, 20, 20,        0},
   {420,230, 20, 20,        0},
   {420,250, 20, 20,        0},
   {420,270, 20, 20,        0},
   {420,290, 20, 20,        0},
   {320,190, 46, 46,   locRed},
   {374,190, 46, 46, locGreen},
   {320,244, 46, 46,  locBlue},
   {374,244, 46, 46,locYellow},
};

static int blockSize = sizeof(blocks)/(sizeof(int)*5);

#endif // header protection
