#ifndef HELPERS_H_
#define HELPERS_H_

#include <v8.h>
#include <node.h>
#include <node_buffer.h>

using namespace node;
using namespace v8;

namespace sdl {

  // Error reporting helpers
  Handle<Value> ThrowSDLException(const char* name);
  Local<Value> MakeSDLException(const char* name);

  // Wrapper and Unwrappers
  Handle<Object> WrapChunk( Mix_Chunk *chunk );
  Mix_Chunk * UnwrapChunk( Handle<Object> obj );

  Handle<Object> WrapSurface(SDL_Surface* surface);
  SDL_Surface* UnwrapSurface(Handle<Object> obj);

  Handle<Object> WrapRect(SDL_Rect* rect);
  SDL_Rect* UnwrapRect(Handle<Object> obj);

  Handle<Object> WrapPixelFormat(SDL_PixelFormat* pixelformat);
  SDL_PixelFormat* UnwrapPixelFormat(Handle<Object> obj);

  Handle<Object> WrapJoystick(SDL_Joystick* joystick);
  SDL_Joystick* UnwrapJoystick(Handle<Object> obj);

  Handle<Object> WrapFont(TTF_Font* font);
  TTF_Font* UnwrapFont(Handle<Object> obj);

  
  // Helpers to work with buffers
  char* BufferData(Buffer *b);
  size_t BufferLength(Buffer *b);
  char* BufferData(Local<Object> buf_obj);
  size_t BufferLength(Local<Object> buf_obj);

} // sdl

#endif  // HELPERS_H_
