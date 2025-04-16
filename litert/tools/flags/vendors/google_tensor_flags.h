// Copyright 2025 Google LLC.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef THIRD_PARTY_ODML_LITERT_LITERT_TOOLS_FLAGS_VENDORS_GOOGLE_TENSOR_FLAGS_H_
#define THIRD_PARTY_ODML_LITERT_LITERT_TOOLS_FLAGS_VENDORS_GOOGLE_TENSOR_FLAGS_H_

#include <string>

#include "absl/strings/string_view.h"  // from @com_google_absl
#include "litert/c/options/litert_google_tensor_options.h"

// PARSERS (internal) //////////////////////////////////////////////////////////

bool AbslParseFlag(absl::string_view text,
                   LiteRtGoogleTensorOptionsTruncationType* options,
                   std::string* error);

std::string AbslUnparseFlag(LiteRtGoogleTensorOptionsTruncationType options);

namespace litert::google_tensor {}  // namespace litert::google_tensor

#endif  // THIRD_PARTY_ODML_LITERT_LITERT_TOOLS_FLAGS_VENDORS_GOOGLE_TENSOR_FLAGS_H_
