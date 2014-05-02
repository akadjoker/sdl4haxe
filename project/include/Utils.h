#ifndef SDLHAXE_H
#define SDLHAXE_H

#include <stdio.h>
#ifdef WIN32
#include <windows.h>
#include <SDL.h>
#include <SDL_mixer.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_opengl.h>
#else
#include <SDL.h>
#include <SDL_mixer.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_opengles.h>
#endif


 #define ValueToFloat(value) static_cast<float>(val_get_double(value))
 #define ValueToString(value) ( val_is_null(value) ? NULL : (val_get_string(value)) )
 #define ValueToLong(value) static_cast<long>(val_get_int(value))
 #define ValueToBool(value) val_get_bool(value)
 #define ValueToInt(value) val_get_int(value)

//Texture wrapper class
class LTexture
{
	public:
		//Initializes variables
		LTexture();

		//Deallocates memory
		~LTexture();

		//Loads image at specified path
		bool loadFromFile(SDL_Renderer* gRenderer,const char* path );
		bool loadFromFileCk(SDL_Renderer* gRenderer,const char* path,int r,int g,int b );

		//Deallocates texture
		void free();


		//Gets image dimensions
		int getWidth();
		int getHeight();

	public:
		SDL_Texture* mTexture;
		int mWidth;
		int mHeight;
};



#endif