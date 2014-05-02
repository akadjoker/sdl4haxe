#ifndef INCLUDED_sdl_SDLRect
#define INCLUDED_sdl_SDLRect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(sdl,SDLRect)
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  SDLRect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SDLRect_obj OBJ_;
		SDLRect_obj();
		Void __construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_w,hx::Null< int >  __o_h);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SDLRect_obj > __new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_w,hx::Null< int >  __o_h);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SDLRect_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SDLRect"); }

		int x;
		int y;
		int w;
		int h;
		virtual Void set( hx::Null< int >  x,hx::Null< int >  y,hx::Null< int >  w,hx::Null< int >  h);
		Dynamic set_dyn();

		virtual Void copy( ::sdl::SDLRect r);
		Dynamic copy_dyn();

};

} // end namespace sdl

#endif /* INCLUDED_sdl_SDLRect */ 
