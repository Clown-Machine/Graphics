/* Copyright (c) 2012, Texas Instruments Incorporated
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

*  Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

*  Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

*  Neither the name of Texas Instruments Incorporated nor the names of
   its contributors may be used to endorse or promote products derived
   from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.*/


#include "ti/grlib/grlib.h"

static const unsigned char pixel_bluetooth4BPP_UNCOMP[] =
{
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 
0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xbb, 0xa1, 0x1b, 0xa0, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0x5e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x6a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0x95, 0xee, 0xee, 0xee, 0xee, 0xee, 0xe7, 0xe7, 0xee, 0xe9, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x0e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6b, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xba, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xa7, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xa0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xae, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x0a, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xee, 0xee, 0xe7, 0xee, 0xee, 0xee, 0xb0, 0xae, 0xee, 0xee, 0xe7, 0xee, 0xee, 0xee, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x0e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x00, 0x0a, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x50, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 
0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 0x95, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xa0, 0xb0, 0xa5, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xea, 0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x00, 0x00, 0x0a, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xba, 0xee, 0xe7, 0xee, 0xee, 0xee, 0xe7, 0xee, 0xb0, 0xb0, 0xb0, 0xae, 0xee, 0xee, 0xe7, 0xee, 0xee, 0xa0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x0e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x00, 0x0b, 0x00, 0x0a, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0xeb, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xbe, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xa0, 0xb0, 0xb0, 0xb0, 0xae, 0xe5, 0xee, 0xe5, 0xee, 0xe0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xae, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x00, 0x00, 0xab, 0x00, 0x0a, 0x6e, 0x7e, 0x6e, 0x7e, 0x6a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xe7, 0xee, 0xee, 0xe7, 0xe5, 0xee, 0xee, 0xee, 0xb0, 0xb0, 0xea, 0xb0, 0xb0, 0xae, 0xee, 0xee, 0xe7, 0xe7, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x6e, 0x5e, 0x6e, 0x5e, 0x00, 0x5e, 0x6e, 0x5e, 0x00, 0x00, 0x5e, 0xab, 0x00, 0x0a, 0x6e, 0x5e, 0x6e, 0x5e, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 
0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xee, 0xe5, 0xee, 0xe0, 0xb0, 0xb5, 0xee, 0xe5, 0xa0, 0xb0, 0xee, 0xea, 0xb0, 0xb0, 0xae, 0xe5, 0xee, 0xe7, 0xb0, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x6e, 0x7e, 0x60, 0x00, 0x00, 0x6e, 0x6e, 0x00, 0x00, 0x7e, 0x6e, 0x00, 0x00, 0x0e, 0x6e, 0x7e, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xbb, 0xee, 0xee, 0xe7, 0xe7, 0xb0, 0xb0, 0xb5, 0xee, 0xb0, 0xb0, 0xe7, 0xe0, 0xb0, 0xb0, 0xee, 0xee, 0xee, 0xee, 0xa0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x0a, 0x6e, 0x5e, 0x6e, 0x5e, 0x60, 0x0b, 0x00, 0x5e, 0x00, 0x0b, 0x6e, 0x00, 0x00, 0x0e, 0x6e, 0x5e, 0x6e, 0x5e, 0xa0, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb2, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xb0, 0xb0, 0xb7, 0xa0, 0xb0, 0xe0, 0xb0, 0xb0, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0x60, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb7, 0xe7, 0xee, 0xee, 0xee, 0xe7, 0xee, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xe5, 0xee, 0xee, 0xee, 0xe7, 0xee, 0xe0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x60, 0x0b, 0x00, 0x00, 0x00, 0x0e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x60, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 
0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb5, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xb0, 0xb0, 0xb0, 0x00, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xe0, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x60, 0x00, 0x00, 0x0e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xbe, 0xee, 0xee, 0xe7, 0xee, 0xee, 0xee, 0xee, 0xe0, 0xb0, 0xb0, 0xb5, 0xee, 0xee, 0xee, 0xe7, 0xee, 0xee, 0xee, 0xe0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x0e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x00, 0x00, 0x0b, 0x00, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x60, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb5, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xe0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb7, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xe0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb7, 0xe7, 0xee, 0xee, 0xee, 0xe7, 0xe0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb7, 0xee, 0xee, 0xee, 0xe7, 0xee, 0xe0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x00, 0x00, 0x0e, 0x00, 0x0b, 0x50, 0x0b, 0x00, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x90, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 
0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb1, 0xee, 0xe5, 0xee, 0xe5, 0xe0, 0xb0, 0x00, 0xe7, 0xa0, 0xb0, 0xee, 0xb0, 0xb0, 0xb5, 0xee, 0xe5, 0xee, 0xe5, 0xa0, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x7e, 0x6e, 0x7e, 0x6e, 0x00, 0x00, 0x0e, 0x6e, 0x00, 0x00, 0x7e, 0x6b, 0x00, 0x00, 0x6e, 0x6e, 0x7e, 0x6e, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xee, 0xee, 0xe7, 0xe0, 0xb0, 0xb0, 0xee, 0xee, 0xb0, 0xb0, 0xe7, 0xee, 0xb0, 0xb0, 0xb5, 0xee, 0xee, 0xee, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x6e, 0x5e, 0x6e, 0x50, 0x00, 0x0e, 0x6e, 0x5e, 0x00, 0x0b, 0x6e, 0x52, 0x00, 0x0b, 0x0e, 0x5e, 0x6e, 0x5e, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xee, 0xe5, 0xee, 0xe5, 0xb0, 0xe5, 0xee, 0xe5, 0xa0, 0xb0, 0xee, 0x90, 0xb0, 0xbb, 0xee, 0xe5, 0xee, 0xe7, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x00, 0x00, 0xe2, 0x00, 0x00, 0x0e, 0xee, 0x6e, 0x7e, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xa7, 0xee, 0xee, 0xee, 0xe7, 0xee, 0xee, 0xee, 0xb0, 0xb0, 0x90, 0xb0, 0xbb, 0xee, 0xee, 0xee, 0xe7, 0xea, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x0e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x00, 0x00, 0x00, 0x0b, 0x0e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5b, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 
0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xbe, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xa0, 0xb0, 0x00, 0xb0, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x00, 0x00, 0x00, 0xbe, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xee, 0xe7, 0xee, 0xee, 0xee, 0xe7, 0xee, 0xb0, 0xb0, 0xbb, 0xee, 0xee, 0xee, 0xe7, 0xee, 0xee, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x1e, 0x5e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x00, 0x0b, 0x0e, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x61, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb7, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xa0, 0xb0, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xe0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xee, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x00, 0x0e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x5e, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0x1e, 0xee, 0xe7, 0xee, 0xee, 0xee, 0xbb, 0xee, 0xee, 0xee, 0xe7, 0xee, 0xee, 0xea, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x01, 0x7e, 0x6e, 0x5e, 0x6e, 0x5e, 0xbe, 0x5e, 0x6e, 0x5e, 0x6e, 0x5e, 0x6e, 0x1b, 0x0b, 0x21, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 
0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb5, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xee, 0xe5, 0xeb, 0xb0, 0xb0, 0x70, 0x10, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x6e, 0x7e, 0x66, 0x0b, 0x00, 0x00, 0x40, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xae, 0xe5, 0xee, 0xee, 0xee, 0xe7, 0xee, 0xeb, 0xb0, 0xb0, 0xb0, 0xba, 0xbb, 0xa0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x0a, 0x11, 0x11, 0xb0, 0x0b, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 0xb0, 
0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 
0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 0xb0, 0x00, 0xb0, 0xb0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned long palette_bluetooth4BPP_UNCOMP[]=
{
	0x000000, 	0x2b70ab, 	0x1e7cd3, 	0x1f7ed2, 
	0x247bc8, 	0x117cf0, 	0x1787e9, 	0x0584ef, 
	0x0584f9, 	0x2475c4, 	0x000a31, 	0x000415, 
	0x0081ff, 	0x0081f9, 	0x0184f8, 	0xffffff
};

const tImage  bluetooth4BPP_UNCOMP=
{
	IMAGE_FMT_4BPP_UNCOMP,
	64,
	64,
	16,
	palette_bluetooth4BPP_UNCOMP,
	pixel_bluetooth4BPP_UNCOMP,
};

