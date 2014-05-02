#ifndef INCLUDED_sdl_TTFFont
#define INCLUDED_sdl_TTFFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(sdl,TTFFont)
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  TTFFont_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TTFFont_obj OBJ_;
		TTFFont_obj();
		Void __construct(::String filename,int size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TTFFont_obj > __new(::String filename,int size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TTFFont_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TTFFont"); }

		Dynamic handle;
};

} // end namespace sdl

#endif /* INCLUDED_sdl_TTFFont */ 
