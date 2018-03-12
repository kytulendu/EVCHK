#include <stddef.h>
#include <windows.h>

struct murr {
    int check1;
    int check2;
    int int1;
    BYTE byte1;
    BYTE byte2;
    BYTE string1[5];
    BYTE byte3;
    BYTE string2[13];
    BYTE byte4;
    DWORD long1;
    DWORD long2;
    int int2;
    int int3;
    int int4;
    int int5;
    BYTE string3[9];
    BYTE byte5;
    BYTE byte6;
    BYTE byte7;
    BYTE byte8;
    BYTE byte9;
    int int6;
    int int7;
    BYTE string4[11];
};

#pragma off (unreferenced);
BOOL FAR PASCAL LibMain( HINSTANCE hInstance, WORD wDataSegment,
                         WORD wHeapSize, LPSTR lpszCmdLine )
#pragma on (unreferenced);
{
    return( 1 );
}

int __export FAR PASCAL EVCheck( struct murr *purr )
{
    purr->check1 = 0;
    purr->check2 = 7;

    /*
	MessageBox( NULL, "OK", "EVCheck", MB_OK | MB_TASKMODAL );
	*/
    return( 0 );
}

#pragma off (unreferenced);
int FAR PASCAL WEP( int nParameter )
#pragma on (unreferenced);
{
    return( 1 );
}
