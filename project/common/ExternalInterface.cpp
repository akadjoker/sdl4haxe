#ifndef STATIC_LINK
#define IMPLEMENT_API
#endif

#if defined(HX_WINDOWS) || defined(HX_MACOS) || defined(HX_LINUX)
#define NEKO_COMPATIBLE
#endif
    
#include <hx/CFFI.h>
#include "Utils.h"
#include "ExternalInterface.h"

#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_OUTLINE_H
#include FT_STROKER_H
#include FT_GLYPH_H
#include FT_TRUETYPE_IDS_H

#ifdef __ANDROID__
#include <jni.h>
#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT void JNICALL  Java_org_libsdl_app_SDLActivity_nativeRun(JNIEnv* env, jclass cls, jobject obj)
{
SDL_nativeRun();
}
#ifdef __cplusplus
}
#endif

#endif /* __ANDROID__ */

AutoGCRoot *onRender;

int videowidth;
int videoheight;

DEFINE_KIND(SVOID);
DEFINE_KIND(SWindow);
DEFINE_KIND(SRenderer);
DEFINE_KIND(SSurface);
DEFINE_KIND(STexture);
DEFINE_KIND(STTF);

void startSDL()
{

	if( SDL_Init( SDL_INIT_EVERYTHING ) < 0 )
	{
		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
		
	}
	 int count = SDL_GetNumAudioDevices(0), i;
  for (i = 0; i < count; ++i ) {
    printf( "Audio device %d: %s\n", i, SDL_GetAudioDeviceName(i, 0));
  }
	
if( TTF_Init() == -1 )
				{
					printf( "SDL_ttf could not initialize! SDL_ttf Error: %s\n", TTF_GetError() );
					
				}
				
 #ifdef HX_WINDOWS
   int chunksize = 2048;
   #else
   int chunksize = 4096;
   #endif
   
   int frequency = 44100;
   //int frequency = MIX_DEFAULT_FREQUENCY //22050
   //The default frequency would have less latency, but is incompatible with the average MP3 file
   
   if (Mix_OpenAudio(frequency, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, chunksize) != 0)
   {
      printf("Could not open sound: %s\n", Mix_GetError());
     
  }				
				
}
	
value hx_log(value str) 
{
 SDL_Log(val_string(str));
 return alloc_int(1);
}


 void hx_quit()
{   
	 SDL_Quit();
	 exit(0);
	
} 

 value hx_GetTicks()
{   
	return alloc_int(	SDL_GetTicks());
} 



 value sdl_main(value _onPaint) 
{
        	#if HX_WINDOWS   
               onRender = new AutoGCRoot(_onPaint);
			   startSDL();
			   val_call0(onRender->get()); 
			 #else
			   onRender = new AutoGCRoot(_onPaint);
		     #endif
		return alloc_int(1);
}
DEFINE_PRIM(hx_GetTicks, 0);
DEFINE_PRIM(sdl_main, 1);
DEFINE_PRIM(hx_quit, 0);
DEFINE_PRIM(hx_log, 1);
	
int main(int argc, char **argv)
{
    startSDL();
	return 0;
}

void SDL_nativeRun()
{
    val_call0(onRender->get()); 
}


//********************************************************************************************************
//***********************************window***************************************************************
//********************************************************************************************************


