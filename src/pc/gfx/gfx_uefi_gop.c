#ifdef TARGET_EFI

#include <uefi.h>

#include "gfx_uefi_gop.h"
#include "../common.h"
#include "../configfile.h"

static void gfx_gop_init(UNUSED const char *game_name, UNUSED bool start_in_fullscreen) {
}

static void gfx_gop_set_keyboard_callbacks(UNUSED bool (*on_key_down)(int scancode), UNUSED bool (*on_key_up)(int scancode), UNUSED void (*on_all_keys_up)(void)) { }

static void gfx_gop_set_fullscreen_changed_callback(UNUSED void (*on_fullscreen_changed)(bool is_now_fullscreen)) { }

static void gfx_gop_set_fullscreen(UNUSED bool enable) { }

struct GfxWindowManagerAPI gfx_uefi_gop =
{
    gfx_gop_init,
    gfx_gop_set_keyboard_callbacks,
    gfx_gop_set_fullscreen_changed_callback,
    gfx_gop_set_fullscreen,
    gfx_gop_main_loop,
    gfx_gop_get_dimensions,
    gfx_gop_handle_events,
    gfx_gop_start_frame,
    gfx_gop_swap_buffers_begin,
    gfx_gop_swap_buffers_end,
    gfx_gop_get_time,
    gfx_gop_shutdown
};
#endif /* defined(TARGET_EFI) */
