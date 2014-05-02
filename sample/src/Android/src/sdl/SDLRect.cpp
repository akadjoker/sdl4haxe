#include <hxcpp.h>

#ifndef INCLUDED_sdl_SDLRect
#include <sdl/SDLRect.h>
#endif
namespace sdl{

Void SDLRect_obj::__construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_w,hx::Null< int >  __o_h)
{
HX_STACK_FRAME("sdl.SDLRect","new",0xea93cf9e,"sdl.SDLRect.new","sdl/SDLRect.hx",15,0x754af8d3)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_w,"w")
HX_STACK_ARG(__o_h,"h")
int x = __o_x.Default(0);
int y = __o_y.Default(0);
int w = __o_w.Default(1);
int h = __o_h.Default(1);
{
	HX_STACK_LINE(16)
	this->x = x;
	HX_STACK_LINE(17)
	this->y = y;
	HX_STACK_LINE(18)
	this->w = w;
	HX_STACK_LINE(19)
	this->h = h;
}
;
	return null();
}

//SDLRect_obj::~SDLRect_obj() { }

Dynamic SDLRect_obj::__CreateEmpty() { return  new SDLRect_obj; }
hx::ObjectPtr< SDLRect_obj > SDLRect_obj::__new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_w,hx::Null< int >  __o_h)
{  hx::ObjectPtr< SDLRect_obj > result = new SDLRect_obj();
	result->__construct(__o_x,__o_y,__o_w,__o_h);
	return result;}

Dynamic SDLRect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SDLRect_obj > result = new SDLRect_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void SDLRect_obj::set( hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_w,hx::Null< int >  __o_h){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
int w = __o_w.Default(1);
int h = __o_h.Default(1);
	HX_STACK_FRAME("sdl.SDLRect","set",0xea979ae0,"sdl.SDLRect.set","sdl/SDLRect.hx",23,0x754af8d3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(w,"w")
	HX_STACK_ARG(h,"h")
{
		HX_STACK_LINE(24)
		this->x = x;
		HX_STACK_LINE(25)
		this->y = y;
		HX_STACK_LINE(26)
		this->w = w;
		HX_STACK_LINE(27)
		this->h = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SDLRect_obj,set,(void))

Void SDLRect_obj::copy( ::sdl::SDLRect r){
{
		HX_STACK_FRAME("sdl.SDLRect","copy",0x4f8412b7,"sdl.SDLRect.copy","sdl/SDLRect.hx",31,0x754af8d3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(32)
		this->x = r->x;
		HX_STACK_LINE(33)
		this->y = r->y;
		HX_STACK_LINE(34)
		this->w = r->w;
		HX_STACK_LINE(35)
		this->h = r->h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SDLRect_obj,copy,(void))


SDLRect_obj::SDLRect_obj()
{
}

Dynamic SDLRect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SDLRect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SDLRect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("h"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SDLRect_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(SDLRect_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(SDLRect_obj,w),HX_CSTRING("w")},
	{hx::fsInt,(int)offsetof(SDLRect_obj,h),HX_CSTRING("h")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("w"),
	HX_CSTRING("h"),
	HX_CSTRING("set"),
	HX_CSTRING("copy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SDLRect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SDLRect_obj::__mClass,"__mClass");
};

#endif

Class SDLRect_obj::__mClass;

void SDLRect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sdl.SDLRect"), hx::TCanCast< SDLRect_obj> ,sStaticFields,sMemberFields,
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

void SDLRect_obj::__boot()
{
}

} // end namespace sdl
