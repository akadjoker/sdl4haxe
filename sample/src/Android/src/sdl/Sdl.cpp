#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_sdl_Sdl
#include <sdl/Sdl.h>
#endif
namespace sdl{

Void Sdl_obj::__construct()
{
	return null();
}

//Sdl_obj::~Sdl_obj() { }

Dynamic Sdl_obj::__CreateEmpty() { return  new Sdl_obj; }
hx::ObjectPtr< Sdl_obj > Sdl_obj::__new()
{  hx::ObjectPtr< Sdl_obj > result = new Sdl_obj();
	result->__construct();
	return result;}

Dynamic Sdl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sdl_obj > result = new Sdl_obj();
	result->__construct();
	return result;}

int Sdl_obj::WINDOWEVENT_NONE;

int Sdl_obj::WINDOWEVENT_SHOWN;

int Sdl_obj::WINDOWEVENT_HIDDEN;

int Sdl_obj::WINDOWEVENT_EXPOSED;

int Sdl_obj::WINDOWEVENT_MOVED;

int Sdl_obj::WINDOWEVENT_RESIZED;

int Sdl_obj::WINDOWEVENT_SIZE_CHANGED;

int Sdl_obj::WINDOWEVENT_MINIMIZED;

int Sdl_obj::WINDOWEVENT_MAXIMIZED;

int Sdl_obj::WINDOWEVENT_RESTORED;

int Sdl_obj::WINDOWEVENT_ENTER;

int Sdl_obj::WINDOWEVENT_LEAVE;

int Sdl_obj::WINDOWEVENT_FOCUS_GAINED;

int Sdl_obj::WINDOWEVENT_FOCUS_LOST;

int Sdl_obj::WINDOWEVENT_CLOSE;

int Sdl_obj::BUTTON_LEFT;

int Sdl_obj::BUTTON_MIDDLE;

int Sdl_obj::BUTTON_RIGHT;

int Sdl_obj::FIRSTEVENT;

int Sdl_obj::QUIT;

int Sdl_obj::WINDOWEVENT;

int Sdl_obj::KEYDOWN;

int Sdl_obj::KEYUP;

int Sdl_obj::MOUSEMOTION;

int Sdl_obj::MOUSEBUTTONDOWN;

int Sdl_obj::MOUSEBUTTONUP;

int Sdl_obj::MOUSEWHEEL;

int Sdl_obj::JOYAXISMOTION;

int Sdl_obj::CONTROLLERAXISMOTION;

int Sdl_obj::FINGERDOWN;

int Sdl_obj::FINGERUP;

int Sdl_obj::FINGERMOTION;

int Sdl_obj::DOLLARGESTURE;

int Sdl_obj::DOLLARRECORD;

int Sdl_obj::MULTIGESTURE;

int Sdl_obj::CLIPBOARDUPDATE;

int Sdl_obj::DROPFILE;

int Sdl_obj::RENDER_TARGETS_RESET;

int Sdl_obj::USEREVENT;

int Sdl_obj::LASTEVENT;

int Sdl_obj::FLIP_NONE;

int Sdl_obj::FLIP_HORIZONTAL;

int Sdl_obj::FLIP_VERTICAL;

int Sdl_obj::RENDERER_SOFTWARE;

int Sdl_obj::RENDERER_ACCELERATED;

int Sdl_obj::RENDERER_PRESENTVSYNC;

int Sdl_obj::RENDERER_TARGETTEXTURE;

int Sdl_obj::WINDOWPOS_CENTERED;

int Sdl_obj::WINDOWPOS_UNDEFINED;

int Sdl_obj::WINDOW_FULLSCREEN;

int Sdl_obj::WINDOW_OPENGL;

int Sdl_obj::WINDOW_SHOWN;

int Sdl_obj::WINDOW_HIDDEN;

int Sdl_obj::WINDOW_BORDERLESS;

int Sdl_obj::WINDOW_RESIZABLE;

int Sdl_obj::WINDOW_MINIMIZED;

int Sdl_obj::WINDOW_MAXIMIZED;

int Sdl_obj::WINDOW_INPUT_GRABBED;

int Sdl_obj::WINDOW_INPUT_FOCUS;

int Sdl_obj::WINDOW_MOUSE_FOCUS;

int Sdl_obj::WINDOW_FULLSCREEN_DESKTOP;

int Sdl_obj::WINDOW_FOREIGN;

int Sdl_obj::WINDOW_ALLOW_HIGHDPI;

