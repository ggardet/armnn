﻿//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include <backendsCommon/Workload.hpp>
#include <backendsCommon/WorkloadData.hpp>

namespace armnn
{

class RefConvolution2dFloat32Workload : public Float32Workload<Convolution2dQueueDescriptor>
{
public:
    explicit RefConvolution2dFloat32Workload(const Convolution2dQueueDescriptor& descriptor,
                                                  const WorkloadInfo& info);
    virtual void Execute() const override;

private:
    std::unique_ptr<ScopedCpuTensorHandle> m_Weight;
    std::unique_ptr<ScopedCpuTensorHandle> m_Bias;

};

} //namespace armnn
