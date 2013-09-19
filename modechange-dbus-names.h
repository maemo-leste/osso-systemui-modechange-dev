#if 0
typedef enum {
  DEVMODE_NORMAL = 0, /* Normal mode */
  DEVMODE_FLIGHT,     /* Flight mode */
  DEVMODE_OFFLINE,    /* Offline mode; unsupported! */
  DEVMODE_INVALID     /* Should *never* occur! */
} devmode_t;
#endif

#if 0
typedef enum {
  MODE_NORMAL = 0, /* Normal mode */
  MODE_FLIGHT,     /* Flight mode */
  MODE_OFFLINE,    /* Offline mode; unsupported! */
  MODE_INVALID     /* Should *never* occur! */
} mode_t;
#endif

#define SYSTEMUI_MODECHANGE_OPEN_REQ "modechange_open"

#define SYSTEMUI_MODECHANGE_CLOSE_REQ "modechange_close"

typedef enum {
	MODECHANGE_TO_NORMALMODE = 0,
	MODECHANGE_TO_FLIGHTMODE = 1
} modechange_t;

typedef enum {
	MODECHANGE_RESPONSE_OK = 0,
	MODECHANGE_RESPONSE_CANCEL = 1
} modechange_response_t;
