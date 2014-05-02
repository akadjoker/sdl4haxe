#ifndef INCLUDED_sdl_Window
#define INCLUDED_sdl_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(sdl,Window)
namespace sdl{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(::String caption,int x,int y,int w,int h,int flags);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Window_obj > __new(::String caption,int x,int y,int w,int h,int flags);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Window"); }

		Dynamic handle;
		virtual Void Dispose( );
		Dynamic Dispose_dyn();

		virtual int PoolEvent( );
		Dynamic PoolEvent_dyn();

		virtual int EventType( );
		Dynamic EventType_dyn();

		virtual int WindowEventType( );
		Dynamic WindowEventType_dyn();

};

} // end namespace sdl

#endif /* INCLUDED_sdl_Window */ 
