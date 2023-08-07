#include "functions.h"

using v8::FunctionTemplate;

// The top level of the module

NAN_MODULE_INIT(InitAll) {
  Nan::Set(target, Nan::New("sendDummyKeystroke").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(sendDummyKeystroke)).ToLocalChecked());
}

NODE_MODULE(NativeExtension, InitAll)
