#ifndef __ATHW_ERRNO_H__
#define __ATHW_ERRNO_H__

#include <errno.h>


#ifndef ESNULLP
#define ESNULLP         ( 400 )       /*!< null ptr                    */
#endif

#ifndef ESZEROL
#define ESZEROL         ( 401 )       /*!< length is zero              */
#endif

#ifndef ESLEMIN
#define ESLEMIN         ( 402 )       /*!< length is below min         */
#endif

#ifndef ESLEMAX
#define ESLEMAX         ( 403 )       /*!< length exceeds max          */
#endif

#ifndef ESOVRLP
#define ESOVRLP         ( 404 )       /*!< overlap undefined           */
#endif

#ifndef ESEMPTY
#define ESEMPTY         ( 405 )       /*!< empty string                */
#endif

#ifndef ESNOSPC
#define ESNOSPC         ( 406 )       /*!< not enough space for s2     */
#endif

#ifndef ESUNTERM
#define ESUNTERM        ( 407 )       /*!< unterminated string         */
#endif

#ifndef ESNODIFF
#define ESNODIFF        ( 408 )       /*!< no difference               */
#endif

#ifndef ESNOTFND
#define ESNOTFND        ( 409 )       /*!< not found                   */
#endif

/* Additional for safe snprintf_s interfaces                         */
#ifndef ESBADFMT
#define ESBADFMT        ( 410 )       /**< bad format string           */
#endif

#ifndef ESFMTTYP
#define ESFMTTYP        ( 411 )       //!< bad format type            
#endif

///< EOK may or may not be defined in errno.h 
#ifndef EOK
#define EOK             ( 0 )
#endif

#endif /* __ATHW_ERRNO_H__ */
