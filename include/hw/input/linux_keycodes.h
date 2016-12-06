#ifndef HW_INPUT_LINUX_KEYCODES_H
#define HW_INPUT_LINUX_KEYCODES_H

/*
 * Copyright (c) 1999-2002 Vojtech Pavlik
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 *
 * Adjusted for portable use in QEMU by prepending LINUX_ to all names.
 */

/*
 * Keys and buttons
 */

#define LINUX_KEY_RESERVED              0
#define LINUX_KEY_ESC                   1
#define LINUX_KEY_1                     2
#define LINUX_KEY_2                     3
#define LINUX_KEY_3                     4
#define LINUX_KEY_4                     5
#define LINUX_KEY_5                     6
#define LINUX_KEY_6                     7
#define LINUX_KEY_7                     8
#define LINUX_KEY_8                     9
#define LINUX_KEY_9                     10
#define LINUX_KEY_0                     11
#define LINUX_KEY_MINUS                 12
#define LINUX_KEY_EQUAL                 13
#define LINUX_KEY_BACKSPACE             14
#define LINUX_KEY_TAB                   15
#define LINUX_KEY_Q                     16
#define LINUX_KEY_W                     17
#define LINUX_KEY_E                     18
#define LINUX_KEY_R                     19
#define LINUX_KEY_T                     20
#define LINUX_KEY_Y                     21
#define LINUX_KEY_U                     22
#define LINUX_KEY_I                     23
#define LINUX_KEY_O                     24
#define LINUX_KEY_P                     25
#define LINUX_KEY_LEFTBRACE             26
#define LINUX_KEY_RIGHTBRACE            27
#define LINUX_KEY_ENTER                 28
#define LINUX_KEY_LEFTCTRL              29
#define LINUX_KEY_A                     30
#define LINUX_KEY_S                     31
#define LINUX_KEY_D                     32
#define LINUX_KEY_F                     33
#define LINUX_KEY_G                     34
#define LINUX_KEY_H                     35
#define LINUX_KEY_J                     36
#define LINUX_KEY_K                     37
#define LINUX_KEY_L                     38
#define LINUX_KEY_SEMICOLON             39
#define LINUX_KEY_APOSTROPHE            40
#define LINUX_KEY_GRAVE                 41
#define LINUX_KEY_LEFTSHIFT             42
#define LINUX_KEY_BACKSLASH             43
#define LINUX_KEY_Z                     44
#define LINUX_KEY_X                     45
#define LINUX_KEY_C                     46
#define LINUX_KEY_V                     47
#define LINUX_KEY_B                     48
#define LINUX_KEY_N                     49
#define LINUX_KEY_M                     50
#define LINUX_KEY_COMMA                 51
#define LINUX_KEY_DOT                   52
#define LINUX_KEY_SLASH                 53
#define LINUX_KEY_RIGHTSHIFT            54
#define LINUX_KEY_KPASTERISK            55
#define LINUX_KEY_LEFTALT               56
#define LINUX_KEY_SPACE                 57
#define LINUX_KEY_CAPSLOCK              58
#define LINUX_KEY_F1                    59
#define LINUX_KEY_F2                    60
#define LINUX_KEY_F3                    61
#define LINUX_KEY_F4                    62
#define LINUX_KEY_F5                    63
#define LINUX_KEY_F6                    64
#define LINUX_KEY_F7                    65
#define LINUX_KEY_F8                    66
#define LINUX_KEY_F9                    67
#define LINUX_KEY_F10                   68
#define LINUX_KEY_NUMLOCK               69
#define LINUX_KEY_SCROLLLOCK            70
#define LINUX_KEY_KP7                   71
#define LINUX_KEY_KP8                   72
#define LINUX_KEY_KP9                   73
#define LINUX_KEY_KPMINUS               74
#define LINUX_KEY_KP4                   75
#define LINUX_KEY_KP5                   76
#define LINUX_KEY_KP6                   77
#define LINUX_KEY_KPPLUS                78
#define LINUX_KEY_KP1                   79
#define LINUX_KEY_KP2                   80
#define LINUX_KEY_KP3                   81
#define LINUX_KEY_KP0                   82
#define LINUX_KEY_KPDOT                 83

