
#include	"GUI_Drv.h"

#if	GUI_MOUSE_EN

/*============================================================================*/

BOOL	gdrvMouseHardInit(void)
{
	nRF24L01_Startup();
	return TRUE;
}

/*============================================================================*/
#endif
