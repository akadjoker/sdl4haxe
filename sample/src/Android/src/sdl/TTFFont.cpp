#include <hxcpp.h>

#ifndef INCLUDED_sdl_Sdl
#include <sdl/Sdl.h>
#endif
#ifndef INCLUDED_sdl_TTFFont
#include <sdl/TTFFont.h>
#endif
namespace sdl{

Void TTFFont_obj::__construct(::String filename,int size)
{
HX_STACK_FRAME("sdl.TTFFont","new",0xd5d784f4,"sdl.TTFFont.new","sdl/TTFFont.hx",12,0x6f75c03d)
HX_STACK_THIS(this)
HX_STACK_ARG(filename,"filename")
HX_STACK_ARG(size,"size")
{
	HX_STACK_LINE(13)
	Dynamic _g = ::sdl::Sdl_obj::hx_LoadFont(filename,size);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(13)
	this->handle = _g;
}
;
	return null();
}

//TTFFont_obj::~TTFFont_obj() { }

Dynamic TTFFont_obj::__CreateEmpty() { return  new TTFFont_obj; }
hx::ObjectPtr< TTFFont_obj > TTFFont_obj::__new(::String filename,int size)
{  hx::ObjectPtr< TTFFont_obj > result = new TTFFont_obj();
	result->__construct(filename,size);
	return result;}

Dynamic TTFFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TTFFont_obj > result = new TTFFont_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


TTFFont_obj::TTFFont_obj()
{
}

void TTFFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TTFFont);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void TTFFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

Dynamic TTFFont_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TTFFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TTFFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TTFFont_obj,handle),HX_CSTRING("handle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("handle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TTFFont_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TTFFont_obj::__mClass,"__mClass");
};

#endif

Class TTFFont_obj::__mClass;

void TTFFont_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sdl.TTFFont"), hx::TCanCast< TTFFont_obj> ,sStaticFields,sMemberFields,
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

void TTFFont_obj::__boot()
{
}

} // end namespace sdl
