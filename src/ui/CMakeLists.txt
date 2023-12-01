SET(SOURCES screens/ui_Screen1.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_bolt_circle_fill_png.c
    images/ui_img_bolt_fill_white_png.c
    images/ui_img_water_waves_orange_png.c)

add_library(ui ${SOURCES})