#define LINUX_KEY_ZENKAKUHANKAKU        85
#define LINUX_KEY_102ND                 86
#define LINUX_KEY_F11                   87
#define LINUX_KEY_F12                   88
#define LINUX_KEY_RO                    89
#define LINUX_KEY_KATAKANA              90
#define LINUX_KEY_HIRAGANA              91
#define LINUX_KEY_HENKAN                92
#define LINUX_KEY_KATAKANAHIRAGANA      93
#define LINUX_KEY_MUHENKAN              94
#define LINUX_KEY_KPJPCOMMA             95
#define LINUX_KEY_KPENTER               96
#define LINUX_KEY_RIGHTCTRL             97
#define LINUX_KEY_KPSLASH               98
#define LINUX_KEY_SYSRQ                 99
#define LINUX_KEY_RIGHTALT              100
#define LINUX_KEY_LINEFEED              101
#define LINUX_KEY_HOME          102
#define LINUX_KEY_UP                    103
#define LINUX_KEY_PAGEUP                104
#define LINUX_KEY_LEFT          105
#define LINUX_KEY_RIGHT                 106
#define LINUX_KEY_END                   107
#define LINUX_KEY_DOWN          108
#define LINUX_KEY_PAGEDOWN              109
#define LINUX_KEY_INSERT                110
#define LINUX_KEY_DELETE                111
#define LINUX_KEY_MACRO                 112
#define LINUX_KEY_MUTE          113
#define LINUX_KEY_VOLUMEDOWN            114
#define LINUX_KEY_VOLUMEUP              115
#define LINUX_KEY_POWER                 116
#define LINUX_KEY_KPEQUAL               117
#define LINUX_KEY_KPPLUSMINUS           118
#define LINUX_KEY_PAUSE                 119

#define LINUX_KEY_KPCOMMA               121
#define LINUX_KEY_HANGEUL               122
#define LINUX_KEY_HANGUEL               KEY_HANGEUL
#define LINUX_KEY_HANJA                 123
#define LINUX_KEY_YEN                   124
#define LINUX_KEY_LEFTMETA              125
#define LINUX_KEY_RIGHTMETA             126
#define LINUX_KEY_COMPOSE               127

#define LINUX_KEY_STOP          128
#define LINUX_KEY_AGAIN                 129
#define LINUX_KEY_PROPS                 130
#define LINUX_KEY_UNDO          131
#define LINUX_KEY_FRONT                 132
#define LINUX_KEY_COPY          133
#define LINUX_KEY_OPEN          134
#define LINUX_KEY_PASTE                 135
#define LINUX_KEY_FIND          136
#define LINUX_KEY_CUT                   137
#define LINUX_KEY_HELP          138
#define LINUX_KEY_MENU          139
#define LINUX_KEY_CALC          140
#define LINUX_KEY_SETUP                 141
#define LINUX_KEY_SLEEP                 142
#define LINUX_KEY_WAKEUP                143
#define LINUX_KEY_FILE          144
#define LINUX_KEY_SENDFILE              145
#define LINUX_KEY_DELETEFILE            146
#define LINUX_KEY_XFER          147
#define LINUX_KEY_PROG1                 148
#define LINUX_KEY_PROG2                 149
#define LINUX_KEY_WWW                   150
#define LINUX_KEY_MSDOS                 151
#define LINUX_KEY_COFFEE                152
#define LINUX_KEY_DIRECTION             153
#define LINUX_KEY_CYCLEWINDOWS  154
#define LINUX_KEY_MAIL          155
#define LINUX_KEY_BOOKMARKS             156
#define LINUX_KEY_COMPUTER              157
#define LINUX_KEY_BACK          158
#define LINUX_KEY_FORWARD               159
#define LINUX_KEY_CLOSECD               160
#define LINUX_KEY_EJECTCD               161
#define LINUX_KEY_EJECTCLOSECD  162
#define LINUX_KEY_NEXTSONG              163
#define LINUX_KEY_PLAYPAUSE             164
#define LINUX_KEY_PREVIOUSSONG  165
#define LINUX_KEY_STOPCD                166
#define LINUX_KEY_RECORD                167
#define LINUX_KEY_REWIND                168
#define LINUX_KEY_PHONE                 169
#define LINUX_KEY_ISO                   170
#define LINUX_KEY_CONFIG                171
#define LINUX_KEY_HOMEPAGE              172
#define LINUX_KEY_REFRESH               173
#define LINUX_KEY_EXIT          174
#define LINUX_KEY_MOVE          175
#define LINUX_KEY_EDIT          176
#define LINUX_KEY_SCROLLUP              177
#define LINUX_KEY_SCROLLDOWN            178
#define LINUX_KEY_KPLEFTPAREN           179
#define LINUX_KEY_KPRIGHTPAREN  180
#define LINUX_KEY_NEW                   181
#define LINUX_KEY_REDO          182

