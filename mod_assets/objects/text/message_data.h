#include "text/message_data.h"

/*
 * The following two messages should be kept last and in this order.
 * Message 0xFFFD must be last to not break the message debugger (see R_MESSAGE_DEBUGGER_TEXTID).
 * Message 0xFFFC must be immediately before message 0xFFFD to not break Font_LoadOrderedFont.
 */
DEFINE_MESSAGE(0x71B2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"You heard about us from the\n"
"guard at Death Mountain gate?\n"
"Well, I have to give\n"
"you a good deal then!"
,
"Die Wache in Kakariko schickt \n"
"Dich?! Nun, dann werde ich Dir \n"
"einen guten Preis machen!"
,
"Tu connais le garde de Cocorico?\n"
"On va te faire un bon prix!"
)

DEFINE_MESSAGE(0x71B3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"english"
,
"german"
,
"french"
)

DEFINE_MESSAGE(0x71B4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Message 1"

,"german","french"
)

DEFINE_MESSAGE(0x71B5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Message 2"

,"german","french"
)

DEFINE_MESSAGE(0x71B6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Message 3"

,"german","french"
)

DEFINE_MESSAGE(0x71B7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Message 4"

,"german","french"
)

DEFINE_MESSAGE(0x71B8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Message 5"

,"german","french"
)

DEFINE_MESSAGE(0x71B9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Message 6"

,"german","french"
)

DEFINE_MESSAGE(0x71BA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Message 7"

,"german","french"
)

DEFINE_MESSAGE(0x71BB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Message 8"

,"german","french"
)

DEFINE_MESSAGE(0x71BC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"Message 9"

,"german","french"
)

DEFINE_MESSAGE_NES(0xFFFC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
"0123456789\n"
"ABCDEFGHIJKLMN\n"
"OPQRSTUVWXYZ\n"
"abcdefghijklmn\n"
"opqrstuvwxyz\n"
" -.\n"
)
DEFINE_MESSAGE(0xFFFD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE, "", "", "")