void free_window(value window) {
	SDL_Window *s = (SDL_Window *) val_to_kind(window, SWindow);
	SDL_DestroyWindow(s);
	
}

 value hx_DestroyWindow(value window)
{
	free_window(window);
    return alloc_int(1);
}

 value hx_CreateWindow( value *args, int nargs)  //value caption, value x, value y, value w,
                           //                           value h, value flags)
{
	//SDL_Window* window=SDL_CreateWindow(ValueToString(caption),ValueToInt(x),ValueToInt(y),ValueToInt(w),ValueToInt(h),ValueToInt(flags));
	SDL_Window* window=SDL_CreateWindow(ValueToString(args[0]),ValueToInt(args[1]),ValueToInt(args[2]),ValueToInt(args[3]),ValueToInt(args[4]),ValueToInt(args[5]));

	
	videowidth=ValueToInt(args[3]);
	videoheight=ValueToInt(args[4]);
	
	if (window==0)  return alloc_null();
	value v = alloc_abstract( SWindow, window);
	val_gc( v, free_window);
	return v;
}


 SDL_Event event;  
   

 value hx_PollEvent( )
{

  //  SDL_Event event;    
    int result= SDL_PollEvent( &event );
	/*
	switch (event.type)
      {
      case SDL_FINGERMOTION:

        SDL_Log("Finger: %i,x: %i, y: %i",event.tfinger.fingerId,event.tfinger.x,event.tfinger.y);

        break;
      case SDL_FINGERDOWN:

        SDL_Log("Finger: %i down - x: %i, y: %i",event.tfinger.fingerId,event.tfinger.x,event.tfinger.y);

        break;
      case SDL_FINGERUP:

        SDL_Log("Finger: %i up - x: %i, y: %i",event.tfinger.fingerId,event.tfinger.x,event.tfinger.y);

        break;
      case SDL_MULTIGESTURE:

        SDL_Log("Multi Gesture: x = %f, y = %f, dAng = %f, dR = %f",
           event.mgesture.x,
           event.mgesture.y,
           event.mgesture.dTheta,
           event.mgesture.dDist);
        SDL_Log("MG: numDownTouch = %i",event.mgesture.numFingers);

    
        break;
      case SDL_DOLLARGESTURE:
        SDL_Log("Gesture %i performed, error: %f",
           event.dgesture.gestureId,
           event.dgesture.error);
        break;
      case SDL_DOLLARRECORD:
        SDL_Log("Recorded gesture: %i",event.dgesture.gestureId);
        break;
      }
     
	*/
	
	if (result!=0) return alloc_int(event.type);
	return alloc_int(result);
}

value hx_EventType( )
{	
	SDL_PollEvent( &event );
	SDL_PumpEvents();
	return alloc_int(event.type);
}			
value hx_EventKeySym( )
{	
	return alloc_int(event.key.keysym.sym);
}			
value hx_EventScanCode( )
{	
	return alloc_int(event.key.keysym.scancode);
}
value hx_EventMouseButton( )
{	
	return alloc_int(event.button.button);
}
value hx_EventMouseX( )
{	
	return alloc_int(event.motion.x);
}				
value hx_EventMouseY( )
{	
	return alloc_int(event.motion.y);
}				
value hx_EventMouseXrel( )
{	
	return alloc_int(event.motion.xrel);
}				
value hx_EventMouseYrel( )
{	
	return alloc_int(event.motion.yrel);
}	
value hx_WindowEvent( )
{	
	return alloc_int(event.window.event);
}	


value hx_EventFingerId( )
{	
	return alloc_int(event.tfinger.fingerId);
}
value hx_EventFingerX( )
{	
	return alloc_float(event.tfinger.x);
}
value hx_EventFingerY( )
{	
	return alloc_float(event.tfinger.y);
}
value hx_EventFingerPressure( )
{	
	return alloc_float(event.tfinger.pressure);
}
DEFINE_PRIM(hx_EventFingerId, 0);			 
DEFINE_PRIM(hx_EventFingerPressure, 0);	
DEFINE_PRIM(hx_EventFingerX, 0);			 
DEFINE_PRIM(hx_EventFingerY, 0);			 
DEFINE_PRIM(hx_EventKeySym, 0);			 
DEFINE_PRIM(hx_EventScanCode, 0);			 
DEFINE_PRIM(hx_EventMouseX, 0);			 
DEFINE_PRIM(hx_EventMouseY, 0);			 
DEFINE_PRIM(hx_EventMouseXrel, 0);			 
DEFINE_PRIM(hx_EventMouseYrel, 0);			 
DEFINE_PRIM(hx_EventMouseButton, 0);			 

DEFINE_PRIM(hx_WindowEvent, 0);
DEFINE_PRIM(hx_PollEvent, 0);
DEFINE_PRIM(hx_EventType, 0);
DEFINE_PRIM_MULT(hx_CreateWindow);
DEFINE_PRIM(hx_DestroyWindow, 1);
//********************************************************************************************************
//***********************************RENDER***************************************************************
//********************************************************************************************************




void free_render(value render) {
	SDL_Renderer *s = (SDL_Renderer *) val_to_kind(render, SRenderer);
	SDL_DestroyRenderer(s);
}

