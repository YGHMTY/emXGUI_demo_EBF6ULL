
#ifndef	__X_COMMDLG_H__
#define	__X_COMMDLG_H__

#ifdef	__cplusplus
extern	"C"{
#endif

#include "def.h"
#include "emXGUI.h"
/*===================================================================================*/

BOOL	CDlg_FileExpoler(HWND hwndParent,int x,int y,int w,int h,const WCHAR *Name,const char *cur_dir,char *out);
LRESULT	WinProc_FileExpoler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);

/*===================================================================================*/

#ifdef	__cplusplus
}
#endif
#endif
