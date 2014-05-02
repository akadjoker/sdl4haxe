package sdl;

#if cpp
import cpp.Lib;
#elseif neko
import neko.Lib;
#end


class  Sdl{

	/**
 *  \brief Event subtype for window events
 */
	public static inline var WINDOWEVENT_NONE = 0;           /**< Never used */
    public static inline var WINDOWEVENT_SHOWN    = 1;          /**< Window has been shown */
    public static inline var WINDOWEVENT_HIDDEN   = 2;       /**< Window has been hidden */
    public static inline var WINDOWEVENT_EXPOSED  = 3;        /**< Window has been exposed and should beredrawn */
    public static inline var WINDOWEVENT_MOVED   = 4;       /**< Window has been moved to data1, data2*/
                                     
    public static inline var WINDOWEVENT_RESIZED = 5;        /**< Window has been resized to data1xdata2 */
    public static inline var WINDOWEVENT_SIZE_CHANGED = 6;   /**< The window size has changed, either as a result of an API call or through the system or user changing the window size. */
    public static inline var WINDOWEVENT_MINIMIZED = 7;      /**< Window has been minimized */
    public static inline var WINDOWEVENT_MAXIMIZED=8;      /**< Window has been maximized */
    public static inline var WINDOWEVENT_RESTORED = 9;       /**< Window has been restored to normal sizeand position */
    public static inline var WINDOWEVENT_ENTER = 10;          /**< Window has gained mouse focus */
    public static inline var WINDOWEVENT_LEAVE = 11;          /**< Window has lost mouse focus */
    public static inline var WINDOWEVENT_FOCUS_GAINED = 12;   /**< Window has gained keyboard focus */
    public static inline var WINDOWEVENT_FOCUS_LOST = 13;     /**< Window has lost keyboard focus */
    public static inline var WINDOWEVENT_CLOSE = 14;          /**< The window manager requests that the*/
	
	
public static inline var BUTTON_LEFT =    1;
public static inline var BUTTON_MIDDLE   = 2;
public static inline var BUTTON_RIGHT    = 3;


/**
 * \brief The types of events that can be delivered.
 */
	public static inline var  FIRSTEVENT = 0;
	public static inline var  QUIT = 0x100;
	
	public static inline var  WINDOWEVENT = 0x200;
	
	public static inline var  KEYDOWN = 0x300;
	public static inline var  KEYUP = 0x301;
	
	public static inline var  MOUSEMOTION = 0x400;
	public static inline var  MOUSEBUTTONDOWN = 0x401;
	public static inline var  MOUSEBUTTONUP = 0x402;
	public static inline var  MOUSEWHEEL = 0x403;
	
	public static inline var  JOYAXISMOTION = 0x600;
	public static inline var  CONTROLLERAXISMOTION = 0x650;
	
	public static inline var  FINGERDOWN = 0x700;
	public static inline var  FINGERUP = 0x701;
	public static inline var  FINGERMOTION = 0x702;
	
	public static inline var  DOLLARGESTURE = 0x800;
	public static inline var  DOLLARRECORD = 0x801;
	public static inline var  MULTIGESTURE = 0x802;
	
	public static inline var  CLIPBOARDUPDATE = 0x900;
	public static inline var  DROPFILE = 0x1000;
	public static inline var  RENDER_TARGETS_RESET = 0x2000;
	public static inline var  USEREVENT = 0x8000;
	public static inline var  LASTEVENT = 0xFFFF;

/**
 *  \brief Flip constants for SDL_RenderCopyEx
 */

	    public static inline var FLIP_NONE = 0x00000000;     /**< Do not flip */
    	public static inline var FLIP_HORIZONTAL = 0x00000001;    /**< flip horizontally */
    	public static inline var FLIP_VERTICAL = 0x00000002;     /**< flip vertically */
	
	/**
 *  \brief Flags used when creating a rendering context
 */

    public static inline var RENDERER_SOFTWARE = 0x00000001;        /**< The renderer is a software fallback */
    public static inline var RENDERER_ACCELERATED = 0x00000002;      /**< The renderer uses hardware
                                                     acceleration */
    public static inline var RENDERER_PRESENTVSYNC = 0x00000004;     /**< Present is synchronized
                                                     with the refresh rate */
    public static inline var RENDERER_TARGETTEXTURE = 0x00000008;     /**< The renderer supports
                                                     rendering to texture */
													 

	public static inline var  WINDOWPOS_CENTERED = 0x2FFF0000;
	public static inline var  WINDOWPOS_UNDEFINED = 0x1FFF0000;

	public static inline var     WINDOW_FULLSCREEN = 0x00000001;         /**< fullscreen window */
    public static inline var     WINDOW_OPENGL = 0x00000002;             /**< window usable with OpenGL context */
    public static inline var     WINDOW_SHOWN = 0x00000004;              /**< window is visible */
    public static inline var      WINDOW_HIDDEN = 0x00000008;             /**< window is not visible */
    public static inline var      WINDOW_BORDERLESS = 0x00000010;         /**< no window decoration */
    public static inline var      WINDOW_RESIZABLE = 0x00000020;          /**< window can be resized */
    public static inline var      WINDOW_MINIMIZED = 0x00000040;          /**< window is minimized */
    public static inline var      WINDOW_MAXIMIZED = 0x00000080;          /**< window is maximized */
    public static inline var      WINDOW_INPUT_GRABBED = 0x00000100;      /**< window has grabbed input focus */
    public static inline var      WINDOW_INPUT_FOCUS = 0x00000200;        /**< window has input focus */
    public static inline var      WINDOW_MOUSE_FOCUS = 0x00000400;        /**< window has mouse focus */
    public static inline var      WINDOW_FULLSCREEN_DESKTOP = ( 0x00000001 | 0x00001000 );
    public static inline var      WINDOW_FOREIGN = 0x00000800;            /**< window not created by SDL */
    public static inline var      WINDOW_ALLOW_HIGHDPI = 0x00002000;       /**< window should be created in high-DPI mode if supported */

	
	public static function Log(str:String):Void
	{
	   hx_log(str);
	}
	public static function Quit ():Void
	{
		hx_quit();
	}	
 