value hx_DestroyRenderer(value render)
{
free_render(render);
return alloc_int(1);
}
 value hx_CreateRenderer(value window, value flags)
{
	SDL_Window *w = (SDL_Window *) val_to_kind(window, SWindow);
	if (w==0)  return alloc_null();
	
	SDL_Renderer* render=SDL_CreateRenderer(w,-1,ValueToInt(flags));
	SDL_RenderClear( render );
	
	if (render==0)  return alloc_null();
	value v = alloc_abstract( SRenderer, render);
	val_gc( v, free_render);
	return v;
}
value hx_SetRenderDrawColor(value render, value r,value g,value b,value a)
{
SDL_Renderer *ren = (SDL_Renderer *) val_to_kind(render, SRenderer);
if (ren==0)    return alloc_int(0);
SDL_SetRenderDrawColor(ren,ValueToInt(r),ValueToInt(g),ValueToInt(b),ValueToInt(a));
return alloc_int(1);
}

 value  hx_RenderClear(value render)
{
	SDL_Renderer *ren = (SDL_Renderer *) val_to_kind(render, SRenderer);
	if (ren==0)  return alloc_int(0);
	 SDL_RenderClear(ren);
return alloc_int(1);
}
 value hx_RenderPresent(value render)
{ 
	SDL_Renderer *ren = (SDL_Renderer *) val_to_kind(render, SRenderer);
	if (ren==0) return alloc_int(0);
	SDL_RenderPresent(ren);
	return alloc_int(1);
}

 value hx_RenderDrawLine(value render,value x,value y,value x2,value y2)
{ 
	SDL_Renderer *ren = (SDL_Renderer *) val_to_kind(render, SRenderer);
	if (ren==0)  return alloc_int(0);
	SDL_RenderDrawLine(ren,ValueToInt(x),ValueToInt(y),ValueToInt(x2),ValueToInt(y2));
   return alloc_int(1);
}



value hx_RenderDrawRect(value render, value x,value y,value w,value h)
{ 
	SDL_Renderer *ren = (SDL_Renderer *) val_to_kind(render, SRenderer);
	if (ren==0)  return alloc_int(0);
	SDL_Rect rect;
	rect.x=ValueToInt(x);
	rect.y=ValueToInt(y);
	rect.w=ValueToInt(w);
	rect.h=ValueToInt(h);
	SDL_RenderDrawRect(ren,&rect);
	return alloc_int(1);

}

 value hx_RenderFillRect(value render, value x,value y,value w,value h)
{ 
	SDL_Renderer *ren = (SDL_Renderer *) val_to_kind(render, SRenderer);
	if (ren==0)  return alloc_int(0);
	SDL_Rect rect;
	rect.x=ValueToInt(x);
	rect.y=ValueToInt(y);
	rect.w=ValueToInt(w);
	rect.h=ValueToInt(h);
	SDL_RenderFillRect(ren,&rect);
	return alloc_int(1);
}

 value hx_RenderCopy(value *args, int nargs)
{ 
	SDL_Renderer *ren = (SDL_Renderer *) val_to_kind(args[0], SRenderer);
	if (ren==0)  return alloc_int(0);
	
	LTexture *texture = (LTexture *) val_to_kind(args[1], STexture);
	if (texture==0)  return alloc_int(0);
	
	SDL_Rect rect;
	rect.x=ValueToInt(args[2]);
	rect.y=ValueToInt(args[3]);
	rect.w=ValueToInt(args[4]);
	rect.h=ValueToInt(args[5]);
	
	SDL_Rect clip;
	clip.x=ValueToInt(args[6]);
	clip.y=ValueToInt(args[7]);
	clip.w=ValueToInt(args[8]);
	clip.h=ValueToInt(args[9]);
	
	SDL_RenderCopy( ren, texture->mTexture, &clip, &rect);
return alloc_int(1);
}
value hx_RenderCopyEx(value *args, int nargs)
{ 
	SDL_Renderer *ren = (SDL_Renderer *) val_to_kind(args[0], SRenderer);
	if (ren==0)  return alloc_int(0);
	
	LTexture *texture = (LTexture *) val_to_kind(args[1], STexture);
	if (texture==0)  return alloc_int(0);
	SDL_Rect rect;
	rect.x=ValueToInt(args[2]);
	rect.y=ValueToInt(args[3]);
	rect.w=ValueToInt(args[4]);
	rect.h=ValueToInt(args[5]);
	
	SDL_Rect clip;
	clip.x=ValueToInt(args[6]);
	clip.y=ValueToInt(args[7]);
	clip.w=ValueToInt(args[8]);
	clip.h=ValueToInt(args[9]);
	
	SDL_Point center;
	center.x=ValueToInt(args[10]);
	center.y=ValueToInt(args[11]);
	double angle=(double)ValueToFloat(args[12]);
	int flags=ValueToInt(args[13]);
	//SDL_RendererFlip Flip[]={ SDL_FLIP_NONE ,SDL_FLIP_HORIZONTAL ,  SDL_FLIP_VERTICAL};
	SDL_RendererFlip Flip=SDL_RendererFlip(flags);
	SDL_RenderCopyEx( ren, texture->mTexture, &clip, &rect,angle,&center,Flip);
	return alloc_int(1);

}

