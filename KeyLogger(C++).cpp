#include <iostrem.ccp>
#include <windows.h>

const wchar_t CLASS_NAME[]  = L"Sample Window Class";

WNDCLASS wc = { };

wc.lpfnWndProc   = WindowProc;
wc.hInstance     = hInstance;
wc.lpszClassName = CLASS_NAME;

RegisterClass(&wc);


HWND hwnd = CreateWindowEx(
    
    CLASS_NAME,                     
    L"Learn to Program Windows",    
    WS_OVERLAPPEDWINDOW,            

    
    CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

    NULL,           
    NULL,       
    hInstance,  
    NULL        
    );

if (hwnd == NULL)
{
    return 0;
}

ShowWindow(hwnd, nCmdShow);