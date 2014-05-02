package sdl;

/**
 * ...
 * @author djoker
 */
class TTFFont
{
    public var  handle:Dynamic;
	
	public function new(filename:String,size:Int) 
	{
		handle = Sdl.hx_LoadFont(filename, size);
		
	}
	
}