DEFINE_PRIM(hx_CreateRenderer, 2);
DEFINE_PRIM(hx_SetRenderDrawColor,5);
DEFINE_PRIM(hx_RenderFillRect,5);
DEFINE_PRIM(hx_RenderDrawRect,5);
DEFINE_PRIM(hx_RenderDrawLine, 5);
DEFINE_PRIM(hx_RenderClear, 1);
DEFINE_PRIM(hx_RenderPresent, 1);
DEFINE_PRIM(hx_DestroyRenderer, 1);
DEFINE_PRIM_MULT(hx_RenderCopy);
DEFINE_PRIM_MULT(hx_RenderCopyEx);
//******************************************************************************************************************************
//******************************************************************************************************************************
//***********************************SURFACE************************************************************************************
//******************************************************************************************************************************
void free_texture(value v) {
	LTexture *s = (LTexture *) val_to_kind(v, STexture);
	delete s;
}

 value hx_LoadTexture(value render,value filename)
{
    SDL_Renderer *ren = (SDL_Renderer *) val_to_kind(render, SRenderer);
	if (ren==0)  return alloc_null();
	
  LTexture* texture= new LTexture();
  if (texture->loadFromFile(ren,ValueToString(filename)))
  {
    value v = alloc_abstract( STexture, texture);
	val_gc( v, free_texture);
	return v;
  }
  return alloc_null();
}

 value hx_LoadTextureColorKey(value render,value filename,value r,value g,value b)
{
    SDL_Renderer *ren = (SDL_Renderer *) val_to_kind(render, SRenderer);
	if (ren==0)  return alloc_null();
	
  LTexture* texture= new LTexture();
  if (texture->loadFromFileCk(ren,ValueToString(filename),ValueToInt(r),ValueToInt(g),ValueToInt(b)))
  {
    value v = alloc_abstract( STexture, texture);
	val_gc( v, free_texture);
	return v;
  }
 return alloc_null();
}


 value hx_TextureWidth(value t)
{ 
	LTexture *texture = (LTexture *) val_to_kind(t, STexture);
	if (texture==0)  return alloc_int(0);
	return alloc_int(texture->mWidth);
	
}
static value hx_TextureHeight(value t)
{ 
	LTexture *texture = (LTexture *) val_to_kind(t, STexture);
	if (texture==0)  return alloc_int(0);
	return alloc_int(texture->mHeight);
	
}
DEFINE_PRIM(hx_TextureWidth, 1);
DEFINE_PRIM(hx_TextureHeight, 1);
DEFINE_PRIM(hx_LoadTexture, 2);
DEFINE_PRIM(hx_LoadTextureColorKey, 5);

