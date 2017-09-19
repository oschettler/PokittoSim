/**************************************************************************/
/*!
    @file     PythonBindings_SIM.h
    @author   Hannu Viitala

    @section LICENSE

    Software License Agreement (BSD License)

    Copyright (c) 2017, Jonne Valola
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
    1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
    3. Neither the name of the copyright holders nor the
    names of its contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
    EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/**************************************************************************/

#ifndef PYTHON_BINDINGS_H
#define PYTHON_BINDINGS_H

#ifdef __cplusplus
#define EXTERNC extern "C"
#else
#define EXTERNC
#endif

#define BTN_UP      1
#define BTN_RIGHT   2
#define BTN_DOWN    3
#define BTN_LEFT    0

// Main function in uPy library

EXTERNC int PythonMain(int argc, char **argv);

// Pokitto simulator API for uPython.

EXTERNC void Pok_Display_blitFrameBuffer(int16_t x, int16_t y, int16_t w, int16_t h, int16_t invisiblecol_, const uint8_t *buffer);
EXTERNC void Pok_Display_write(const uint8_t *buffer, uint8_t size);
EXTERNC bool Pok_Core_update(bool useDirectMode);
EXTERNC bool Pok_Core_isRunning();
EXTERNC bool Pok_Core_buttons_repeat(uint8_t button, uint8_t period);
EXTERNC bool Pok_Core_buttons_held(uint8_t button, uint8_t period);
EXTERNC bool Pok_Core_buttons_released(uint8_t button);


#endif // PYTHON_BINDINGS_H

