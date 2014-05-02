package sdl;

import sdl.Render;
/**
 * ...
 * @author djoker
 */
class Texture
{
	
	
   public var  handle:Dynamic;
   public var render:Render;
   public var width:Int;
   public var height:Int;
   
	public function new(render:Render) 
	{
	  handle = null;
	  width = 0;
	  height = 0;
	  this.render = render;
	}
	public function loadFromFile(filename:String) 
	{
	  handle = Sdl.hx_LoadTexture(render.handle, filename);	
	  width = TextureWidth();
	  height = TextureHeight();
	}
		public function loadFromFileColorKey(filename:String,r:Int,g:Int,b:Int) 
	{
	  handle = Sdl.hx_LoadTextureColorKey(render.handle, filename,r,g,b);	
	  width = TextureWidth();
	  height = TextureHeight();
	}
	public function RenderCopy(Clip:SDLRect,Rect:SDLRect) 
	{
	  Sdl.hx_RenderCopy(render.handle,handle, Clip.x,Clip.y,Clip.w,Clip.h,Rect.x,Rect.y,Rect.w,Rect.h);	
	}

	public function TextureWidth():Int
	{
	 return Sdl.hx_TextureWidth(handle);
	}
	public function TextureHeight():Int
	{
	 return Sdl.hx_TextureHeight(handle);
	}
	
	
}