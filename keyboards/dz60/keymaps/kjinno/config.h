#ifndef CONFIG_KEYMAP_H
#define CONFIG_KEYMAP_H

#include "../../config.h"

// Fix KC_GESC conflict with Cmd+Alt+Esc on macos
#define GRAVE_ESC_GUI_OVERRIDE

#endif

#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 0

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 150

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 3

#undef MOUSEKEY_MOVE_DELTA
#define MOUSEKEY_MOVE_DELTA 5

#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 0
