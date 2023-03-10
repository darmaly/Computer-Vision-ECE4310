
#define SQR(x) ((x)*(x))	/* macro for square */
#ifndef M_PI			/* in case M_PI not found in math.h */
#define M_PI 3.1415927
#endif
#ifndef M_E
#define M_E 2.718282
#endif

#define MAX_FILENAME_CHARS	320
#define MAX_QUEUE 10000

char	filename[MAX_FILENAME_CHARS];

HWND	MainWnd;

		// Display flags
int		ShowPixelCoords;

		//Event flags
int		PlayMode;
int		StepMode;
int		centDist;
int		threadStatus;
int		threadCount;
int		pixelIntensity;
int		pixDlg;
int		modeDlg;
int		clickx, clicky;
int		jPress;
int		rg_thread;
int		count;
int		rowGlobal;
int		colGlobal;
int		Rval, Gval, Bval;

char	intensity[256];
char	dist[256];
CHOOSECOLOR color;
COLORREF custColor[16];
DWORD rgbCurrent;
HBRUSH brush;
		// Image data
unsigned char	*OriginalImage;
int				ROWS,COLS;
int				*indices; 

#define TIMER_SECOND	1			/* ID of timer used for animation */

		// Drawing flags
int		TimerRow,TimerCol;
int		ThreadRow,ThreadCol;
int		ThreadRunning;

		// Function prototypes
LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);
void PaintImage();
void AnimationThread(void *);		/* passes address of window */
void RegionGrow(void *);			/* Based on region-grow code from in class, passes address of window */