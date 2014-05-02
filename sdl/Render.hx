package sdl ;

/**
 * ...
 * @author djoker
 */
class Render
{	
  public var  handle:Dynamic;
  
 public  function new(window:Window,flags:Int)
 {
  handle = Sdl.hx_CreateRenderer(window.handle,  flags);
 }
  public function Dispose()
 {
	Sdl.hx_DestroyRenderer(handle);
 }
 
 public function SetDrawColor(r:Int,g:Int,b:Int,a:Int):Void
 {
	  Sdl.hx_SetRenderDrawColor(handle,r,g,b,a);
 }
public function Clear():Void
 {
	  Sdl.hx_RenderClear(handle);
 }
public function Present():Void
 {
	  Sdl.hx_RenderPresent(handle);
 } 

 public function FillRect(rect:SDLRect):Void
 {
	  Sdl.hx_RenderFillRect(handle,rect.x,rect.y,rect.w,rect.h);
 } 
 public function FillRectangle(x:Int,y:Int,w:Int,h:Int):Void
 {
	  Sdl.hx_RenderFillRect(handle,x,y,w,h);
 } 
 public function DrawRectangle(x:Int,y:Int,w:Int,h:Int):Void
 {
	  Sdl.hx_RenderDrawRect(handle,x,y,w,h);
 }  
 public function DrawRect(rect:SDLRect):Void
 {
	  Sdl.hx_RenderDrawRect(handle,rect.x,rect.y,rect.w,rect.h);
 }  
 public function DrawLine(x1:Int,y1:Int,x2:Int,y2:Int):Void
 {
	  Sdl.hx_RenderDrawLine(handle,x1,y1,x2,y2);
 }  
 
 public function RenderCopy(texture:Texture,Clip:SDLRect,Rect:SDLRect) 
	{
		if (Rect == null)
		{
			Rect= new SDLRect(0, 0, texture.width, texture.height);
		}
		if (Clip == null)
		{
			Clip = new SDLRect(0, 0, texture.width, texture.height);
			
		}
		
	  Sdl.hx_RenderCopy(handle,texture.handle, Clip.x,Clip.y,Clip.w,Clip.h,Rect.x,Rect.y,Rect.w,Rect.h);	
	}
	
	 
 public function RenderCopyEx(texture:Texture,Clip:SDLRect,Rect:SDLRect,Center:SDL_Point,angle:Float,flags:Int) 
	{
		if (Rect == null)
		{
			Rect= new SDLRect(0, 0, texture.width, texture.height);
		}
		if (Clip == null)
		{
			Clip = new SDLRect(0, 0, texture.width, texture.height);
			
		}
		if (Center == null)
		{
			Center = new SDL_Point(0, 0);
		}
		
	  Sdl.hx_RenderCopyEx(handle,texture.handle, Clip.x,Clip.y,Clip.w,Clip.h,Rect.x,Rect.y,Rect.w,Rect.h,Center.x,Center.y,angle,flags);	
	}
	
 public function TextSolid(font:TTFFont,text:String,x:Int,y:Int) 
	{		
	  Sdl.hx_RenderText_Solid(handle,font.handle, text,x,y);	
	}	
 public function TextSolidColor(font:TTFFont,text:String,x:Int,y:Int,r:Int,g:Int,b:Int) 
	{		
	  Sdl.hx_RenderText_Solid_Color(handle,font.handle, text,x,y,r,g,b);	
	}		
	
	
}