#ifndef INCLUDED_sdl_Sdl
#define INCLUDED_sdl_Sdl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(sdl,Sdl)
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  Sdl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Sdl_obj OBJ_;
		Sdl_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Sdl_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sdl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Sdl"); }

		static int WINDOWEVENT_NONE;
		static int WINDOWEVENT_SHOWN;
		static int WINDOWEVENT_HIDDEN;
		static int WINDOWEVENT_EXPOSED;
		static int WINDOWEVENT_MOVED;
		static int WINDOWEVENT_RESIZED;
		static int WINDOWEVENT_SIZE_CHANGED;
		static int WINDOWEVENT_MINIMIZED;
		static int WINDOWEVENT_MAXIMIZED;
		static int WINDOWEVENT_RESTORED;
		static int WINDOWEVENT_ENTER;
		static int WINDOWEVENT_LEAVE;
		static int WINDOWEVENT_FOCUS_GAINED;
		static int WINDOWEVENT_FOCUS_LOST;
		static int WINDOWEVENT_CLOSE;
		static int BUTTON_LEFT;
		static int BUTTON_MIDDLE;
		static int BUTTON_RIGHT;
		static int FIRSTEVENT;
		static int QUIT;
		static int WINDOWEVENT;
		static int KEYDOWN;
		static int KEYUP;
		static int MOUSEMOTION;
		static int MOUSEBUTTONDOWN;
		static int MOUSEBUTTONUP;
		static int MOUSEWHEEL;
		static int JOYAXISMOTION;
		static int CONTROLLERAXISMOTION;
		static int FINGERDOWN;
		static int FINGERUP;
		static int FINGERMOTION;
		static int DOLLARGESTURE;
		static int DOLLARRECORD;
		static int MULTIGESTURE;
		static int CLIPBOARDUPDATE;
		static int DROPFILE;
		static int RENDER_TARGETS_RESET;
		static int USEREVENT;
		static int LASTEVENT;
		static int FLIP_NONE;
		static int FLIP_HORIZONTAL;
		static int FLIP_VERTICAL;
		static int RENDERER_SOFTWARE;
		static int RENDERER_ACCELERATED;
		static int RENDERER_PRESENTVSYNC;
		static int RENDERER_TARGETTEXTURE;
		static int WINDOWPOS_CENTERED;
		static int WINDOWPOS_UNDEFINED;
		static int WINDOW_FULLSCREEN;
		static int WINDOW_OPENGL;
		static int WINDOW_SHOWN;
		static int WINDOW_HIDDEN;
		static int WINDOW_BORDERLESS;
		static int WINDOW_RESIZABLE;
		static int WINDOW_MINIMIZED;
		static int WINDOW_MAXIMIZED;
		static int WINDOW_INPUT_GRABBED;
		static int WINDOW_INPUT_FOCUS;
		static int WINDOW_MOUSE_FOCUS;
		static int WINDOW_FULLSCREEN_DESKTOP;
		static int WINDOW_FOREIGN;
		static int WINDOW_ALLOW_HIGHDPI;
		static Void Log( ::String str);
		static Dynamic Log_dyn();

		static Void Quit( );
		static Dynamic Quit_dyn();

		static int GetTicks( );
		static Dynamic GetTicks_dyn();

		static int mouseX( );
		static Dynamic mouseX_dyn();

		static int mouseY( );
		static Dynamic mouseY_dyn();

		static Float fingerX( );
		static Dynamic fingerX_dyn();

		static Float fingerY( );
		static Dynamic fingerY_dyn();

		static int touchX( );
		static Dynamic touchX_dyn();

		static int touchY( );
		static Dynamic touchY_dyn();

		static Dynamic sdl_main;
		static Dynamic &sdl_main_dyn() { return sdl_main;}
		static Dynamic hx_log;
		static Dynamic &hx_log_dyn() { return hx_log;}
		static Dynamic hx_quit;
		static Dynamic &hx_quit_dyn() { return hx_quit;}
		static Dynamic hx_GetTicks;
		static Dynamic &hx_GetTicks_dyn() { return hx_GetTicks;}
		static Dynamic hx_CreateWindow;
		static Dynamic &hx_CreateWindow_dyn() { return hx_CreateWindow;}
		static Dynamic hx_DestroyWindow;
		static Dynamic &hx_DestroyWindow_dyn() { return hx_DestroyWindow;}
		static Dynamic hx_PollEvent;
		static Dynamic &hx_PollEvent_dyn() { return hx_PollEvent;}
		static Dynamic hx_EventType;
		static Dynamic &hx_EventType_dyn() { return hx_EventType;}
		static Dynamic hx_WindowEvent;
		static Dynamic &hx_WindowEvent_dyn() { return hx_WindowEvent;}
		static Dynamic hx_EventKeySym;
		static Dynamic hx_EventScanCode;
		static Dynamic hx_EventMouseButton;
		static Dynamic hx_EventMouseX;
		static Dynamic &hx_EventMouseX_dyn() { return hx_EventMouseX;}
		static Dynamic hx_EventMouseY;
		static Dynamic &hx_EventMouseY_dyn() { return hx_EventMouseY;}
		static Dynamic hx_EventMouseXrel;
		static Dynamic hx_EventMouseYrel;
		static Dynamic hx_EventFingerId;
		static Dynamic hx_EventFingerX;
		static Dynamic &hx_EventFingerX_dyn() { return hx_EventFingerX;}
		static Dynamic hx_EventFingerY;
		static Dynamic &hx_EventFingerY_dyn() { return hx_EventFingerY;}
		static Dynamic hx_CreateRenderer;
		static Dynamic &hx_CreateRenderer_dyn() { return hx_CreateRenderer;}
		static Dynamic hx_DestroyRenderer;
		static Dynamic &hx_DestroyRenderer_dyn() { return hx_DestroyRenderer;}
		static Dynamic hx_SetRenderDrawColor;
		static Dynamic &hx_SetRenderDrawColor_dyn() { return hx_SetRenderDrawColor;}
		static Dynamic hx_RenderClear;
		static Dynamic &hx_RenderClear_dyn() { return hx_RenderClear;}
		static Dynamic hx_RenderPresent;
		static Dynamic &hx_RenderPresent_dyn() { return hx_RenderPresent;}
		static Dynamic hx_RenderFillRect;
		static Dynamic &hx_RenderFillRect_dyn() { return hx_RenderFillRect;}
		static Dynamic hx_RenderDrawRect;
		static Dynamic &hx_RenderDrawRect_dyn() { return hx_RenderDrawRect;}
		static Dynamic hx_RenderDrawLine;
		static Dynamic &hx_RenderDrawLine_dyn() { return hx_RenderDrawLine;}
		static Dynamic hx_LoadTexture;
		static Dynamic &hx_LoadTexture_dyn() { return hx_LoadTexture;}
		static Dynamic hx_LoadTextureColorKey;
		static Dynamic &hx_LoadTextureColorKey_dyn() { return hx_LoadTextureColorKey;}
		static Dynamic hx_TextureWidth;
		static Dynamic &hx_TextureWidth_dyn() { return hx_TextureWidth;}
		static Dynamic hx_TextureHeight;
		static Dynamic &hx_TextureHeight_dyn() { return hx_TextureHeight;}
		static Dynamic hx_LoadFont;
		static Dynamic &hx_LoadFont_dyn() { return hx_LoadFont;}
		static Dynamic hx_RenderText_Solid;
		static Dynamic &hx_RenderText_Solid_dyn() { return hx_RenderText_Solid;}
		static Dynamic hx_RenderText_Solid_Color;
		static Dynamic &hx_RenderText_Solid_Color_dyn() { return hx_RenderText_Solid_Color;}
		static Dynamic hx_RenderCopy;
		static Dynamic &hx_RenderCopy_dyn() { return hx_RenderCopy;}
		static Dynamic hx_RenderCopyEx;
		static Dynamic &hx_RenderCopyEx_dyn() { return hx_RenderCopyEx;}
};

} // end namespace sdl

#endif /* INCLUDED_sdl_Sdl */ 
