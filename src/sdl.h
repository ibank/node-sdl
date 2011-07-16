#ifndef NODE_SDL_H_
#define NODE_SDL_H_

#include <node.h>
#include <v8.h>
#include <SDL.h>
#include <SDL_ttf.h>
#include "helpers.h"

using namespace v8;

namespace sdl {

  static Handle<Value> Init(const Arguments& args);
  static Handle<Value> InitSubSystem(const Arguments& args);
  static Handle<Value> Quit(const Arguments& args);
  static Handle<Value> QuitSubSystem(const Arguments& args);
  static Handle<Value> WasInit(const Arguments& args);
  static Handle<Value> ClearError(const Arguments& args);
  static Handle<Value> GetError(const Arguments& args);
  static Handle<Value> SetError(const Arguments& args);
  static Handle<Value> WaitEvent(const Arguments& args);
  static Handle<Value> PollEvent(const Arguments& args);
  static Handle<Value> SetVideoMode(const Arguments& args);
  static Handle<Value> VideoModeOK(const Arguments& args);
  static Handle<Value> NumJoysticks(const Arguments& args);
  static Handle<Value> JoystickOpen(const Arguments& args);
  static Handle<Value> JoystickOpened(const Arguments& args);
  static Handle<Value> JoystickName(const Arguments& args);
  static Handle<Value> JoystickNumAxes(const Arguments& args);
  static Handle<Value> JoystickNumButtons(const Arguments& args);
  static Handle<Value> JoystickNumBalls(const Arguments& args);
  static Handle<Value> JoystickNumHats(const Arguments& args);
  static Handle<Value> JoystickClose(const Arguments& args);
  static Handle<Value> JoystickUpdate(const Arguments& args);
  static Handle<Value> JoystickEventState(const Arguments& args);
  static Handle<Value> Flip(const Arguments& args);
  static Handle<Value> FillRect(const Arguments& args);
  static Handle<Value> UpdateRect(const Arguments& args);

  namespace TTF {
  
    static Handle<Value> Init(const Arguments& args);
    static Handle<Value> OpenFont(const Arguments& args);
    static Handle<Value> RenderTextBlended(const Arguments& args);
  
  }
  
  typedef struct { 
    Persistent<Function> fn;
    int status;
  } closure_t;
  static int EIO_WaitEvent(eio_req *req);
  static int EIO_OnEvent(eio_req *req);

}

#endif