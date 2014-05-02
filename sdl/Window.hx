package sdl;



class  Window {
	
   public var  handle:Dynamic;
  
 public  function new(caption:String,x:Int,y:Int,w:Int,h:Int,flags:Int)
 {
   handle=Sdl.hx_CreateWindow(caption,x,y,w,h,flags);
 }
 public function Dispose()
 {
	Sdl.hx_DestroyWindow(handle);
 }
 
 public function PoolEvent():Int 
 {
	 return Sdl.hx_PollEvent();
 }
  public function EventType():Int 
 {
	 return Sdl.hx_EventType();
 }
 public function WindowEventType():Int 
 {
	 return Sdl.hx_WindowEvent();
 }
 
}