Void Sdl_obj::Log( ::String str){
{
		HX_STACK_FRAME("sdl.Sdl","Log",0x0af7e85e,"sdl.Sdl.Log","sdl/Sdl.hx",113,0x96b11317)
		HX_STACK_ARG(str,"str")
		HX_STACK_LINE(113)
		::sdl::Sdl_obj::hx_log(str);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sdl_obj,Log,(void))

Void Sdl_obj::Quit( ){
{
		HX_STACK_FRAME("sdl.Sdl","Quit",0x91460ab5,"sdl.Sdl.Quit","sdl/Sdl.hx",117,0x96b11317)
		HX_STACK_LINE(117)
		::sdl::Sdl_obj::hx_quit();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sdl_obj,Quit,(void))

int Sdl_obj::GetTicks( ){
	HX_STACK_FRAME("sdl.Sdl","GetTicks",0x4f1773e6,"sdl.Sdl.GetTicks","sdl/Sdl.hx",122,0x96b11317)
	HX_STACK_LINE(122)
	return ::sdl::Sdl_obj::hx_GetTicks();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sdl_obj,GetTicks,return )

int Sdl_obj::mouseX( ){
	HX_STACK_FRAME("sdl.Sdl","mouseX",0xbc6aa6d9,"sdl.Sdl.mouseX","sdl/Sdl.hx",127,0x96b11317)
	HX_STACK_LINE(127)
	return ::sdl::Sdl_obj::hx_EventMouseX();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sdl_obj,mouseX,return )

int Sdl_obj::mouseY( ){
	HX_STACK_FRAME("sdl.Sdl","mouseY",0xbc6aa6da,"sdl.Sdl.mouseY","sdl/Sdl.hx",131,0x96b11317)
	HX_STACK_LINE(131)
	return ::sdl::Sdl_obj::hx_EventMouseY();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sdl_obj,mouseY,return )

Float Sdl_obj::fingerX( ){
	HX_STACK_FRAME("sdl.Sdl","fingerX",0x87f06589,"sdl.Sdl.fingerX","sdl/Sdl.hx",136,0x96b11317)
	HX_STACK_LINE(136)
	return ::sdl::Sdl_obj::hx_EventFingerX();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sdl_obj,fingerX,return )

Float Sdl_obj::fingerY( ){
	HX_STACK_FRAME("sdl.Sdl","fingerY",0x87f0658a,"sdl.Sdl.fingerY","sdl/Sdl.hx",140,0x96b11317)
	HX_STACK_LINE(140)
	return ::sdl::Sdl_obj::hx_EventFingerY();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sdl_obj,fingerY,return )

int Sdl_obj::touchX( ){
	HX_STACK_FRAME("sdl.Sdl","touchX",0x88de0bff,"sdl.Sdl.touchX","sdl/Sdl.hx",144,0x96b11317)
	HX_STACK_LINE(147)
	Float _g = ::sdl::Sdl_obj::fingerX();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(147)
	return ::Std_obj::_int(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sdl_obj,touchX,return )

int Sdl_obj::touchY( ){
	HX_STACK_FRAME("sdl.Sdl","touchY",0x88de0c00,"sdl.Sdl.touchY","sdl/Sdl.hx",154,0x96b11317)
	HX_STACK_LINE(156)
	Float _g = ::sdl::Sdl_obj::fingerY();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(156)
	return ::Std_obj::_int(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sdl_obj,touchY,return )

Dynamic Sdl_obj::sdl_main;

Dynamic Sdl_obj::hx_log;

Dynamic Sdl_obj::hx_quit;

Dynamic Sdl_obj::hx_GetTicks;

Dynamic Sdl_obj::hx_CreateWindow;

Dynamic Sdl_obj::hx_DestroyWindow;

Dynamic Sdl_obj::hx_PollEvent;

Dynamic Sdl_obj::hx_EventType;

Dynamic Sdl_obj::hx_WindowEvent;

Dynamic Sdl_obj::hx_EventKeySym;

Dynamic Sdl_obj::hx_EventScanCode;

Dynamic Sdl_obj::hx_EventMouseButton;

Dynamic Sdl_obj::hx_EventMouseX;

Dynamic Sdl_obj::hx_EventMouseY;

Dynamic Sdl_obj::hx_EventMouseXrel;

Dynamic Sdl_obj::hx_EventMouseYrel;

Dynamic Sdl_obj::hx_EventFingerId;

Dynamic Sdl_obj::hx_EventFingerX;

Dynamic Sdl_obj::hx_EventFingerY;

Dynamic Sdl_obj::hx_CreateRenderer;

Dynamic Sdl_obj::hx_DestroyRenderer;

Dynamic Sdl_obj::hx_SetRenderDrawColor;

Dynamic Sdl_obj::hx_RenderClear;

Dynamic Sdl_obj::hx_RenderPresent;

Dynamic Sdl_obj::hx_RenderFillRect;

Dynamic Sdl_obj::hx_RenderDrawRect;

Dynamic Sdl_obj::hx_RenderDrawLine;

Dynamic Sdl_obj::hx_LoadTexture;

Dynamic Sdl_obj::hx_LoadTextureColorKey;

Dynamic Sdl_obj::hx_TextureWidth;

Dynamic Sdl_obj::hx_TextureHeight;

Dynamic Sdl_obj::hx_LoadFont;

Dynamic Sdl_obj::hx_RenderText_Solid;

Dynamic Sdl_obj::hx_RenderText_Solid_Color;

Dynamic Sdl_obj::hx_RenderCopy;

Dynamic Sdl_obj::hx_RenderCopyEx;


Sdl_obj::Sdl_obj()
{
}

Dynamic Sdl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Log") ) { return Log_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"Quit") ) { return Quit_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mouseX") ) { return mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"touchX") ) { return touchX_dyn(); }
		if (HX_FIELD_EQ(inName,"touchY") ) { return touchY_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_log") ) { return hx_log; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fingerX") ) { return fingerX_dyn(); }
		if (HX_FIELD_EQ(inName,"fingerY") ) { return fingerY_dyn(); }
		if (HX_FIELD_EQ(inName,"hx_quit") ) { return hx_quit; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"GetTicks") ) { return GetTicks_dyn(); }
		if (HX_FIELD_EQ(inName,"sdl_main") ) { return sdl_main; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hx_GetTicks") ) { return hx_GetTicks; }
		if (HX_FIELD_EQ(inName,"hx_LoadFont") ) { return hx_LoadFont; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hx_PollEvent") ) { return hx_PollEvent; }
		if (HX_FIELD_EQ(inName,"hx_EventType") ) { return hx_EventType; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hx_RenderCopy") ) { return hx_RenderCopy; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_WindowEvent") ) { return hx_WindowEvent; }
		if (HX_FIELD_EQ(inName,"hx_EventKeySym") ) { return hx_EventKeySym; }
		if (HX_FIELD_EQ(inName,"hx_EventMouseX") ) { return hx_EventMouseX; }
		if (HX_FIELD_EQ(inName,"hx_EventMouseY") ) { return hx_EventMouseY; }
		if (HX_FIELD_EQ(inName,"hx_RenderClear") ) { return hx_RenderClear; }
		if (HX_FIELD_EQ(inName,"hx_LoadTexture") ) { return hx_LoadTexture; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_CreateWindow") ) { return hx_CreateWindow; }
		if (HX_FIELD_EQ(inName,"hx_EventFingerX") ) { return hx_EventFingerX; }
		if (HX_FIELD_EQ(inName,"hx_EventFingerY") ) { return hx_EventFingerY; }
		if (HX_FIELD_EQ(inName,"hx_TextureWidth") ) { return hx_TextureWidth; }
		if (HX_FIELD_EQ(inName,"hx_RenderCopyEx") ) { return hx_RenderCopyEx; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_DestroyWindow") ) { return hx_DestroyWindow; }
		if (HX_FIELD_EQ(inName,"hx_EventScanCode") ) { return hx_EventScanCode; }
		if (HX_FIELD_EQ(inName,"hx_EventFingerId") ) { return hx_EventFingerId; }
		if (HX_FIELD_EQ(inName,"hx_RenderPresent") ) { return hx_RenderPresent; }
		if (HX_FIELD_EQ(inName,"hx_TextureHeight") ) { return hx_TextureHeight; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_EventMouseXrel") ) { return hx_EventMouseXrel; }
		if (HX_FIELD_EQ(inName,"hx_EventMouseYrel") ) { return hx_EventMouseYrel; }
		if (HX_FIELD_EQ(inName,"hx_CreateRenderer") ) { return hx_CreateRenderer; }
		if (HX_FIELD_EQ(inName,"hx_RenderFillRect") ) { return hx_RenderFillRect; }
		if (HX_FIELD_EQ(inName,"hx_RenderDrawRect") ) { return hx_RenderDrawRect; }
		if (HX_FIELD_EQ(inName,"hx_RenderDrawLine") ) { return hx_RenderDrawLine; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_DestroyRenderer") ) { return hx_DestroyRenderer; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_EventMouseButton") ) { return hx_EventMouseButton; }
		if (HX_FIELD_EQ(inName,"hx_RenderText_Solid") ) { return hx_RenderText_Solid; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_SetRenderDrawColor") ) { return hx_SetRenderDrawColor; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_LoadTextureColorKey") ) { return hx_LoadTextureColorKey; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_RenderText_Solid_Color") ) { return hx_RenderText_Solid_Color; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sdl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"hx_log") ) { hx_log=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hx_quit") ) { hx_quit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sdl_main") ) { sdl_main=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hx_GetTicks") ) { hx_GetTicks=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_LoadFont") ) { hx_LoadFont=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hx_PollEvent") ) { hx_PollEvent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_EventType") ) { hx_EventType=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hx_RenderCopy") ) { hx_RenderCopy=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hx_WindowEvent") ) { hx_WindowEvent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_EventKeySym") ) { hx_EventKeySym=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_EventMouseX") ) { hx_EventMouseX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_EventMouseY") ) { hx_EventMouseY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RenderClear") ) { hx_RenderClear=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_LoadTexture") ) { hx_LoadTexture=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hx_CreateWindow") ) { hx_CreateWindow=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_EventFingerX") ) { hx_EventFingerX=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_EventFingerY") ) { hx_EventFingerY=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_TextureWidth") ) { hx_TextureWidth=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RenderCopyEx") ) { hx_RenderCopyEx=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hx_DestroyWindow") ) { hx_DestroyWindow=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_EventScanCode") ) { hx_EventScanCode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_EventFingerId") ) { hx_EventFingerId=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RenderPresent") ) { hx_RenderPresent=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_TextureHeight") ) { hx_TextureHeight=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hx_EventMouseXrel") ) { hx_EventMouseXrel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_EventMouseYrel") ) { hx_EventMouseYrel=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_CreateRenderer") ) { hx_CreateRenderer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RenderFillRect") ) { hx_RenderFillRect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RenderDrawRect") ) { hx_RenderDrawRect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RenderDrawLine") ) { hx_RenderDrawLine=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hx_DestroyRenderer") ) { hx_DestroyRenderer=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"hx_EventMouseButton") ) { hx_EventMouseButton=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hx_RenderText_Solid") ) { hx_RenderText_Solid=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"hx_SetRenderDrawColor") ) { hx_SetRenderDrawColor=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"hx_LoadTextureColorKey") ) { hx_LoadTextureColorKey=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"hx_RenderText_Solid_Color") ) { hx_RenderText_Solid_Color=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sdl_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("WINDOWEVENT_NONE"),
	HX_CSTRING("WINDOWEVENT_SHOWN"),
	HX_CSTRING("WINDOWEVENT_HIDDEN"),
	HX_CSTRING("WINDOWEVENT_EXPOSED"),
	HX_CSTRING("WINDOWEVENT_MOVED"),
	HX_CSTRING("WINDOWEVENT_RESIZED"),
	HX_CSTRING("WINDOWEVENT_SIZE_CHANGED"),
	HX_CSTRING("WINDOWEVENT_MINIMIZED"),
	HX_CSTRING("WINDOWEVENT_MAXIMIZED"),
	HX_CSTRING("WINDOWEVENT_RESTORED"),
	HX_CSTRING("WINDOWEVENT_ENTER"),
	HX_CSTRING("WINDOWEVENT_LEAVE"),
	HX_CSTRING("WINDOWEVENT_FOCUS_GAINED"),
	HX_CSTRING("WINDOWEVENT_FOCUS_LOST"),
	HX_CSTRING("WINDOWEVENT_CLOSE"),
	HX_CSTRING("BUTTON_LEFT"),
	HX_CSTRING("BUTTON_MIDDLE"),
	HX_CSTRING("BUTTON_RIGHT"),
	HX_CSTRING("FIRSTEVENT"),
	HX_CSTRING("QUIT"),
	HX_CSTRING("WINDOWEVENT"),
	HX_CSTRING("KEYDOWN"),
	HX_CSTRING("KEYUP"),
	HX_CSTRING("MOUSEMOTION"),
	HX_CSTRING("MOUSEBUTTONDOWN"),
	HX_CSTRING("MOUSEBUTTONUP"),
	HX_CSTRING("MOUSEWHEEL"),
	HX_CSTRING("JOYAXISMOTION"),
	HX_CSTRING("CONTROLLERAXISMOTION"),
	HX_CSTRING("FINGERDOWN"),
	HX_CSTRING("FINGERUP"),
	HX_CSTRING("FINGERMOTION"),
	HX_CSTRING("DOLLARGESTURE"),
	HX_CSTRING("DOLLARRECORD"),
	HX_CSTRING("MULTIGESTURE"),
	HX_CSTRING("CLIPBOARDUPDATE"),
	HX_CSTRING("DROPFILE"),
	HX_CSTRING("RENDER_TARGETS_RESET"),
	HX_CSTRING("USEREVENT"),
	HX_CSTRING("LASTEVENT"),
	HX_CSTRING("FLIP_NONE"),
	HX_CSTRING("FLIP_HORIZONTAL"),
	HX_CSTRING("FLIP_VERTICAL"),
	HX_CSTRING("RENDERER_SOFTWARE"),
	HX_CSTRING("RENDERER_ACCELERATED"),
	HX_CSTRING("RENDERER_PRESENTVSYNC"),
	HX_CSTRING("RENDERER_TARGETTEXTURE"),
	HX_CSTRING("WINDOWPOS_CENTERED"),
	HX_CSTRING("WINDOWPOS_UNDEFINED"),
	HX_CSTRING("WINDOW_FULLSCREEN"),
	HX_CSTRING("WINDOW_OPENGL"),
	HX_CSTRING("WINDOW_SHOWN"),
	HX_CSTRING("WINDOW_HIDDEN"),
	HX_CSTRING("WINDOW_BORDERLESS"),
	HX_CSTRING("WINDOW_RESIZABLE"),
	HX_CSTRING("WINDOW_MINIMIZED"),
	HX_CSTRING("WINDOW_MAXIMIZED"),
	HX_CSTRING("WINDOW_INPUT_GRABBED"),
	HX_CSTRING("WINDOW_INPUT_FOCUS"),
	HX_CSTRING("WINDOW_MOUSE_FOCUS"),
	HX_CSTRING("WINDOW_FULLSCREEN_DESKTOP"),
	HX_CSTRING("WINDOW_FOREIGN"),
	HX_CSTRING("WINDOW_ALLOW_HIGHDPI"),
	HX_CSTRING("Log"),
	HX_CSTRING("Quit"),
	HX_CSTRING("GetTicks"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("fingerX"),
	HX_CSTRING("fingerY"),
	HX_CSTRING("touchX"),
	HX_CSTRING("touchY"),
	HX_CSTRING("sdl_main"),
	HX_CSTRING("hx_log"),
	HX_CSTRING("hx_quit"),
	HX_CSTRING("hx_GetTicks"),
	HX_CSTRING("hx_CreateWindow"),
	HX_CSTRING("hx_DestroyWindow"),
	HX_CSTRING("hx_PollEvent"),
	HX_CSTRING("hx_EventType"),
	HX_CSTRING("hx_WindowEvent"),
	HX_CSTRING("hx_EventKeySym"),
	HX_CSTRING("hx_EventScanCode"),
	HX_CSTRING("hx_EventMouseButton"),
	HX_CSTRING("hx_EventMouseX"),
	HX_CSTRING("hx_EventMouseY"),
	HX_CSTRING("hx_EventMouseXrel"),
	HX_CSTRING("hx_EventMouseYrel"),
	HX_CSTRING("hx_EventFingerId"),
	HX_CSTRING("hx_EventFingerX"),
	HX_CSTRING("hx_EventFingerY"),
	HX_CSTRING("hx_CreateRenderer"),
	HX_CSTRING("hx_DestroyRenderer"),
	HX_CSTRING("hx_SetRenderDrawColor"),
	HX_CSTRING("hx_RenderClear"),
	HX_CSTRING("hx_RenderPresent"),
	HX_CSTRING("hx_RenderFillRect"),
	HX_CSTRING("hx_RenderDrawRect"),
	HX_CSTRING("hx_RenderDrawLine"),
	HX_CSTRING("hx_LoadTexture"),
	HX_CSTRING("hx_LoadTextureColorKey"),
	HX_CSTRING("hx_TextureWidth"),
	HX_CSTRING("hx_TextureHeight"),
	HX_CSTRING("hx_LoadFont"),
	HX_CSTRING("hx_RenderText_Solid"),
	HX_CSTRING("hx_RenderText_Solid_Color"),
	HX_CSTRING("hx_RenderCopy"),
	HX_CSTRING("hx_RenderCopyEx"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sdl_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_NONE,"WINDOWEVENT_NONE");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_SHOWN,"WINDOWEVENT_SHOWN");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_HIDDEN,"WINDOWEVENT_HIDDEN");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_EXPOSED,"WINDOWEVENT_EXPOSED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_MOVED,"WINDOWEVENT_MOVED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_RESIZED,"WINDOWEVENT_RESIZED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_SIZE_CHANGED,"WINDOWEVENT_SIZE_CHANGED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_MINIMIZED,"WINDOWEVENT_MINIMIZED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_MAXIMIZED,"WINDOWEVENT_MAXIMIZED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_RESTORED,"WINDOWEVENT_RESTORED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_ENTER,"WINDOWEVENT_ENTER");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_LEAVE,"WINDOWEVENT_LEAVE");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_FOCUS_GAINED,"WINDOWEVENT_FOCUS_GAINED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_FOCUS_LOST,"WINDOWEVENT_FOCUS_LOST");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT_CLOSE,"WINDOWEVENT_CLOSE");
	HX_MARK_MEMBER_NAME(Sdl_obj::BUTTON_LEFT,"BUTTON_LEFT");
	HX_MARK_MEMBER_NAME(Sdl_obj::BUTTON_MIDDLE,"BUTTON_MIDDLE");
	HX_MARK_MEMBER_NAME(Sdl_obj::BUTTON_RIGHT,"BUTTON_RIGHT");
	HX_MARK_MEMBER_NAME(Sdl_obj::FIRSTEVENT,"FIRSTEVENT");
	HX_MARK_MEMBER_NAME(Sdl_obj::QUIT,"QUIT");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWEVENT,"WINDOWEVENT");
	HX_MARK_MEMBER_NAME(Sdl_obj::KEYDOWN,"KEYDOWN");
	HX_MARK_MEMBER_NAME(Sdl_obj::KEYUP,"KEYUP");
	HX_MARK_MEMBER_NAME(Sdl_obj::MOUSEMOTION,"MOUSEMOTION");
	HX_MARK_MEMBER_NAME(Sdl_obj::MOUSEBUTTONDOWN,"MOUSEBUTTONDOWN");
	HX_MARK_MEMBER_NAME(Sdl_obj::MOUSEBUTTONUP,"MOUSEBUTTONUP");
	HX_MARK_MEMBER_NAME(Sdl_obj::MOUSEWHEEL,"MOUSEWHEEL");
	HX_MARK_MEMBER_NAME(Sdl_obj::JOYAXISMOTION,"JOYAXISMOTION");
	HX_MARK_MEMBER_NAME(Sdl_obj::CONTROLLERAXISMOTION,"CONTROLLERAXISMOTION");
	HX_MARK_MEMBER_NAME(Sdl_obj::FINGERDOWN,"FINGERDOWN");
	HX_MARK_MEMBER_NAME(Sdl_obj::FINGERUP,"FINGERUP");
	HX_MARK_MEMBER_NAME(Sdl_obj::FINGERMOTION,"FINGERMOTION");
	HX_MARK_MEMBER_NAME(Sdl_obj::DOLLARGESTURE,"DOLLARGESTURE");
	HX_MARK_MEMBER_NAME(Sdl_obj::DOLLARRECORD,"DOLLARRECORD");
	HX_MARK_MEMBER_NAME(Sdl_obj::MULTIGESTURE,"MULTIGESTURE");
	HX_MARK_MEMBER_NAME(Sdl_obj::CLIPBOARDUPDATE,"CLIPBOARDUPDATE");
	HX_MARK_MEMBER_NAME(Sdl_obj::DROPFILE,"DROPFILE");
	HX_MARK_MEMBER_NAME(Sdl_obj::RENDER_TARGETS_RESET,"RENDER_TARGETS_RESET");
	HX_MARK_MEMBER_NAME(Sdl_obj::USEREVENT,"USEREVENT");
	HX_MARK_MEMBER_NAME(Sdl_obj::LASTEVENT,"LASTEVENT");
	HX_MARK_MEMBER_NAME(Sdl_obj::FLIP_NONE,"FLIP_NONE");
	HX_MARK_MEMBER_NAME(Sdl_obj::FLIP_HORIZONTAL,"FLIP_HORIZONTAL");
	HX_MARK_MEMBER_NAME(Sdl_obj::FLIP_VERTICAL,"FLIP_VERTICAL");
	HX_MARK_MEMBER_NAME(Sdl_obj::RENDERER_SOFTWARE,"RENDERER_SOFTWARE");
	HX_MARK_MEMBER_NAME(Sdl_obj::RENDERER_ACCELERATED,"RENDERER_ACCELERATED");
	HX_MARK_MEMBER_NAME(Sdl_obj::RENDERER_PRESENTVSYNC,"RENDERER_PRESENTVSYNC");
	HX_MARK_MEMBER_NAME(Sdl_obj::RENDERER_TARGETTEXTURE,"RENDERER_TARGETTEXTURE");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWPOS_CENTERED,"WINDOWPOS_CENTERED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOWPOS_UNDEFINED,"WINDOWPOS_UNDEFINED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_FULLSCREEN,"WINDOW_FULLSCREEN");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_OPENGL,"WINDOW_OPENGL");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_SHOWN,"WINDOW_SHOWN");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_HIDDEN,"WINDOW_HIDDEN");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_BORDERLESS,"WINDOW_BORDERLESS");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_RESIZABLE,"WINDOW_RESIZABLE");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_MINIMIZED,"WINDOW_MINIMIZED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_MAXIMIZED,"WINDOW_MAXIMIZED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_INPUT_GRABBED,"WINDOW_INPUT_GRABBED");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_INPUT_FOCUS,"WINDOW_INPUT_FOCUS");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_MOUSE_FOCUS,"WINDOW_MOUSE_FOCUS");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_FULLSCREEN_DESKTOP,"WINDOW_FULLSCREEN_DESKTOP");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_FOREIGN,"WINDOW_FOREIGN");
	HX_MARK_MEMBER_NAME(Sdl_obj::WINDOW_ALLOW_HIGHDPI,"WINDOW_ALLOW_HIGHDPI");
	HX_MARK_MEMBER_NAME(Sdl_obj::sdl_main,"sdl_main");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_log,"hx_log");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_quit,"hx_quit");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_GetTicks,"hx_GetTicks");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_CreateWindow,"hx_CreateWindow");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_DestroyWindow,"hx_DestroyWindow");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_PollEvent,"hx_PollEvent");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_EventType,"hx_EventType");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_WindowEvent,"hx_WindowEvent");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_EventKeySym,"hx_EventKeySym");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_EventScanCode,"hx_EventScanCode");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_EventMouseButton,"hx_EventMouseButton");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_EventMouseX,"hx_EventMouseX");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_EventMouseY,"hx_EventMouseY");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_EventMouseXrel,"hx_EventMouseXrel");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_EventMouseYrel,"hx_EventMouseYrel");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_EventFingerId,"hx_EventFingerId");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_EventFingerX,"hx_EventFingerX");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_EventFingerY,"hx_EventFingerY");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_CreateRenderer,"hx_CreateRenderer");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_DestroyRenderer,"hx_DestroyRenderer");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_SetRenderDrawColor,"hx_SetRenderDrawColor");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_RenderClear,"hx_RenderClear");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_RenderPresent,"hx_RenderPresent");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_RenderFillRect,"hx_RenderFillRect");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_RenderDrawRect,"hx_RenderDrawRect");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_RenderDrawLine,"hx_RenderDrawLine");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_LoadTexture,"hx_LoadTexture");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_LoadTextureColorKey,"hx_LoadTextureColorKey");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_TextureWidth,"hx_TextureWidth");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_TextureHeight,"hx_TextureHeight");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_LoadFont,"hx_LoadFont");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_RenderText_Solid,"hx_RenderText_Solid");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_RenderText_Solid_Color,"hx_RenderText_Solid_Color");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_RenderCopy,"hx_RenderCopy");
	HX_MARK_MEMBER_NAME(Sdl_obj::hx_RenderCopyEx,"hx_RenderCopyEx");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sdl_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_NONE,"WINDOWEVENT_NONE");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_SHOWN,"WINDOWEVENT_SHOWN");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_HIDDEN,"WINDOWEVENT_HIDDEN");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_EXPOSED,"WINDOWEVENT_EXPOSED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_MOVED,"WINDOWEVENT_MOVED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_RESIZED,"WINDOWEVENT_RESIZED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_SIZE_CHANGED,"WINDOWEVENT_SIZE_CHANGED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_MINIMIZED,"WINDOWEVENT_MINIMIZED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_MAXIMIZED,"WINDOWEVENT_MAXIMIZED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_RESTORED,"WINDOWEVENT_RESTORED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_ENTER,"WINDOWEVENT_ENTER");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_LEAVE,"WINDOWEVENT_LEAVE");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_FOCUS_GAINED,"WINDOWEVENT_FOCUS_GAINED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_FOCUS_LOST,"WINDOWEVENT_FOCUS_LOST");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT_CLOSE,"WINDOWEVENT_CLOSE");
	HX_VISIT_MEMBER_NAME(Sdl_obj::BUTTON_LEFT,"BUTTON_LEFT");
	HX_VISIT_MEMBER_NAME(Sdl_obj::BUTTON_MIDDLE,"BUTTON_MIDDLE");
	HX_VISIT_MEMBER_NAME(Sdl_obj::BUTTON_RIGHT,"BUTTON_RIGHT");
	HX_VISIT_MEMBER_NAME(Sdl_obj::FIRSTEVENT,"FIRSTEVENT");
	HX_VISIT_MEMBER_NAME(Sdl_obj::QUIT,"QUIT");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWEVENT,"WINDOWEVENT");
	HX_VISIT_MEMBER_NAME(Sdl_obj::KEYDOWN,"KEYDOWN");
	HX_VISIT_MEMBER_NAME(Sdl_obj::KEYUP,"KEYUP");
	HX_VISIT_MEMBER_NAME(Sdl_obj::MOUSEMOTION,"MOUSEMOTION");
	HX_VISIT_MEMBER_NAME(Sdl_obj::MOUSEBUTTONDOWN,"MOUSEBUTTONDOWN");
	HX_VISIT_MEMBER_NAME(Sdl_obj::MOUSEBUTTONUP,"MOUSEBUTTONUP");
	HX_VISIT_MEMBER_NAME(Sdl_obj::MOUSEWHEEL,"MOUSEWHEEL");
	HX_VISIT_MEMBER_NAME(Sdl_obj::JOYAXISMOTION,"JOYAXISMOTION");
	HX_VISIT_MEMBER_NAME(Sdl_obj::CONTROLLERAXISMOTION,"CONTROLLERAXISMOTION");
	HX_VISIT_MEMBER_NAME(Sdl_obj::FINGERDOWN,"FINGERDOWN");
	HX_VISIT_MEMBER_NAME(Sdl_obj::FINGERUP,"FINGERUP");
	HX_VISIT_MEMBER_NAME(Sdl_obj::FINGERMOTION,"FINGERMOTION");
	HX_VISIT_MEMBER_NAME(Sdl_obj::DOLLARGESTURE,"DOLLARGESTURE");
	HX_VISIT_MEMBER_NAME(Sdl_obj::DOLLARRECORD,"DOLLARRECORD");
	HX_VISIT_MEMBER_NAME(Sdl_obj::MULTIGESTURE,"MULTIGESTURE");
	HX_VISIT_MEMBER_NAME(Sdl_obj::CLIPBOARDUPDATE,"CLIPBOARDUPDATE");
	HX_VISIT_MEMBER_NAME(Sdl_obj::DROPFILE,"DROPFILE");
	HX_VISIT_MEMBER_NAME(Sdl_obj::RENDER_TARGETS_RESET,"RENDER_TARGETS_RESET");
	HX_VISIT_MEMBER_NAME(Sdl_obj::USEREVENT,"USEREVENT");
	HX_VISIT_MEMBER_NAME(Sdl_obj::LASTEVENT,"LASTEVENT");
	HX_VISIT_MEMBER_NAME(Sdl_obj::FLIP_NONE,"FLIP_NONE");
	HX_VISIT_MEMBER_NAME(Sdl_obj::FLIP_HORIZONTAL,"FLIP_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(Sdl_obj::FLIP_VERTICAL,"FLIP_VERTICAL");
	HX_VISIT_MEMBER_NAME(Sdl_obj::RENDERER_SOFTWARE,"RENDERER_SOFTWARE");
	HX_VISIT_MEMBER_NAME(Sdl_obj::RENDERER_ACCELERATED,"RENDERER_ACCELERATED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::RENDERER_PRESENTVSYNC,"RENDERER_PRESENTVSYNC");
	HX_VISIT_MEMBER_NAME(Sdl_obj::RENDERER_TARGETTEXTURE,"RENDERER_TARGETTEXTURE");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWPOS_CENTERED,"WINDOWPOS_CENTERED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOWPOS_UNDEFINED,"WINDOWPOS_UNDEFINED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_FULLSCREEN,"WINDOW_FULLSCREEN");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_OPENGL,"WINDOW_OPENGL");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_SHOWN,"WINDOW_SHOWN");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_HIDDEN,"WINDOW_HIDDEN");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_BORDERLESS,"WINDOW_BORDERLESS");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_RESIZABLE,"WINDOW_RESIZABLE");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_MINIMIZED,"WINDOW_MINIMIZED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_MAXIMIZED,"WINDOW_MAXIMIZED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_INPUT_GRABBED,"WINDOW_INPUT_GRABBED");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_INPUT_FOCUS,"WINDOW_INPUT_FOCUS");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_MOUSE_FOCUS,"WINDOW_MOUSE_FOCUS");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_FULLSCREEN_DESKTOP,"WINDOW_FULLSCREEN_DESKTOP");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_FOREIGN,"WINDOW_FOREIGN");
	HX_VISIT_MEMBER_NAME(Sdl_obj::WINDOW_ALLOW_HIGHDPI,"WINDOW_ALLOW_HIGHDPI");
	HX_VISIT_MEMBER_NAME(Sdl_obj::sdl_main,"sdl_main");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_log,"hx_log");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_quit,"hx_quit");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_GetTicks,"hx_GetTicks");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_CreateWindow,"hx_CreateWindow");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_DestroyWindow,"hx_DestroyWindow");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_PollEvent,"hx_PollEvent");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_EventType,"hx_EventType");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_WindowEvent,"hx_WindowEvent");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_EventKeySym,"hx_EventKeySym");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_EventScanCode,"hx_EventScanCode");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_EventMouseButton,"hx_EventMouseButton");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_EventMouseX,"hx_EventMouseX");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_EventMouseY,"hx_EventMouseY");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_EventMouseXrel,"hx_EventMouseXrel");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_EventMouseYrel,"hx_EventMouseYrel");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_EventFingerId,"hx_EventFingerId");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_EventFingerX,"hx_EventFingerX");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_EventFingerY,"hx_EventFingerY");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_CreateRenderer,"hx_CreateRenderer");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_DestroyRenderer,"hx_DestroyRenderer");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_SetRenderDrawColor,"hx_SetRenderDrawColor");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_RenderClear,"hx_RenderClear");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_RenderPresent,"hx_RenderPresent");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_RenderFillRect,"hx_RenderFillRect");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_RenderDrawRect,"hx_RenderDrawRect");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_RenderDrawLine,"hx_RenderDrawLine");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_LoadTexture,"hx_LoadTexture");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_LoadTextureColorKey,"hx_LoadTextureColorKey");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_TextureWidth,"hx_TextureWidth");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_TextureHeight,"hx_TextureHeight");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_LoadFont,"hx_LoadFont");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_RenderText_Solid,"hx_RenderText_Solid");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_RenderText_Solid_Color,"hx_RenderText_Solid_Color");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_RenderCopy,"hx_RenderCopy");
	HX_VISIT_MEMBER_NAME(Sdl_obj::hx_RenderCopyEx,"hx_RenderCopyEx");
};

