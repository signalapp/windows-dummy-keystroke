#include "functions.h"

NAN_METHOD(sendDummyKeystroke) {
  INPUT inputs[2] = {};

  inputs[0].type = INPUT_KEYBOARD;
  inputs[0].ki.dwFlags = 0;  // Key down
  inputs[1] = inputs[0];
  inputs[1].ki.dwFlags |= KEYEVENTF_KEYUP;  // Key up

  ::SendInput(2, inputs, sizeof(inputs[0]));
}