#define LINUX_KEY_F13                   183
#define LINUX_KEY_F14                   184
#define LINUX_KEY_F15                   185
#define LINUX_KEY_F16                   186
#define LINUX_KEY_F17                   187
#define LINUX_KEY_F18                   188
#define LINUX_KEY_F19                   189
#define LINUX_KEY_F20                   190
#define LINUX_KEY_F21                   191
#define LINUX_KEY_F22                   192
#define LINUX_KEY_F23                   193
#define LINUX_KEY_F24                   194

#define LINUX_KEY_PLAYCD                200
#define LINUX_KEY_PAUSECD               201
#define LINUX_KEY_PROG3                 202
#define LINUX_KEY_PROG4                 203
#define LINUX_KEY_SUSPEND               205
#define LINUX_KEY_CLOSE                 206
#define LINUX_KEY_PLAY          207
#define LINUX_KEY_FASTFORWARD           208
#define LINUX_KEY_BASSBOOST             209
#define LINUX_KEY_PRINT                 210
#define LINUX_KEY_HP                    211
#define LINUX_KEY_CAMERA                212
#define LINUX_KEY_SOUND                 213
#define LINUX_KEY_QUESTION              214
#define LINUX_KEY_EMAIL                 215
#define LINUX_KEY_CHAT          216
#define LINUX_KEY_SEARCH                217
#define LINUX_KEY_CONNECT               218
#define LINUX_KEY_FINANCE               219
#define LINUX_KEY_SPORT                 220
#define LINUX_KEY_SHOP          221
#define LINUX_KEY_ALTERASE              222
#define LINUX_KEY_CANCEL                223
#define LINUX_KEY_BRIGHTNESSDOWN        224
#define LINUX_KEY_BRIGHTNESSUP  225
#define LINUX_KEY_MEDIA                 226


/*Zeus: these keys are defined for OMAP730 Perseus2*/
#define LINUX_KEY_STAR          227
#define LINUX_KEY_SHARP                 228
#define LINUX_KEY_SOFT1                 229
#define LINUX_KEY_SOFT2                 230
#define LINUX_KEY_SEND          231
#define LINUX_KEY_CENTER                232
#define LINUX_KEY_HEADSETHOOK           233
#define LINUX_KEY_0_5                   234
#define LINUX_KEY_2_5                   235

#define LINUX_KEY_SWITCHVIDEOMODE       236
#define LINUX_KEY_KBDILLUMTOGGLE        237
#define LINUX_KEY_KBDILLUMDOWN  238
#define LINUX_KEY_KBDILLUMUP            239

#define LINUX_KEY_SEND          231
#define LINUX_KEY_REPLY                 232
#define LINUX_KEY_FORWARDMAIL           233
#define LINUX_KEY_SAVE          234
#define LINUX_KEY_DOCUMENTS             235

#define LINUX_KEY_BATTERY               236

#define LINUX_KEY_UNKNOWN               240

