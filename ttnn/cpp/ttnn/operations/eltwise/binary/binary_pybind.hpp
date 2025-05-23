// SPDX-FileCopyrightText: © 2025 Tenstorrent AI ULC
//
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "pybind11/pybind_fwd.hpp"

namespace ttnn::operations::binary {

namespace py = pybind11;

void py_module(py::module& module);

}  // namespace ttnn::operations::binary
