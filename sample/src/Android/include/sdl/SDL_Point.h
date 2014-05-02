#ifndef INCLUDED_sdl_SDL_Point
#define INCLUDED_sdl_SDL_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(sdl,SDL_Point)
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  SDL_Point_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SDL_Point_obj OBJ_;
		SDL_Point_obj();
		Void __construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SDL_Point_obj > __new(hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SDL_Point_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SDL_Point"); }

		int x;
		int y;
};

} // end namespace sdl

#endif /* INCLUDED_sdl_SDL_Point */ 