#define LINUX_KEY_NUM                 241
#define LINUX_KEY_FOCUS               242
#define LINUX_KEY_PLUS                243
#define LINUX_KEY_NOTIFICATION        244

#define LINUX_BTN_MISC          0x100
#define LINUX_BTN_0                     0x100
#define LINUX_BTN_1                     0x101
#define LINUX_BTN_2                     0x102
#define LINUX_BTN_3                     0x103
#define LINUX_BTN_4                     0x104
#define LINUX_BTN_5                     0x105
#define LINUX_BTN_6                     0x106
#define LINUX_BTN_7                     0x107
#define LINUX_BTN_8                     0x108
#define LINUX_BTN_9                     0x109

#define LINUX_BTN_MOUSE                 0x110
#define LINUX_BTN_LEFT          0x110
#define LINUX_BTN_RIGHT                 0x111
#define LINUX_BTN_MIDDLE                0x112
#define LINUX_BTN_SIDE          0x113
#define LINUX_BTN_EXTRA                 0x114
#define LINUX_BTN_FORWARD               0x115
#define LINUX_BTN_BACK          0x116
#define LINUX_BTN_TASK          0x117

#define LINUX_BTN_JOYSTICK              0x120
#define LINUX_BTN_TRIGGER               0x120
#define LINUX_BTN_THUMB                 0x121
#define LINUX_BTN_THUMB2                0x122
#define LINUX_BTN_TOP                   0x123
#define LINUX_BTN_TOP2          0x124
#define LINUX_BTN_PINKIE                0x125
#define LINUX_BTN_BASE          0x126
#define LINUX_BTN_BASE2                 0x127
#define LINUX_BTN_BASE3                 0x128
#define LINUX_BTN_BASE4                 0x129
#define LINUX_BTN_BASE5                 0x12a
#define LINUX_BTN_BASE6                 0x12b
#define LINUX_BTN_DEAD          0x12f

#define LINUX_BTN_GAMEPAD               0x130
#define LINUX_BTN_A                     0x130
#define LINUX_BTN_B                     0x131
#define LINUX_BTN_C                     0x132
#define LINUX_BTN_X                     0x133
#define LINUX_BTN_Y                     0x134
#define LINUX_BTN_Z                     0x135
#define LINUX_BTN_TL                    0x136
#define LINUX_BTN_TR                    0x137
#define LINUX_BTN_TL2                   0x138
#define LINUX_BTN_TR2                   0x139
#define LINUX_BTN_SELECT                0x13a
#define LINUX_BTN_START                 0x13b
#define LINUX_BTN_MODE          0x13c
#define LINUX_BTN_THUMBL                0x13d
#define LINUX_BTN_THUMBR                0x13e

#define LINUX_BTN_DIGI          0x140
#define LINUX_BTN_TOOL_PEN              0x140
#define LINUX_BTN_TOOL_RUBBER           0x141
#define LINUX_BTN_TOOL_BRUSH            0x142
#define LINUX_BTN_TOOL_PENCIL           0x143
#define LINUX_BTN_TOOL_AIRBRUSH         0x144
#define LINUX_BTN_TOOL_FINGER           0x145
#define LINUX_BTN_TOOL_MOUSE            0x146
#define LINUX_BTN_TOOL_LENS             0x147
#define LINUX_BTN_TOUCH                 0x14a
#define LINUX_BTN_STYLUS                0x14b
#define LINUX_BTN_STYLUS2               0x14c
#define LINUX_BTN_TOOL_DOUBLETAP        0x14d
#define LINUX_BTN_TOOL_TRIPLETAP        0x14e

#define LINUX_BTN_WHEEL                 0x150
#define LINUX_BTN_GEAR_DOWN             0x150
#define LINUX_BTN_GEAR_UP               0x151

