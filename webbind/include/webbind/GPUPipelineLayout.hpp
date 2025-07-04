#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUPipelineLayout : public emlite::Val {
    explicit GPUPipelineLayout(Handle h) noexcept;

public:
    explicit GPUPipelineLayout(const emlite::Val &val) noexcept;
    static GPUPipelineLayout take_ownership(Handle h) noexcept;

    GPUPipelineLayout clone() const noexcept;
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
};

