#include <hxcpp.h>

#ifndef INCLUDED_sdl_SDL_Point
#include <sdl/SDL_Point.h>
#endif
namespace sdl{

Void SDL_Point_obj::__construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_FRAME("sdl.SDL_Point","new",0xd4a6864b,"sdl.SDL_Point.new","sdl/SDL_Point.hx",12,0x0c288906)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(13)
	this->x = x;
	HX_STACK_LINE(14)
	this->y = y;
}
;
	return null();
}

//SDL_Point_obj::~SDL_Point_obj() { }

Dynamic SDL_Point_obj::__CreateEmpty() { return  new SDL_Point_obj; }
hx::ObjectPtr< SDL_Point_obj > SDL_Point_obj::__new(hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< SDL_Point_obj > result = new SDL_Point_obj();
	result->__construct(__o_x,__o_y);
	return result;}

Dynamic SDL_Point_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SDL_Point_obj > result = new SDL_Point_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


SDL_Point_obj::SDL_Point_obj()
{
}

Dynamic SDL_Point_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SDL_Point_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SDL_Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SDL_Point_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(SDL_Point_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SDL_Point_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SDL_Point_obj::__mClass,"__mClass");
};

#endif

Class SDL_Point_obj::__mClass;

void SDL_Point_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sdl.SDL_Point"), hx::TCanCast< SDL_Point_obj> ,sStaticFields,sMemberFields,
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

void SDL_Point_obj::__boot()
{
}

} // end namespace sdl
