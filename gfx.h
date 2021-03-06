/* gfx.h
   10.21.95 by Abe Pralle
*/


#define MAXSHAPE 300

void Txt(WORD x,WORD y,CHAR *str,WORD len);
WORD TxtLength(CHAR *str,WORD len);
void SetPalette(WORD n);
void SetColor(WORD n);

void Blit24(WORD x,WORD y,WORD image);
void BlitMask24(WORD x,WORD y,WORD image);
void Blit(WORD x,WORD y,WORD image);
void BlitMask(WORD x,WORD y,WORD image);
void LittleTile(WORD x,WORD y,WORD image);

void GetLevelName(char *lname,WORD firsttime);
ULONG Timer(void);
void WasteTime(void);
void SetMousePos(WORD x,WORD y);
void CheckMouse(void);
void ChangeMouse(WORD n);
void Frame(WORD x,WORD y,WORD width,WORD height,WORD c1,WORD c2);
void FilledFrame(WORD x,WORD y,WORD width,WORD height,WORD c1,WORD c2,WORD c3);
void Boxf(WORD x,WORD y,WORD width,WORD height,WORD c1);
void Pause(LONG n);
void LoadScreen(LONG n);
void FadeIn(void);

void ScreenSwap(void);
void Clear();
void LoadShapes(char *filename,WORD pos);

void PlaySound(int n);

void gfxInit(void);
void cleanExit(WORD retval);

