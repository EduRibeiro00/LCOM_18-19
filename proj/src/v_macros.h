#ifndef _V_MACROS_H_
#define _V_MACROS_H_

#define VID_CARD_I_VEC    0x10    //interrupt vector for the video card
#define SET_VBE_MODE      0x4F02  //VBE call, function 02: set VBE mode
#define RET_VBE_MODE      0x4F01  //VBE call, function 01: return VBE mode info
#define GET_VBE_CTRL_INFO 0x4F00  //VBE call, function 00: controller info

#define SET_LINEAR_FB     1<<14   //set bit 14: linear framebuffer 

//color modes
#define DIR_CLR_MODE      0x06    //direct color mode
#define INDEX_CLR_MODE    0x04    //indexed color mode

//graphic modes
#define MODE_1024x768                   0x105       //indexed color - 1024x768
#define MODE_640x480                    0x110       //direct color  - 640x480
#define MODE_800x600                    0x115       //direct color  - 800x600
#define MODE_1280x1024                  0x11A       //direct color  - 1280x1024
#define MODE_1152x864                   0x14C       //direct color  - 1152x864

#define BIOS_VMODE_TEXT_25x80_16C       0x03

#define ALLOC_MAX_TRIES         3        // number of maximum tries for lm_alloc()
#define VBE_SIGN_INIT           "VBE2"   // VBE signature inicializer (for func 0x00)
#define VIDEO_MODE_TERM_WORD    0xFFFF   //indicates the termination of the info of VideoModePtr

#endif
