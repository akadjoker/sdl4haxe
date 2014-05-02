#include <hxcpp.h>

#include <sdl/Window.h>
#include <sdl/Texture.h>
#include <sdl/TTFFont.h>
#include <sdl/Sdl.h>
#include <sdl/SDL_Point.h>
#include <sdl/SDLRect.h>
#include <sdl/Render.h>
#include <haxe/Log.h>
#include <cpp/Lib.h>
#include <Std.h>
#include <Main.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sdl::Window_obj::__register();
::sdl::Texture_obj::__register();
::sdl::TTFFont_obj::__register();
::sdl::Sdl_obj::__register();
::sdl::SDL_Point_obj::__register();
::sdl::SDLRect_obj::__register();
::sdl::Render_obj::__register();
::haxe::Log_obj::__register();
::cpp::Lib_obj::__register();
::Std_obj::__register();
::Main_obj::__register();
::cpp::Lib_obj::__boot();
::haxe::Log_obj::__boot();
::Main_obj::__boot();
::Std_obj::__boot();
::sdl::Render_obj::__boot();
::sdl::SDLRect_obj::__boot();
::sdl::SDL_Point_obj::__boot();
::sdl::Sdl_obj::__boot();
::sdl::TTFFont_obj::__boot();
::sdl::Texture_obj::__boot();
::sdl::Window_obj::__boot();
}

