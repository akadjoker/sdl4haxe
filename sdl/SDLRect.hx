package sdl;

/**
 * ...
 * @author djoker
 */
class SDLRect
{
public var x:Int;
public var y:Int;
public var w:Int;
public var h:Int;

	public function new(x:Int=0,y:Int=0,w:Int=1,h:Int=1) 
	{
		this.x = x;
		this.y = y;
		this.w = w;
		this.h = h;
		
	}
	public function set(x:Int=0,y:Int=0,w:Int=1,h:Int=1) :Void
	{
		this.x = x;
		this.y = y;
		this.w = w;
		this.h = h;
		
	}
		public function copy(r:SDLRect) :Void
	{
		this.x = r.x;
		this.y = r.y;
		this.w = r.w;
		this.h = r.h;
		
	}
}