#define LINUX_KEY_OK                    0x160
#define LINUX_KEY_SELECT                0x161
#define LINUX_KEY_GOTO          0x162
#define LINUX_KEY_CLEAR                 0x163
#define LINUX_KEY_POWER2                0x164
#define LINUX_KEY_OPTION                0x165
#define LINUX_KEY_INFO          0x166
#define LINUX_KEY_TIME          0x167
#define LINUX_KEY_VENDOR                0x168
#define LINUX_KEY_ARCHIVE               0x169
#define LINUX_KEY_PROGRAM               0x16a
#define LINUX_KEY_CHANNEL               0x16b
#define LINUX_KEY_FAVORITES             0x16c
#define LINUX_KEY_EPG                   0x16d
#define LINUX_KEY_PVR                   0x16e
#define LINUX_KEY_MHP                   0x16f
#define LINUX_KEY_LANGUAGE              0x170
#define LINUX_KEY_TITLE                 0x171
#define LINUX_KEY_SUBTITLE              0x172
#define LINUX_KEY_ANGLE                 0x173
#define LINUX_KEY_ZOOM          0x174
#define LINUX_KEY_MODE          0x175
#define LINUX_KEY_KEYBOARD              0x176
#define LINUX_KEY_SCREEN                0x177
#define LINUX_KEY_PC                    0x178
#define LINUX_KEY_TV                    0x179
#define LINUX_KEY_TV2                   0x17a
#define LINUX_KEY_VCR                   0x17b
#define LINUX_KEY_VCR2          0x17c
#define LINUX_KEY_SAT                   0x17d
#define LINUX_KEY_SAT2          0x17e
#define LINUX_KEY_CD                    0x17f
#define LINUX_KEY_TAPE          0x180
#define LINUX_KEY_RADIO                 0x181
#define LINUX_KEY_TUNER                 0x182
#define LINUX_KEY_PLAYER                0x183
#define LINUX_KEY_TEXT          0x184
#define LINUX_KEY_DVD                   0x185
#define LINUX_KEY_AUX                   0x186
#define LINUX_KEY_MP3                   0x187
#define LINUX_KEY_AUDIO                 0x188
#define LINUX_KEY_VIDEO                 0x189
#define LINUX_KEY_DIRECTORY             0x18a
#define LINUX_KEY_LIST          0x18b
#define LINUX_KEY_MEMO          0x18c
#define LINUX_KEY_CALENDAR              0x18d
#define LINUX_KEY_RED                   0x18e
#define LINUX_KEY_GREEN                 0x18f
#define LINUX_KEY_YELLOW                0x190
#define LINUX_KEY_BLUE          0x191
#define LINUX_KEY_CHANNELUP             0x192
#define LINUX_KEY_CHANNELDOWN           0x193
#define LINUX_KEY_FIRST                 0x194
#define LINUX_KEY_LAST          0x195
#define LINUX_KEY_AB                    0x196
#define LINUX_KEY_NEXT          0x197
#define LINUX_KEY_RESTART               0x198
#define LINUX_KEY_SLOW          0x199
#define LINUX_KEY_SHUFFLE               0x19a
#define LINUX_KEY_BREAK                 0x19b
#define LINUX_KEY_PREVIOUS              0x19c
#define LINUX_KEY_DIGITS                0x19d
#define LINUX_KEY_TEEN          0x19e
#define LINUX_KEY_TWEN          0x19f

#define LINUX_KEY_DEL_EOL               0x1c0
#define LINUX_KEY_DEL_EOS               0x1c1
#define LINUX_KEY_INS_LINE              0x1c2
#define LINUX_KEY_DEL_LINE              0x1c3