//******************************************************************************************************************************
//******************************************************************************************************************************
//***********************************TTF************************************************************************************
//******************************************************************************************************************************
void free_font(value v) {
	TTF_Font *s = (TTF_Font *) val_to_kind(v, STTF);
	TTF_CloseFont(s);
	s=NULL;
}

 value hx_LoadFont(value filename,value size)
{


  TTF_Font *gFont = TTF_OpenFont( ValueToString(filename), ValueToInt(size) );
 
  if( gFont )
	{
    
	 

	value v = alloc_abstract( STTF, gFont);
	val_gc( v, free_font);
	
	return v;
	}
	
 return alloc_null();
}

 value hx_RenderText_Solid(value *args, int nargs)
{ 
	SDL_Renderer *ren = (SDL_Renderer *) val_to_kind(args[0], SRenderer);
	if (ren==0)  return alloc_int(0);
	TTF_Font *font = (TTF_Font *) val_to_kind(args[1], STTF);
	if (font==0)  return alloc_int(0);
	const char* text=ValueToString(args[2]);
    
	SDL_Color textColor = { 255, 255, 255 };
	
	
	SDL_Surface* textSurface = TTF_RenderText_Solid( font, text, textColor );
	SDL_Texture* mTexture= SDL_CreateTextureFromSurface( ren, textSurface );
	SDL_Rect clip = { 0,0, textSurface->w, textSurface->h  };
	SDL_Rect src = { ValueToInt(args[3]), ValueToInt(args[4]), textSurface->w, textSurface->h };
	SDL_RenderCopy( ren, mTexture, &clip, &src);
	SDL_FreeSurface( textSurface );
	
	return alloc_int(1);
}
 value hx_RenderText_Solid_Color(value *args, int nargs)
{ 
	SDL_Renderer *ren = (SDL_Renderer *) val_to_kind(args[0], SRenderer);
	if (ren==0)  return alloc_int(0);
	TTF_Font *font = (TTF_Font *) val_to_kind(args[1], STTF);
	if (font==0)  return alloc_int(0);
	const char* text=ValueToString(args[2]);
    
	SDL_Color textColor = { ValueToInt(args[5]), ValueToInt(args[6]), ValueToInt(args[7]) };
	
	
	SDL_Surface* textSurface = TTF_RenderText_Solid( font, text, textColor );
	SDL_Texture* mTexture= SDL_CreateTextureFromSurface( ren, textSurface );
	SDL_Rect clip = { 0,0, textSurface->w, textSurface->h  };
	SDL_Rect src = { ValueToInt(args[3]), ValueToInt(args[4]), textSurface->w, textSurface->h };
	SDL_RenderCopy( ren, mTexture, &clip, &src);
	SDL_FreeSurface( textSurface );
	
	return alloc_int(1);
}
DEFINE_PRIM(hx_LoadFont, 2);
DEFINE_PRIM_MULT(hx_RenderText_Solid);
DEFINE_PRIM_MULT(hx_RenderText_Solid_Color);
//******************************************************************************************************************************
//******************************************************************************************************************************
//******************************************************************************************************************************
//******************************************************************************************************************************

/*
//The window we'll be rendering to
SDL_Window* gWindow = NULL;
SDL_Renderer* render = NULL;




//Render flag
bool gRenderQuad = true;

bool initsdl(int w,int h,bool gl)
{

        

	
		
		#if HX_WINDOWS
		  gWindow = SDL_CreateWindow("SDL Haxe", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h,  SDL_WINDOW_SHOWN);
		 //  SDL_CreateWindowAndRenderer(w, h, 0, &gWindow, &render);
		 #else
		 gWindow = SDL_CreateWindow("SDL Haxe", 0, 0,  w, h, SDL_WINDOW_FULLSCREEN |  SDL_WINDOW_SHOWN);
		 //SDL_CreateWindowAndRenderer(0, 0, 0, &gWindow, &render);
		 #endif
		 
		
		 IMG_Init(IMG_INIT_JPG | IMG_INIT_PNG);
		
		
        render = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC );
		SDL_RenderClear( render );
		 
	


	return true;
}



void close()
{
    SDL_Log("sdl close !");
	SDL_DestroyWindow( gWindow );
	onRender=NULL;
	gWindow = NULL;
	SDL_Quit();
} 






int sdlLoop()
{

		   SDL_Event e;
			while( SDL_PollEvent( &e ) != 0 )
			{
				if( e.type == SDL_QUIT )
				{
					break;
				}
			   return  e.type;
	        }		
	return 0;
}


value sdl_Setup(value width, value height)
{
		initsdl(ValueToInt(width),ValueToInt(height),false);
		return alloc_int(1);
}
DEFINE_PRIM(sdl_Setup, 2);

value sdl_PollEvent() 
{
        int result=sdlLoop();
		return alloc_int(result);
}
DEFINE_PRIM(sdl_PollEvent, 0);


value sdl_Flip() 
{
                SDL_SetRenderDrawColor( render, 0xFF, 0, 0, 0xFF );
			    SDL_RenderClear( render );
			    SDL_SetRenderDrawColor( render, 0x00, 0x00, 0xFF, 0xFF );		
				SDL_RenderDrawLine( render, 0, 0, 480,320 );
			    SDL_RenderPresent( render );
				
			return alloc_int(1);
}
DEFINE_PRIM(sdl_Flip, 0);

	        
				




//*************************************************************************


*/





extern "C" void sdlhaxe_main () 
{
val_int(0); // Fix Neko init
//SWindow = alloc_kind();
//S/Renderer = alloc_kind();
//SEvent = alloc_kind();
 
 
}
DEFINE_ENTRY_POINT (sdlhaxe_main);
extern "C" int sdlhaxe_register_prims () { return 0; }