	public static function GetTicks ():Int
	{
		return hx_GetTicks();
	}	
	
	public static function mouseX ():Int
	{
		return hx_EventMouseX();
	}	
	public static function mouseY ():Int
	{
		return hx_EventMouseY();
	}
	
	public static function fingerX ():Float
	{
		return hx_EventFingerX();
	}	
	public static function fingerY ():Float
	{
		return hx_EventFingerY();
	}
	
	public static function touchX ():Int
	{
		
		#if android
		return Std.int(fingerX());
		#else
		return hx_EventMouseX();
		#end
		
	}	
	public static function touchY ():Int
	{
		#if android
		return Std.int(fingerY());
		#else
		return hx_EventMouseY();
		#end
	}
	

	public static var sdl_main = Lib.load ("sdlhaxe", "sdl_main", 1);

	
	private static var hx_log = Lib.load ("sdlhaxe", "hx_log", 1);
	private static var hx_quit = Lib.load ("sdlhaxe", "hx_quit", 0);
	private static var hx_GetTicks = Lib.load ("sdlhaxe", "hx_GetTicks", 0);
	
	
	
	
	public static var hx_CreateWindow = Lib.load ("sdlhaxe", "hx_CreateWindow", -1);
	public static var hx_DestroyWindow = Lib.load ("sdlhaxe", "hx_DestroyWindow", 1);
	public static var hx_PollEvent = Lib.load ("sdlhaxe", "hx_PollEvent", 0);
	public static var hx_EventType = Lib.load ("sdlhaxe", "hx_EventType", 0);
	public static var hx_WindowEvent = Lib.load ("sdlhaxe", "hx_WindowEvent", 0);
	
	public static var hx_EventKeySym = Lib.load ("sdlhaxe", "hx_EventKeySym", 0);
	public static var hx_EventScanCode = Lib.load ("sdlhaxe", "hx_EventScanCode", 0);
	
	public static var hx_EventMouseButton = Lib.load ("sdlhaxe", "hx_EventMouseButton", 0);
	public static var hx_EventMouseX = Lib.load ("sdlhaxe", "hx_EventMouseX", 0);
	public static var hx_EventMouseY = Lib.load ("sdlhaxe", "hx_EventMouseY", 0);
	public static var hx_EventMouseXrel = Lib.load ("sdlhaxe", "hx_EventMouseXrel", 0);
	public static var hx_EventMouseYrel = Lib.load ("sdlhaxe", "hx_EventMouseYrel", 0);
	
	public static var hx_EventFingerId = Lib.load ("sdlhaxe", "hx_EventFingerId", 0);
	public static var hx_EventFingerX = Lib.load ("sdlhaxe", "hx_EventFingerX", 0);
	public static var hx_EventFingerY = Lib.load ("sdlhaxe", "hx_EventFingerY", 0);
	


	
	
	
	public static var hx_CreateRenderer = Lib.load ("sdlhaxe", "hx_CreateRenderer", 2);
	public static var hx_DestroyRenderer = Lib.load ("sdlhaxe", "hx_DestroyRenderer", 1);
	
	public static var hx_SetRenderDrawColor = Lib.load ("sdlhaxe", "hx_SetRenderDrawColor", 5);
	public static var hx_RenderClear = Lib.load ("sdlhaxe", "hx_RenderClear", 1);
	public static var hx_RenderPresent = Lib.load ("sdlhaxe", "hx_RenderPresent", 1);
	
	public static var hx_RenderFillRect = Lib.load ("sdlhaxe", "hx_RenderFillRect", 5);
	public static var hx_RenderDrawRect = Lib.load ("sdlhaxe", "hx_RenderDrawRect", 5);
	public static var hx_RenderDrawLine = Lib.load ("sdlhaxe", "hx_RenderDrawLine", 5);
	
	
	public static var hx_LoadTexture = Lib.load ("sdlhaxe", "hx_LoadTexture", 2);
	public static var hx_LoadTextureColorKey = Lib.load ("sdlhaxe", "hx_LoadTextureColorKey", 5);
	public static var hx_TextureWidth = Lib.load ("sdlhaxe", "hx_TextureWidth", 1);
	public static var hx_TextureHeight = Lib.load ("sdlhaxe", "hx_TextureHeight", 1);
	
	public static var hx_LoadFont = Lib.load ("sdlhaxe", "hx_LoadFont", 2);
	public static var hx_RenderText_Solid = Lib.load ("sdlhaxe", "hx_RenderText_Solid", -1);
	public static var hx_RenderText_Solid_Color = Lib.load ("sdlhaxe", "hx_RenderText_Solid_Color", -1);
		
		
	public static var hx_RenderCopy = Lib.load ("sdlhaxe", "hx_RenderCopy", -1);
	public static var hx_RenderCopyEx = Lib.load ("sdlhaxe", "hx_RenderCopyEx", -1);
	
	

	
}