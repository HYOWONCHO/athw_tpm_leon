#ifndef __athw_config_h
#define __athw_config_h

#ifdef __cplusplus
extern "C" {
#endif

 /* Define safe_lib version number */
#define ATHW_VERSION_MAJOR 1
#define ATHW_VERSION_MINOR 2
#define ATHW_VERSION_PATCH 0
#define ATHW_VERSION_STRING "1.2.0"

#define ATHW_VERSION_NUM(a,b,c) (((a) << 16L) | ((b) << 8) | (c))
#define ATHW_VERSION \
  ATHW_VERSION_NUM(ATHW_VERSION_MAJOR, \
                    ATHW_VERSION_MINOR, \
                    ATHW_VERSION_PATCH)

#ifdef __cplusplus
}
#endif
#endif