#endif

Class Sdl_obj::__mClass;

void Sdl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sdl.Sdl"), hx::TCanCast< Sdl_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Sdl_obj::__boot()
{
	WINDOWEVENT_NONE= (int)0;
	WINDOWEVENT_SHOWN= (int)1;
	WINDOWEVENT_HIDDEN= (int)2;
	WINDOWEVENT_EXPOSED= (int)3;
	WINDOWEVENT_MOVED= (int)4;
	WINDOWEVENT_RESIZED= (int)5;
	WINDOWEVENT_SIZE_CHANGED= (int)6;
	WINDOWEVENT_MINIMIZED= (int)7;
	WINDOWEVENT_MAXIMIZED= (int)8;
	WINDOWEVENT_RESTORED= (int)9;
	WINDOWEVENT_ENTER= (int)10;
	WINDOWEVENT_LEAVE= (int)11;
	WINDOWEVENT_FOCUS_GAINED= (int)12;
	WINDOWEVENT_FOCUS_LOST= (int)13;
	WINDOWEVENT_CLOSE= (int)14;
	BUTTON_LEFT= (int)1;
	BUTTON_MIDDLE= (int)2;
	BUTTON_RIGHT= (int)3;
	FIRSTEVENT= (int)0;
	QUIT= (int)256;
	WINDOWEVENT= (int)512;
	KEYDOWN= (int)768;
	KEYUP= (int)769;
	MOUSEMOTION= (int)1024;
	MOUSEBUTTONDOWN= (int)1025;
	MOUSEBUTTONUP= (int)1026;
	MOUSEWHEEL= (int)1027;
	JOYAXISMOTION= (int)1536;
	CONTROLLERAXISMOTION= (int)1616;
	FINGERDOWN= (int)1792;
	FINGERUP= (int)1793;
	FINGERMOTION= (int)1794;
	DOLLARGESTURE= (int)2048;
	DOLLARRECORD= (int)2049;
	MULTIGESTURE= (int)2050;
	CLIPBOARDUPDATE= (int)2304;
	DROPFILE= (int)4096;
	RENDER_TARGETS_RESET= (int)8192;
	USEREVENT= (int)32768;
	LASTEVENT= (int)65535;
	FLIP_NONE= (int)0;
	FLIP_HORIZONTAL= (int)1;
	FLIP_VERTICAL= (int)2;
	RENDERER_SOFTWARE= (int)1;
	RENDERER_ACCELERATED= (int)2;
	RENDERER_PRESENTVSYNC= (int)4;
	RENDERER_TARGETTEXTURE= (int)8;
	WINDOWPOS_CENTERED= (int)805240832;
	WINDOWPOS_UNDEFINED= (int)536805376;
	WINDOW_FULLSCREEN= (int)1;
	WINDOW_OPENGL= (int)2;
	WINDOW_SHOWN= (int)4;
	WINDOW_HIDDEN= (int)8;
	WINDOW_BORDERLESS= (int)16;
	WINDOW_RESIZABLE= (int)32;
	WINDOW_MINIMIZED= (int)64;
	WINDOW_MAXIMIZED= (int)128;
	WINDOW_INPUT_GRABBED= (int)256;
	WINDOW_INPUT_FOCUS= (int)512;
	WINDOW_MOUSE_FOCUS= (int)1024;
	WINDOW_FULLSCREEN_DESKTOP= (int)4097;
	WINDOW_FOREIGN= (int)2048;
	WINDOW_ALLOW_HIGHDPI= (int)8192;
	sdl_main= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("sdl_main"),(int)1);
	hx_log= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_log"),(int)1);
	hx_quit= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_quit"),(int)0);
	hx_GetTicks= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_GetTicks"),(int)0);
	hx_CreateWindow= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_CreateWindow"),(int)-1);
	hx_DestroyWindow= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_DestroyWindow"),(int)1);
	hx_PollEvent= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_PollEvent"),(int)0);
	hx_EventType= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_EventType"),(int)0);
	hx_WindowEvent= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_WindowEvent"),(int)0);
	hx_EventKeySym= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_EventKeySym"),(int)0);
	hx_EventScanCode= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_EventScanCode"),(int)0);
	hx_EventMouseButton= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_EventMouseButton"),(int)0);
	hx_EventMouseX= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_EventMouseX"),(int)0);
	hx_EventMouseY= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_EventMouseY"),(int)0);
	hx_EventMouseXrel= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_EventMouseXrel"),(int)0);
	hx_EventMouseYrel= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_EventMouseYrel"),(int)0);
	hx_EventFingerId= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_EventFingerId"),(int)0);
	hx_EventFingerX= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_EventFingerX"),(int)0);
	hx_EventFingerY= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_EventFingerY"),(int)0);
	hx_CreateRenderer= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_CreateRenderer"),(int)2);
	hx_DestroyRenderer= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_DestroyRenderer"),(int)1);
	hx_SetRenderDrawColor= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_SetRenderDrawColor"),(int)5);
	hx_RenderClear= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_RenderClear"),(int)1);
	hx_RenderPresent= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_RenderPresent"),(int)1);
	hx_RenderFillRect= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_RenderFillRect"),(int)5);
	hx_RenderDrawRect= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_RenderDrawRect"),(int)5);
	hx_RenderDrawLine= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_RenderDrawLine"),(int)5);
	hx_LoadTexture= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_LoadTexture"),(int)2);
	hx_LoadTextureColorKey= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_LoadTextureColorKey"),(int)5);
	hx_TextureWidth= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_TextureWidth"),(int)1);
	hx_TextureHeight= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_TextureHeight"),(int)1);
	hx_LoadFont= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_LoadFont"),(int)2);
	hx_RenderText_Solid= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_RenderText_Solid"),(int)-1);
	hx_RenderText_Solid_Color= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_RenderText_Solid_Color"),(int)-1);
	hx_RenderCopy= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_RenderCopy"),(int)-1);
	hx_RenderCopyEx= ::cpp::Lib_obj::load(HX_CSTRING("sdlhaxe"),HX_CSTRING("hx_RenderCopyEx"),(int)-1);
}

} // end namespace sdl
