/*
* Copyright (c) 2015, The Linux Foundation. All rights reserved.
*
* Redistribution and use in source and binary forms, with or without modification, are permitted
* provided that the following conditions are met:
*    * Redistributions of source code must retain the above copyright notice, this list of
*      conditions and the following disclaimer.
*    * Redistributions in binary form must reproduce the above copyright notice, this list of
*      conditions and the following disclaimer in the documentation and/or other materials provided
*      with the distribution.
*    * Neither the name of The Linux Foundation nor the names of its contributors may be used to
*      endorse or promote products derived from this software without specific prior written
*      permission.
*
* THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
* OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef __ROTATOR_INTERFACE_H__
#define __ROTATOR_INTERFACE_H__

#include <core/display_interface.h>
#include <core/buffer_allocator.h>
#include <core/buffer_sync_handler.h>

#include "hw_info_types.h"

namespace sdm {

class RotatorInterface {
 public:
  virtual DisplayError RegisterDisplay(DisplayType type, Handle *display_ctx) = 0;
  virtual void UnregisterDisplay(Handle display_ctx) = 0;
  virtual DisplayError Prepare(Handle display_ctx, HWLayers *hw_layers) = 0;
  virtual DisplayError Commit(Handle display_ctx, HWLayers *hw_layers) = 0;
  virtual DisplayError PostCommit(Handle display_ctx, HWLayers *hw_layers) = 0;
  virtual DisplayError Purge(Handle display_ctx, HWLayers *hw_layers) = 0;

 protected:
  virtual ~RotatorInterface() { }
};

}  // namespace sdm

#endif  // __ROTATOR_INTERFACE_H__

