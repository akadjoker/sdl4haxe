#ifndef INCLUDED_sdl_Texture
#define INCLUDED_sdl_Texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(sdl,Render)
HX_DECLARE_CLASS1(sdl,SDLRect)
HX_DECLARE_CLASS1(sdl,Texture)
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  Texture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Texture_obj OBJ_;
		Texture_obj();
		Void __construct(::sdl::Render render);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Texture_obj > __new(::sdl::Render render);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Texture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Texture"); }

		Dynamic handle;
		::sdl::Render render;
		int width;
		int height;
		virtual Void loadFromFile( ::String filename);
		Dynamic loadFromFile_dyn();

		virtual Void loadFromFileColorKey( ::String filename,int r,int g,int b);
		Dynamic loadFromFileColorKey_dyn();

		virtual Void RenderCopy( ::sdl::SDLRect Clip,::sdl::SDLRect Rect);
		Dynamic RenderCopy_dyn();

		virtual int TextureWidth( );
		Dynamic TextureWidth_dyn();

		virtual int TextureHeight( );
		Dynamic TextureHeight_dyn();

};

} // end namespace sdl

#endif /* INCLUDED_sdl_Texture */ 
