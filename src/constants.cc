/*
** © 2014 by Philipp Dunkel <pip@pipobscure.com>
** Licensed under MIT License.
*/

#ifndef kFSEventStreamEventFlagItemRemoved
#define kFSEventStreamEventFlagItemRemoved 0x00000200
#endif

#ifndef kFSEventStreamEventFlagItemInodeMetaMod
#define kFSEventStreamEventFlagItemInodeMetaMod 0x00000400
#endif

#ifndef kFSEventStreamEventFlagItemRenamed
#define kFSEventStreamEventFlagItemRenamed 0x00000800
#endif

#ifndef kFSEventStreamEventFlagItemModified
#define kFSEventStreamEventFlagItemModified 0x00001000
#endif

#ifndef kFSEventStreamEventFlagItemFinderInfoMod
#define kFSEventStreamEventFlagItemFinderInfoMod 0x00002000
#endif

#ifndef kFSEventStreamEventFlagItemChangeOwner
#define kFSEventStreamEventFlagItemChangeOwner 0x00004000
#endif

#ifndef kFSEventStreamEventFlagItemXattrMod
#define kFSEventStreamEventFlagItemXattrMod 0x00008000
#endif

#ifndef kFSEventStreamEventFlagItemIsFile
#define kFSEventStreamEventFlagItemIsFile 0x00010000
#endif

#ifndef kFSEventStreamEventFlagItemIsDir
#define kFSEventStreamEventFlagItemIsDir 0x00020000
#endif

#ifndef kFSEventStreamEventFlagItemIsSymlink
#define kFSEventStreamEventFlagItemIsSymlink 0x00040000
#endif

static v8::Handle<v8::Object> Constants() {
  NanScope();
  v8::Handle<v8::Object> object = v8::Object::New();
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagNone"), v8::Integer::New(kFSEventStreamEventFlagNone));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagMustScanSubDirs"), v8::Integer::New(kFSEventStreamEventFlagMustScanSubDirs));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagUserDropped"), v8::Integer::New(kFSEventStreamEventFlagUserDropped));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagKernelDropped"), v8::Integer::New(kFSEventStreamEventFlagKernelDropped));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagEventIdsWrapped"), v8::Integer::New(kFSEventStreamEventFlagEventIdsWrapped));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagHistoryDone"), v8::Integer::New(kFSEventStreamEventFlagHistoryDone));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagRootChanged"), v8::Integer::New(kFSEventStreamEventFlagRootChanged));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagMount"), v8::Integer::New(kFSEventStreamEventFlagMount));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagUnmount"), v8::Integer::New(kFSEventStreamEventFlagUnmount));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagItemCreated"), v8::Integer::New(kFSEventStreamEventFlagItemCreated));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagItemRemoved"), v8::Integer::New(kFSEventStreamEventFlagItemRemoved));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagItemInodeMetaMod"), v8::Integer::New(kFSEventStreamEventFlagItemInodeMetaMod));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagItemRenamed"), v8::Integer::New(kFSEventStreamEventFlagItemRenamed));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagItemModified"), v8::Integer::New(kFSEventStreamEventFlagItemModified));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagItemFinderInfoMod"), v8::Integer::New(kFSEventStreamEventFlagItemFinderInfoMod));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagItemChangeOwner"), v8::Integer::New(kFSEventStreamEventFlagItemChangeOwner));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagItemXattrMod"), v8::Integer::New(kFSEventStreamEventFlagItemXattrMod));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagItemIsFile"), v8::Integer::New(kFSEventStreamEventFlagItemIsFile));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagItemIsDir"), v8::Integer::New(kFSEventStreamEventFlagItemIsDir));
  object->Set(v8::String::NewSymbol("kFSEventStreamEventFlagItemIsSymlink"), v8::Integer::New(kFSEventStreamEventFlagItemIsSymlink));
  return scope.Close(object);
}
