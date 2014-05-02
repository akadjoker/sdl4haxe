#include <hxcpp.h>

#ifndef INCLUDED_sdl_Sdl
#include <sdl/Sdl.h>
#endif
#ifndef INCLUDED_sdl_Window
#include <sdl/Window.h>
#endif
namespace sdl{

Void Window_obj::__construct(::String caption,int x,int y,int w,int h,int flags)
{
HX_STACK_FRAME("sdl.Window","new",0x4d30efd5,"sdl.Window.new","sdl/Window.hx",10,0xe7ab191a)
HX_STACK_THIS(this)
HX_STACK_ARG(caption,"caption")
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(w,"w")
HX_STACK_ARG(h,"h")
HX_STACK_ARG(flags,"flags")
{
	HX_STACK_LINE(11)
	Dynamic _g = ::sdl::Sdl_obj::hx_CreateWindow(caption,x,y,w,h,flags);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(11)
	this->handle = _g;
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(::String caption,int x,int y,int w,int h,int flags)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(caption,x,y,w,h,flags);
	return result;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void Window_obj::Dispose( ){
{
		HX_STACK_FRAME("sdl.Window","Dispose",0xd1d82674,"sdl.Window.Dispose","sdl/Window.hx",15,0xe7ab191a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15)
		::sdl::Sdl_obj::hx_DestroyWindow(this->handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,Dispose,(void))

int Window_obj::PoolEvent( ){
	HX_STACK_FRAME("sdl.Window","PoolEvent",0xe2e99eb3,"sdl.Window.PoolEvent","sdl/Window.hx",20,0xe7ab191a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	return ::sdl::Sdl_obj::hx_PollEvent();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,PoolEvent,return )

int Window_obj::EventType( ){
	HX_STACK_FRAME("sdl.Window","EventType",0x89368109,"sdl.Window.EventType","sdl/Window.hx",24,0xe7ab191a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return ::sdl::Sdl_obj::hx_EventType();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,EventType,return )

int Window_obj::WindowEventType( ){
	HX_STACK_FRAME("sdl.Window","WindowEventType",0xd7974cb9,"sdl.Window.WindowEventType","sdl/Window.hx",28,0xe7ab191a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	return ::sdl::Sdl_obj::hx_WindowEvent();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,WindowEventType,return )


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic Window_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Dispose") ) { return Dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"PoolEvent") ) { return PoolEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"EventType") ) { return EventType_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"WindowEventType") ) { return WindowEventType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,handle),HX_CSTRING("handle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("handle"),
	HX_CSTRING("Dispose"),
	HX_CSTRING("PoolEvent"),
	HX_CSTRING("EventType"),
	HX_CSTRING("WindowEventType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#endif

Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sdl.Window"), hx::TCanCast< Window_obj> ,sStaticFields,sMemberFields,
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

void Window_obj::__boot()
{
}

} // end namespace sdl
