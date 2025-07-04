#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "DOMException.hpp"
#include "enums.hpp"


class GPUPipelineError : public DOMException {
    explicit GPUPipelineError(Handle h) noexcept;

public:
    explicit GPUPipelineError(const emlite::Val &val) noexcept;
    static GPUPipelineError take_ownership(Handle h) noexcept;

    GPUPipelineError clone() const noexcept;
    GPUPipelineError(const jsbind::DOMString& message, const jsbind::Any& options);
    GPUPipelineErrorReason reason() const;
};

