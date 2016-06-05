#ifndef DEF_GUI_COMMON
#define DEF_GUI_COMMON

/**
 * Common enum types definitions
 */

typedef enum GUI_WindowType { ASK_YES_NO, INFORMATION } GUI_WindowType;
typedef enum GUI_WindowAnswer { NOTHING, CLOSE, YES, NO, OK } GUI_WindowAnswer;
typedef enum GUI_Anchor { TOP_LEFT, TOP_RIGHT, BOTTOM_LEFT, BOTTOM_RIGHT } GUI_Anchor;
typedef enum GUI_Bool { FALSE, TRUE } GUI_Bool;

/**
 * Common properties
 */

#define GUI_CENTERED 2147483647

/**
 * Buttons defaults properties
 */

#define GUI_BUTTON_DEFAULT_BORDER_SIZE 1
#define GUI_BUTTON_DEFAULT_BORDER_COLOR "000000"
#define GUI_BUTTON_DEFAULT_CONTENT_COLOR "FFFFFF"
#define GUI_BUTTON_DEFAULT_CONTENT_HOVER_COLOR "BBBBBB"
#define GUI_BUTTON_DEFAULT_TEXT_COLOR "000000"

#define GUI_BUTTON_MAXSIZETEXT 256

/**
 * ProgressBars defaults properties
 */

#define GUI_PROGRESSBAR_DEFAULT_BORDER_SIZE 1
#define GUI_PROGRESSBAR_DEFAULT_BORDER_COLOR "000000"
#define GUI_PROGRESSBAR_DEFAULT_BACKGROUND_COLOR "FFFFFF"
#define GUI_PROGRESSBAR_DEFAULT_CONTENT_COLOR "00FF00"
#define GUI_PROGRESSBAR_DEFAULT_MINVALUE 0
#define GUI_PROGRESSBAR_DEFAULT_MAXVALUE 100

/**
 * Menus defaults properties
 */

#define GUI_MENU_DEFAULT_BORDER_SIZE 1
#define GUI_MENU_DEFAULT_BORDER_COLOR "000000"
#define GUI_MENU_DEFAULT_BACKGROUND_COLOR "FFFFFF"

/**
 * Inputs defaults properties
 */

#define GUI_INPUT_DEFAULT_BORDER_SIZE 1
#define GUI_INPUT_DEFAULT_BORDER_COLOR "000000"
#define GUI_INPUT_DEFAULT_BACKGROUND_COLOR "FFFFFF"
#define GUI_INPUT_DEFAULT_BACKGROUND_HOVER_COLOR "999999"
#define GUI_INPUT_DEFAULT_TEXT_COLOR "000000"
#define GUI_INPUT_DEFAULT_TEXT_OFFSET 8

#define GUI_INPUT_DEFAULT_PLACEHOLDER "Entrez du texte..."

#define GUI_INPUT_MAXSIZETEXT 512

/**
 * Windows defaults properties
 */

#define GUI_WINDOW_DEFAULT_BORDER_SIZE 1
#define GUI_WINDOW_DEFAULT_BORDER_COLOR "000000"
#define GUI_WINDOW_DEFAULT_BACKGROUND_COLOR "FFFFFF"
#define GUI_WINDOW_DEFAULT_HEADER_COLOR "888888"
#define GUI_WINDOW_DEFAULT_MENU_COLOR "888888"
#define GUI_WINDOW_DEFAULT_TEXT_COLOR "000000"

#define GUI_WINDOW_DEFAULT_HEADER_OFFSET 4

#define GUI_WINDOW_DEFAULT_HEADER_PERCENT_HEIGHT 15

#define GUI_WINDOW_MAXSIZETEXT_HEADER 64
#define GUI_WINDOW_MAXSIZETEXT_CONTENT 2048

#endif
