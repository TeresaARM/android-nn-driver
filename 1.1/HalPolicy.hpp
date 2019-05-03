//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include "../ConversionUtils.hpp"

#include <HalInterfaces.h>

namespace armnn_driver
{
namespace hal_1_1
{

class HalPolicy
{
public:
    using Model                     = V1_1::Model;
    using Operand                   = V1_0::Operand;
    using OperandType               = V1_0::OperandType;
    using Operation                 = V1_1::Operation;
    using OperationType             = V1_1::OperationType;
    using getSupportedOperations_cb = V1_1::IDevice::getSupportedOperations_1_1_cb;

    static bool ConvertOperation(const Operation& operation, const Model& model, ConversionData& data);

private:
    static bool ConvertDiv(const Operation& operation, const Model& model, ConversionData& data);
    static bool ConvertSub(const Operation& operation, const Model& model, ConversionData& data);
    static bool ConvertMean(const Operation& operation, const Model& model, ConversionData& data);
    static bool ConvertPad(const Operation& operation, const Model& model, ConversionData& data);
    static bool ConvertSpaceToBatchNd(const Operation& operation, const Model& model, ConversionData& data);
    static bool ConvertSqueeze(const Operation& operation, const Model& model, ConversionData& data);
    static bool ConvertStridedSlice(const Operation& operation, const Model& model, ConversionData& data);
    static bool ConvertTranspose(const Operation& operation, const Model& model, ConversionData& data);
    static bool ConvertBatchToSpaceNd(const Operation& operation, const Model& model, ConversionData& data);
};

} // namespace hal_1_1
} // namespace armnn_driver