#define LINUX_KEY_FN                    0x1d0
#define LINUX_KEY_FN_ESC                0x1d1
#define LINUX_KEY_FN_F1                 0x1d2
#define LINUX_KEY_FN_F2                 0x1d3
#define LINUX_KEY_FN_F3                 0x1d4
#define LINUX_KEY_FN_F4                 0x1d5
#define LINUX_KEY_FN_F5                 0x1d6
#define LINUX_KEY_FN_F6                 0x1d7
#define LINUX_KEY_FN_F7                 0x1d8
#define LINUX_KEY_FN_F8                 0x1d9
#define LINUX_KEY_FN_F9                 0x1da
#define LINUX_KEY_FN_F10                0x1db
#define LINUX_KEY_FN_F11                0x1dc
#define LINUX_KEY_FN_F12                0x1dd
#define LINUX_KEY_FN_1          0x1de
#define LINUX_KEY_FN_2          0x1df
#define LINUX_KEY_FN_D          0x1e0
#define LINUX_KEY_FN_E          0x1e1
#define LINUX_KEY_FN_F          0x1e2
#define LINUX_KEY_FN_S          0x1e3
#define LINUX_KEY_FN_B          0x1e4

#define LINUX_KEY_BRL_DOT1              0x1f1
#define LINUX_KEY_BRL_DOT2              0x1f2
#define LINUX_KEY_BRL_DOT3              0x1f3
#define LINUX_KEY_BRL_DOT4              0x1f4
#define LINUX_KEY_BRL_DOT5              0x1f5
#define LINUX_KEY_BRL_DOT6              0x1f6
#define LINUX_KEY_BRL_DOT7              0x1f7
#define LINUX_KEY_BRL_DOT8              0x1f8

/* We avoid low common keys in module aliases so they don't get huge. */
#define LINUX_KEY_MIN_INTERESTING       KEY_MUTE
#define LINUX_KEY_MAX                   0x1ff

#ifndef ABS_MT_SLOT
#define LINUX_ABS_MT_SLOT          0x2f  /* MT slot being modified */
#endif
#ifndef ABS_MT_TOUCH_MAJOR
#define LINUX_ABS_MT_TOUCH_MAJOR   0x30  /* Major axis of touching ellipse */
#endif
#ifndef ABS_MT_TOUCH_MINOR
#define LINUX_ABS_MT_TOUCH_MINOR   0x31  /* Minor axis (omit if circular) */
#endif
#ifndef ABS_MT_WIDTH_MAJOR
#define LINUX_ABS_MT_WIDTH_MAJOR   0x32  /* Major axis of approaching ellipse */
#endif
#ifndef ABS_MT_WIDTH_MINOR
#define LINUX_ABS_MT_WIDTH_MINOR   0x33  /* Minor axis (omit if circular) */
#endif
#ifndef ABS_MT_ORIENTATION
#define LINUX_ABS_MT_ORIENTATION   0x34  /* Ellipse orientation */
#endif
#ifndef ABS_MT_POSITION_X
#define LINUX_ABS_MT_POSITION_X    0x35  /* Center X ellipse position */
#endif
#ifndef ABS_MT_POSITION_Y
#define LINUX_ABS_MT_POSITION_Y    0x36  /* Center Y ellipse position */
#endif
#ifndef ABS_MT_TOOL_TYPE
#define LINUX_ABS_MT_TOOL_TYPE     0x37  /* Type of touching device */
#endif
#ifndef ABS_MT_BLOB_ID
#define LINUX_ABS_MT_BLOB_ID       0x38  /* Group a set of packets as a blob */
#endif
#ifndef ABS_MT_TRACKING_ID
#define LINUX_ABS_MT_TRACKING_ID   0x39  /* Unique ID of initiated contact */
#endif
#ifndef ABS_MT_PRESSURE
#define LINUX_ABS_MT_PRESSURE      0x3a  /* Pressure on contact area */
#endif
#ifndef ABS_MT_DISTANCE
#define LINUX_ABS_MT_DISTANCE      0x3b  /* Contact hover distance */
#endif
#ifndef ABS_MAX
#define LINUX_ABS_MAX              0x3f
#endif

#ifndef SYN_REPORT
#define LINUX_SYN_REPORT              0
#endif
#ifndef SYN_CONFIG
#define LINUX_SYN_CONFIG              1
#endif
#ifndef SYN_MT_REPORT
#define LINUX_SYN_MT_REPORT           2
#endif
#ifndef SYN_DROPPED
#define LINUX_SYN_DROPPED             3
#endif

#endif
